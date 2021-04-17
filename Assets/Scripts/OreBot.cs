using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;
using UnityEngine;

public class OreBot : MonoBehaviour
{
    public Transform oreHoverPoint;
    public Transform oreFarmingPoint;

    public bool isAtOreHoverPosition;
    public bool inRange;
    public bool isFarming;
    public bool ReadyToTravel;

    public bool shouldBeScouting;
    public bool sendThroughGate;

    public Text oresnumberUI;

    // this needs to be dynamic to the ores currently being farmed within the scene. Use the game manager later?
    public GameObject oresBeingFarmed;

    // only enable the Ores UI when the bot is NOT farming
    public GameObject PlayerProximityFor_OresUI;
    public GameObject OresUI;

    public GameObject OreBotLight;
    public GameObject OreBotSpotlight;
    public Material YellowGlow;
    public Material BlueGlow;
    public Material OreDetected;

    public bool oresTakenByPlayer = false;

    public GameObject GateReadyLocation;
    public GameObject GatePuddleLocation;

    // list of ores Currently found
    public List<GameObject> OresToHarvest = new List<GameObject>();

    public int harvested_Ores = 0;
    public GameManager Inventory_Ore;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("DEBUG BOT ACTIVE");
        Inventory_Ore = FindObjectOfType<GameManager>();
    }

    void doneFarming()
    {
        Debug.Log("DONE FARMING");
        CancelInvoke("StartFarming");
        //  reset values as ore will now have been farmed and are therefore null
        inRange = false;
        isFarming = false;
        isAtOreHoverPosition = false;
        OreBotLight.GetComponent<MeshRenderer>().material = BlueGlow;
        OreBotSpotlight.GetComponent<Light>().color = Color.white;

        // only add ores to THIS Ore Bot
        this.harvested_Ores++;

        // add the number of ores harvested to the game manager 
        // Inventory_Ores.Inventory_Ores++;
        
        Debug.Log("Inventory_Ores : " + Inventory_Ore);

        Destroy(oresBeingFarmed);

        Debug.Log("987" + oresBeingFarmed.name);
        Debug.Log("987" + oreHoverPoint.name);
        Debug.Log("987" + oreFarmingPoint.name);

        // update the collected ores value text
        oresnumberUI.text = harvested_Ores.ToString();
        Debug.Log("harvested_Ores" + harvested_Ores);

        // cancel this once finished otherwise it will loop and destroy all ores at [0] index
        CancelInvoke("doneFarming");
    }

    void StartFarming()
    {
        isFarming = true;
        this.transform.position = Vector3.MoveTowards(this.transform.position, oreFarmingPoint.transform.position, 0.03f);
        OreBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
        OreBotSpotlight.GetComponent<Light>().color = Color.yellow;
        // update the collected ores value text
        oresnumberUI.text = harvested_Ores.ToString();
        Debug.Log("harvested_Ores" + harvested_Ores);

        Invoke("doneFarming", 1.0f);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ore")
        {
            inRange = true;

            Debug.Log("Ores Detected : " + other.name);
            OresToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = OreDetected;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Disable UI player proximity object if the bot is currently farming
        /* if (isFarming || shouldBeScouting || sendThroughGate)
         {
             if (OresToHarvest.Count > 0)
             {
                 PlayerProximityFor_OresUI.SetActive(false);
             }
         } 
        */

        // if the bot has harvest the last ore for now, set values back to what they should be
        if (shouldBeScouting && OresToHarvest.Count == 0)
        {
            shouldBeScouting = false;
        }

        if (isFarming)
        {
            PlayerProximityFor_OresUI.SetActive(false);
        } 
        else if (shouldBeScouting)
        {
            PlayerProximityFor_OresUI.SetActive(false);
        }
        else if (sendThroughGate)
        {
            PlayerProximityFor_OresUI.SetActive(false);
        }
        else 
        {
            PlayerProximityFor_OresUI.SetActive(true);
        }
        
        if (PlayerProximityFor_OresUI.activeSelf)
        {
          //  oresnumberUI.text = harvested_Ores.ToString();
        }

        // * BUG FIX : Whenever the number should be updated outside of the update function then update the UI value, otherwise this cannot be overridden by the OreBotPlayerInteraction.cs Script

        if (Input.GetKeyDown(KeyCode.F9))
        {

            shouldBeScouting = true;
            sendThroughGate = false;
        }

        if (Input.GetKeyDown(KeyCode.F10))
        {

            shouldBeScouting = false;
            sendThroughGate = false;
        }

        if (Input.GetKeyDown(KeyCode.F11))
        {
            // ensure the ui is hidden after the proximity game object has been set to inactive
            OresUI.SetActive(false);
            shouldBeScouting = false;
            sendThroughGate = true;
        }

        if (sendThroughGate)
        {
            if (this.transform.position != GateReadyLocation.transform.position && !ReadyToTravel)
            {
                this.transform.position = Vector3.MoveTowards(this.transform.position, GateReadyLocation.transform.position, 0.2f);
                if (this.transform.position == GateReadyLocation.transform.position)
                {
                    ReadyToTravel = true;
                }
            }
            
            if (ReadyToTravel)
            {
                this.transform.position = Vector3.MoveTowards(this.transform.position, GatePuddleLocation.transform.position, 0.3f);
                //once the bot has travelled through the gate reset sendthrough gate to false and ready to travel to false as well
                if (this.transform.position == GatePuddleLocation.transform.position)
                {
                    sendThroughGate = false;
                    ReadyToTravel = false;
                }
            }
        }

        if (shouldBeScouting)
        {
            // remove the nissing game objects 
            OresToHarvest = OresToHarvest.Where(item => item != null).ToList();

            // remove duplicates from the list
            OresToHarvest = OresToHarvest.Distinct().ToList();


            if (OresToHarvest.Count > 0)
            {
                inRange = true;
            }
            else
            {
                inRange = false;
            }


            // if you are within range of soe ores, then fly over to them and start farming
            if (inRange)
            {
                oresBeingFarmed = OresToHarvest[0];
                oreHoverPoint = OresToHarvest[0].transform.GetChild(0);
                oreFarmingPoint = OresToHarvest[0].transform.GetChild(1);

                if (!isAtOreHoverPosition)
                {
                    this.transform.position = Vector3.MoveTowards(this.transform.position, oreHoverPoint.transform.position, 0.2f);
                }
                else if (isAtOreHoverPosition)
                {
                    Invoke("StartFarming", 0.5f);
                }

                if (this.transform.position == oreHoverPoint.transform.position)
                {
                    isAtOreHoverPosition = true;
                }
            }
        }
    }
}
