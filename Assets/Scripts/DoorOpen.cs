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
            Debug.Log("player at door");
            PlayerInRange = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            Debug.Log("player NOT at door");
            PlayerInRange = false;
            OpenDoors = false;
            CloseDoorsFunction();
        }

    }

    public void OpenDoorsFunction()
    {
        Debug.Log("OpenDoors");
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftOpenPosition.transform.position, 0.05f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthOpenPosition.transform.position, 0.05f);
    }

    public void CloseDoorsFunction()
    {
        Debug.Log("CloseDoors");
        DoorButtonLights[0].GetComponent<MeshRenderer>().material = YellowGlow;
        DoorButtonLights[1].GetComponent<MeshRenderer>().material = YellowGlow;
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftClosePosition.transform.position, 0.1f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthClosePosition.transform.position, 0.1f);
    }

    // Start is called before the first frame update
    void Start()
    { }

    // Update is called once per frame
    void Update()
    {
        // If the Door is not safe, so dont open doors and change light to red...regardless of player location 
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
        // only turn yellow when the Door is safe regardless of player location 
        else if (!PlayerInRange && DoorSafe)
        {
            CloseDoorsFunction();
        }
    }
}
