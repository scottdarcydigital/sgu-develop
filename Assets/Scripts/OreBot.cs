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
        Inventory_Ore = FindObjectOfType<GameManager>();
    }

    void doneFarming()
    {
        inRange = false;
        isFarming = false;
        isAtOreHoverPosition = false;
        OreBotLight.GetComponent<MeshRenderer>().material = BlueGlow;
        OreBotSpotlight.GetComponent<Light>().color = Color.white;
        this.harvested_Ores++;
        Destroy(oresBeingFarmed);
        oresnumberUI.text = harvested_Ores.ToString();
        CancelInvoke("doneFarming");
    }

    void StartFarming()
    {
        isFarming = true;
        this.transform.position = Vector3.MoveTowards(this.transform.position, oreFarmingPoint.transform.position, 0.03f);
        OreBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
        OreBotSpotlight.GetComponent<Light>().color = Color.yellow;
        oresnumberUI.text = harvested_Ores.ToString();
        Invoke("doneFarming", 1.0f);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Ore")
        {
            inRange = true;
            OresToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = OreDetected;
        }
    }

    void Update()
    {
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

        }

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
                
                if (this.transform.position == GatePuddleLocation.transform.position)
                {
                    sendThroughGate = false;
                    ReadyToTravel = false;
                }
            }
        }

        if (shouldBeScouting)
        {
            OresToHarvest = OresToHarvest.Where(item => item != null).ToList();
            OresToHarvest = OresToHarvest.Distinct().ToList();

            if (OresToHarvest.Count > 0)
            {
                inRange = true;
            }
            else
            {
                inRange = false;
            }
            
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
