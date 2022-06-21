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

    public Text cropsnumberUI;

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

    public bool cropsTakenByPlayer = false;

    public GameObject GateReadyLocation;
    public GameObject GatePuddleLocation;

    // list of crops Currently found
    public List<GameObject> CropsToHarvest = new List<GameObject>();
    public int harvested_Crops = 0;
    public GameManager Inventory_Crops;

    // Start is called before the first frame update
    void Start()
    {
        Inventory_Crops = FindObjectOfType<GameManager>();
    }

    void doneFarming()
    {
        CancelInvoke("StartFarming");
        inRange = false;
        isFarming = false;
        isAtCropHoverPosition = false;
        CropBotLight.GetComponent<MeshRenderer>().material = BlueGlow;
        CropBotSpotlight.GetComponent<Light>().color = Color.white;

        this.harvested_Crops++;

        Destroy(cropsBeingFarmed);

        cropsnumberUI.text = harvested_Crops.ToString();

        CancelInvoke("doneFarming");
    }

    void StartFarming()
    {
        isFarming = true;
        this.transform.position = Vector3.MoveTowards(this.transform.position, cropFarmingPoint.transform.position, 0.03f);
        CropBotLight.GetComponent<MeshRenderer>().material = YellowGlow;
        CropBotSpotlight.GetComponent<Light>().color = Color.yellow;
        cropsnumberUI.text = harvested_Crops.ToString();
        Invoke("doneFarming", 1.0f);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Crops")
        {
            inRange = true;
            CropsToHarvest.Add(other.gameObject);
            other.gameObject.GetComponent<MeshRenderer>().material = CropDetected;
        }
    }
    void Update()
    {
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
        }

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

                if (this.transform.position == GatePuddleLocation.transform.position)
                {
                    sendThroughGate = false;
                    ReadyToTravel = false;
                }
            }
        }

        if (shouldBeScouting)
        {
            // remove the missing game objects 
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
