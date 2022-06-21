using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorOpen : MonoBehaviour
{
    public GameObject Door_Left;   
    public GameObject Door_Right;   
    public GameObject Door_LeftOpenPosition;
    public GameObject Door_RigthOpenPosition;
    public GameObject Door_LeftClosePosition;
    public GameObject Door_RigthClosePosition;

    // occlusion volume for anything behind the door
    // public GameObject OcclussionVolume;

    //public GameObject DoorButtonLight;
    public List<GameObject> DoorButtonLights = new List<GameObject>();

    public Material RedGlow;
    public Material BlueGlow;
    public Material YellowGlow;

    public bool DoorSafe;
    public bool PlayerInRange;
    public bool OpenDoors;

    private void OnTriggerEnter(Collider other)
    {

        if (other.tag == "Player")
        {
            PlayerInRange = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            PlayerInRange = false;
            OpenDoors = false;
            CloseDoorsFunction();
        }
    }

    public void OpenDoorsFunction()
    {
        this.GetComponent<OcclusionPortal>().open = true;
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftOpenPosition.transform.position, 0.05f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthOpenPosition.transform.position, 0.05f);
    }

    public void CloseDoorsFunction()
    {
        DoorButtonLights[0].GetComponent<MeshRenderer>().material = YellowGlow;
        DoorButtonLights[1].GetComponent<MeshRenderer>().material = YellowGlow;
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftClosePosition.transform.position, 0.1f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthClosePosition.transform.position, 0.1f);
        
        // only trigger when doors are fully closed (position based due to tick time flucuation)
        if (Door_Left.transform.position == Door_LeftClosePosition.transform.position)
        {
            this.GetComponent<OcclusionPortal>().open = false;
        }

    }

    // Start is called before the first frame update
    void Start()
    { }

    // Update is called once per frame
    void Update()
    {
        if (!DoorSafe)
        {
            DoorButtonLights[0].GetComponent<MeshRenderer>().material = RedGlow;
            DoorButtonLights[1].GetComponent<MeshRenderer>().material = RedGlow;
            return;
        }

        if (DoorSafe && !PlayerInRange)
        {
            DoorButtonLights[0].GetComponent<MeshRenderer>().material = YellowGlow;
            DoorButtonLights[1].GetComponent<MeshRenderer>().material = YellowGlow;
        }

        if (PlayerInRange)
        {
            if (DoorSafe)
            {
                if (Input.GetKeyDown(KeyCode.E))
                {
                    OpenDoors = true;
                    DoorButtonLights[0].GetComponent<MeshRenderer>().material = BlueGlow;
                    DoorButtonLights[1].GetComponent<MeshRenderer>().material = BlueGlow;
                }

                if (OpenDoors)
                {
                    OpenDoorsFunction();
                }
            } 
        }
        else if (!PlayerInRange && DoorSafe)
        {
            CloseDoorsFunction();
        }
    }
}
