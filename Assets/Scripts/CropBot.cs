using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.UI;
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
<<<<<<< Updated upstream
=======
<<<<<<< HEAD

    public Text cropsnumberUI;
=======
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes

    // this needs to be dynamic to the crops currently being farmed within the scene. Use the game manager later?
    public GameObject cropsBeingFarmed;

    // only enable the Crops UI when the bot is NOT farming
    public GameObject PlayerProximityFor_CropsUI;
    public GameObject CropsUI;

    public GameObject CropBotLight;
    public GameObject CropBotSpotlight;
    public Material YellowGlow;
    public Material BlueGlow;
    public Material CropDetected;

<<<<<<< Updated upstream
=======
<<<<<<< HEAD
    public bool cropsTakenByPlayer = false;

=======
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes
    public GameObject GateReadyLocation;
    public GameObject GatePuddleLocation;

    // list of crops Currently found
    public List<GameObject> CropsToHarvest = new List<GameObject>();

    public int harvested_Crops = 0;
    public GameManager Inventory_Crops;
<<<<<<< Updated upstream
=======
<<<<<<< HEAD
=======
>>>>>>> Stashed changes
    
   // when ther script is running again after gate travel, make sure the actual bot renders, not just turning on the 'containers' sphere collider for crop decection 
    void OnEnable()
    {
    }
<<<<<<< Updated upstream
=======
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes

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

        // only add crops to THIS Crop Bot
        this.harvested_Crops++;

        // add the number of crops harvested to the game manager 
        // Inventory_Crops.Inventory_Crops++;
        
        Debug.Log("Inventory_Crops : " + Inventory_Crops);

        Destroy(cropsBeingFarmed);

<<<<<<< Updated upstream
=======
<<<<<<< HEAD


=======
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes
        Debug.Log("987" + cropsBeingFarmed.name);
        Debug.Log("987" + cropHoverPoint.name);
        Debug.Log("987" + cropFarmingPoint.name);

        // update the collected crops value text
        cropsnumberUI.text = harvested_Crops.ToString();
        Debug.Log("harvested_Crops" + harvested_Crops);

        // cancel this once finished otherwise it will loop and destroy all crops at [0] index
        CancelInvoke("doneFarming");
    }

    void StartFarming()
    {
        isFarming = true;
        this.transform.position = Vector3.MoveTowards(this.transform.position, cropFarmingPoint.transform.position, 0.03f);
        CropBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
        CropBotSpotlight.GetComponent<Light>().color = Color.yellow;
        // update the collected crops value text
        cropsnumberUI.text = harvested_Crops.ToString();
        Debug.Log("harvested_Crops" + harvested_Crops);

        Invoke("doneFarming", 1.0f);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Crops")
        {
            inRange = true;

            Debug.Log("Crops Detected : " + other.name);
            CropsToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = CropDetected;
        }
    }

<<<<<<< HEAD
    // Update is called once per frame
=======
        // Update is called once per frame
<<<<<<< Updated upstream
=======
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes
    void Update()
    {
        // Disable UI player proximity object if the bot is currently farming
        /* if (isFarming || shouldBeScouting || sendThroughGate)
         {
             if (CropsToHarvest.Count > 0)
             {
                 PlayerProximityFor_CropsUI.SetActive(false);
             }
         } 
        */

<<<<<<< Updated upstream
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
=======
<<<<<<< HEAD
        // if the bot has harvest the last crop for now, set values back to what they should be
        if (shouldBeScouting && CropsToHarvest.Count == 0)
        {
            shouldBeScouting = false;
        }

        if (isFarming)
        {
            PlayerProximityFor_CropsUI.SetActive(false);
        } 
        else if (shouldBeScouting)
        {
            PlayerProximityFor_CropsUI.SetActive(false);
        }
        else if (sendThroughGate)
        {
            PlayerProximityFor_CropsUI.SetActive(false);
        }
        else 
        {
            PlayerProximityFor_CropsUI.SetActive(true);
        }
        
        if (PlayerProximityFor_CropsUI.activeSelf)
        {
          //  cropsnumberUI.text = harvested_Crops.ToString();
        }

        // * BUG FIX : Whenever the number should be updated outside of the update function then update the UI value, otherwise this cannot be overridden by the CropBotPlayerInteraction.cs Script

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
            // ensure the ui is hidden after the proximity game object has been set to inactive
            CropsUI.SetActive(false);
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
>>>>>>> Stashed changes
            }
        }

<<<<<<< Updated upstream

            // if you are within range of soe crops, then fly over to them and start farming
            if (inRange)
            {
=======
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
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
=======
=======
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
>>>>>>> 055aed353f99e8a518a1fa7b656cab26511b91ba
>>>>>>> Stashed changes
    }
}
