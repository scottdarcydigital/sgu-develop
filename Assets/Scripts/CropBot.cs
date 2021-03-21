﻿using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CropBot : MonoBehaviour
{
    public Transform cropHoverPoint;
    public Transform cropFarmingPoint;

    public bool isAtCropHoverPosition;
    public bool inRange;
    public bool isFarming;
    public bool ReadyToTravel;

    public bool shouldBeScouting;
    public bool sendThroughGate;

    // this needs to be dynamic to the crops currently being farmed within the scene. Use the game manager later?
    public GameObject cropsBeingFarmed;

    public GameObject CropBotLight;
    public GameObject CropBotSpotlight;
    public Material YellowGlow;
    public Material BlueGlow;
    public Material CropDetected;

    public GameObject GateReadyLocation;
    public GameObject GatePuddleLocation;

    // list of crops Currently found
    public List<GameObject> CropsToHarvest = new List<GameObject>();

    public GameManager Inventory_Crops;
    
   // when ther script is running again after gate travel, make sure the actual bot renders, not just turning on the 'containers' sphere collider for crop decection 
    void OnEnable()
    {
    }

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("DEBUG BOT ACTIVE");
        Inventory_Crops = FindObjectOfType<GameManager>();
    }

    void doneFarming()
    {
        Debug.Log("DONE FARMING");
        CancelInvoke("StartFarming");
        //  reset values as crop will now have been farmed and are therefore null
        inRange = false;
        isFarming = false;
        isAtCropHoverPosition = false;
        CropBotLight.GetComponent<MeshRenderer>().material = BlueGlow;
        CropBotSpotlight.GetComponent<Light>().color = Color.white;
        Inventory_Crops.Inventory_Crops++;
        Debug.Log("Inventory_Crops : " + Inventory_Crops);

        Destroy(cropsBeingFarmed);

        Debug.Log("987" + cropsBeingFarmed.name);
        Debug.Log("987" + cropHoverPoint.name);
        Debug.Log("987" + cropFarmingPoint.name);

        // cancel this once finished otherwise it will loop and destroy all crops at [0] index
        CancelInvoke("doneFarming");
    }

    void StartFarming()
    {
        isFarming = true;
        this.transform.position = Vector3.MoveTowards(this.transform.position, cropFarmingPoint.transform.position, 0.03f);
        CropBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
        CropBotSpotlight.GetComponent<Light>().color = Color.yellow;
        Invoke("doneFarming", 1.0f);
    }


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("COLS");
        if (other.tag == "Crops")
        {
            inRange = true;

            Debug.Log("Crops Detected : " + other.name);
            CropsToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = CropDetected;
        }
    }

        // Update is called once per frame
    void Update()
    {

        if (Input.GetKeyDown(KeyCode.F1))
        {
            shouldBeScouting = true;
            sendThroughGate = false;
        }

        if (Input.GetKeyDown(KeyCode.F2))
        {
            shouldBeScouting = false;
            sendThroughGate = false;
        }

        if (Input.GetKeyDown(KeyCode.F3))
        {
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
            CropsToHarvest = CropsToHarvest.Where(item => item != null).ToList();

            // remove duplicates from the list
            CropsToHarvest = CropsToHarvest.Distinct().ToList();


            if (CropsToHarvest.Count > 0)
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
                cropsBeingFarmed = CropsToHarvest[0];
                cropHoverPoint = CropsToHarvest[0].transform.GetChild(0);
                cropFarmingPoint = CropsToHarvest[0].transform.GetChild(1);

                if (!isAtCropHoverPosition)
                {
                    this.transform.position = Vector3.MoveTowards(this.transform.position, cropHoverPoint.transform.position, 0.2f);
                }
                else if (isAtCropHoverPosition)
                {
                    Invoke("StartFarming", 0.5f);
                }

                if (this.transform.position == cropHoverPoint.transform.position)
                {
                    isAtCropHoverPosition = true;
                }
            }
        }
    }
}
