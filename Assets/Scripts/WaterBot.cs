using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Linq;
using UnityEngine;

public class WaterBot : MonoBehaviour
{
    public Transform waterHoverPoint;
    public Transform waterFarmingPoint;

    public bool isAtWaterHoverPosition;
    public bool inRange;
    public bool isFarming;
    public bool ReadyToTravel;

    public bool shouldBeScouting;
    public bool sendThroughGate;

    public Text waternumberUI;

    // this needs to be dynamic to the water currently being farmed within the scene. Use the game manager later?
    public GameObject waterBeingFarmed;

    // only enable the Water UI when the bot is NOT farming
    public GameObject PlayerProximityFor_WaterUI;
    public GameObject WaterUI;

    public GameObject WaterBotLight;
    public GameObject WaterBotSpotlight;
    public Material YellowGlow;
    public Material BlueGlow;
    public Material WaterDetected;

    public bool waterTakenByPlayer = false;

    public GameObject GateReadyLocation;
    public GameObject GatePuddleLocation;

    // list of water Currently found
    public List<GameObject> WaterToHarvest = new List<GameObject>();

    public int harvested_Water = 0;

    public GameManager Inventory_Water;
    // Start is called before the first frame update
    void Start()
    {
        Inventory_Water = FindObjectOfType<GameManager>();
    }

    void doneFarming()
    {
        Debug.Log("DONE FARMING");
        CancelInvoke("StartFarming");
        CancelInvoke("HarvestCount");
        //  reset values as water will now have been farmed and are therefore null
        inRange = false;
        isFarming = false;
        isAtWaterHoverPosition = false;
        WaterBotLight.GetComponent<MeshRenderer>().material = BlueGlow;
        WaterBotSpotlight.GetComponent<Light>().color = Color.white;

        // only add water to THIS Water Bot
        //this.harvested_Water++;

        // add the number of water harvested to the game manager 
        // Inventory_Water.Inventory_Water++;

        Debug.Log("Inventory_Water : " + Inventory_Water);

        // Not needed as water should not be destroyed upon harvest (only encounter lakes etc...)
        //Destroy(waterBeingFarmed);



        Debug.Log("987" + waterBeingFarmed.name);
        Debug.Log("987" + waterHoverPoint.name);
        Debug.Log("987" + waterFarmingPoint.name);

        // update the collected water value text
        waternumberUI.text = harvested_Water.ToString();
        Debug.Log("harvested_Water" + harvested_Water);

        // cancel this once finished otherwise it will loop and destroy all water at [0] index
        CancelInvoke("doneFarming");
    }

    void HarvestCount()
    {
        harvested_Water++;
    }

    void StartFarming()
    {
        if (harvested_Water < 30)   // only farm when the tank is not full
        {
            isFarming = true;
            this.transform.position = Vector3.MoveTowards(this.transform.position, waterFarmingPoint.transform.position, 0.03f);
            WaterBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
            WaterBotSpotlight.GetComponent<Light>().color = Color.yellow;

            if (harvested_Water <= 0)   // effects the ++ increment
            {
                // update the collected crops value text
                waternumberUI.text = harvested_Water.ToString();
                Debug.Log("harvested_Water" + harvested_Water);
                InvokeRepeating("HarvestCount", 0.0f, 3.0f);    // add every one second
            }

        } else
        {
            Debug.Log("Bot is Full");
            return;
        }


    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Water")
        {
            inRange = true;

            Debug.Log("Water Detected : " + other.name);
            WaterToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = WaterDetected;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (harvested_Water >= 30)
        {
            doneFarming();
        }

        // if the bot has harvest the last crop for now, set values back to what they should be
        if (shouldBeScouting && WaterToHarvest.Count == 0)
        {
            shouldBeScouting = false;
        }

        if (isFarming)
        {
            PlayerProximityFor_WaterUI.SetActive(false);
        }
        else if (shouldBeScouting)
        {
            PlayerProximityFor_WaterUI.SetActive(false);
        }
        else if (sendThroughGate)
        {
            PlayerProximityFor_WaterUI.SetActive(false);
        }
        else
        {
            PlayerProximityFor_WaterUI.SetActive(true);
        }

        if (PlayerProximityFor_WaterUI.activeSelf)
        {
            //  cropsnumberUI.text = harvested_Crops.ToString();
        }

        // * BUG FIX : Whenever the number should be updated outside of the update function then update the UI value, otherwise this cannot be overridden by the CropBotPlayerInteraction.cs Script

        if (Input.GetKeyDown(KeyCode.F5))
        {

            shouldBeScouting = true;
            sendThroughGate = false;
        }

        if (Input.GetKeyDown(KeyCode.F6))
        {

            shouldBeScouting = false;
            sendThroughGate = false;
            doneFarming();
        }

        if (Input.GetKeyDown(KeyCode.F7))
        {
            // ensure the ui is hidden after the proximity game object has been set to inactive
            WaterUI.SetActive(false);
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
            WaterToHarvest = WaterToHarvest.Where(item => item != null).ToList();

            // remove duplicates from the list
            WaterToHarvest = WaterToHarvest.Distinct().ToList();


            if (WaterToHarvest.Count > 0)
            {
                inRange = true;
            }
            else
            {
                inRange = false;
            }


            // if you are within range of soe crops, then fly over to them and start farming
            if (inRange)
            {
                waterBeingFarmed = WaterToHarvest[0];
                waterHoverPoint = WaterToHarvest[0].transform.GetChild(0);
                waterFarmingPoint = WaterToHarvest[0].transform.GetChild(1);

                // only move when the bot is not full
                if (harvested_Water < 30)
                {
                    if (!isAtWaterHoverPosition)
                    {
                        this.transform.position = Vector3.MoveTowards(this.transform.position, waterHoverPoint.transform.position, 0.2f);
                    }
                    else if (isAtWaterHoverPosition)
                    {
                        Invoke("StartFarming", 0.5f);
                    }

                    if (this.transform.position == waterHoverPoint.transform.position)
                    {
                        isAtWaterHoverPosition = true;
                    }
                } else
                {
                    Debug.Log("Bot is Full");
                }
            }
        }
    }
}
