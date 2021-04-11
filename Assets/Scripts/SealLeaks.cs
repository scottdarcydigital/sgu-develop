﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class SealLeaks : MonoBehaviour
{
    [SerializeField] public GameObject sealLeaks_MenuUI_1;

    public bool usingRemote = false;
    public bool playerInRemoteRange = false;

    public FirstPersonAIO PlayerScript;

    public Button Button_Console_1_Activate;
    public Button Button_Console_2_Activate;
    public Button Button_Console_3_Activate;
    public Button Button_Console_4_Activate;

    public Rigidbody player_RB;

    // Doors that can be unlocked...

    public List<GameObject> Doors = new List<GameObject>();
    public List<bool> Doors_safe = new List<bool>();

    public Image Air;
    public Image Door;

    public bool Console_1_Active = false;
    public bool Console_2_Active = false;
    public bool Console_3_Active = false;
    public bool Console_4_Active = false;

    public Sprite Active;
    public Sprite Inactive;

    public Sprite Air_Inactive;
    public Sprite Air_Active;

    public Sprite Door_Open;
    public Sprite Door_Closed;


    // Start is called before the first frame update
    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Button_Console_1_Activate.onClick.AddListener(ConsoleToggle_1);
        Button_Console_2_Activate.onClick.AddListener(ConsoleToggle_2);
        Button_Console_3_Activate.onClick.AddListener(ConsoleToggle_3);
        Button_Console_4_Activate.onClick.AddListener(ConsoleToggle_4);
    }

    public void ConsoleToggle_1()
    {
        // turn on console via button for door 16
        if (!Console_1_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Active;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Closed;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = false;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = true;
            Doors_safe[3] = true;
            Doors_safe[4] = true;
            Doors_safe[5] = false;
            Doors_safe[6] = false;
            Doors_safe[7] = true;
            Doors_safe[8] = false;
            Doors_safe[9] = false;
            Doors_safe[10] = false;
            Doors_safe[11] = true;
            Doors_safe[12] = false;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = false;
            Doors_safe[16] = true;
            Doors_safe[17] = false;

            Console_1_Active = true;
        }
        // turn console OFF, doors 1 and 16 should be open and no others
        else if (Console_1_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Open;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = false;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = false;
            Doors_safe[3] = false;
            Doors_safe[4] = false;
            Doors_safe[5] = false;
            Doors_safe[6] = false;
            Doors_safe[7] = false;
            Doors_safe[8] = false;
            Doors_safe[9] = false;
            Doors_safe[10] = false;
            Doors_safe[11] = true;
            Doors_safe[12] = false;
            Doors_safe[13] = false;
            Doors_safe[14] = false;
            Doors_safe[15] = true;
            Doors_safe[16] = true;
            Doors_safe[17] = false;

            Console_1_Active = false;
        }
    }

    public void ConsoleToggle_2()
    {
        // turn on console via button for door 16
        if (!Console_2_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Active;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Closed;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = false;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = false;
            Doors_safe[3] = false;
            Doors_safe[4] = false;
            Doors_safe[5] = true;
            Doors_safe[6] = false;
            Doors_safe[7] = false;
            Doors_safe[8] = false;
            Doors_safe[9] = false;
            Doors_safe[10] = true;
            Doors_safe[11] = false;
            Doors_safe[12] = true;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = false;
            Doors_safe[16] = true;
            Doors_safe[17] = false;

            Console_2_Active = true;
        }
        // turn console OFF, doors 1 and 16 should be open and no others
        else if (Console_2_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Open;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = false;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = true;
            Doors_safe[3] = true;
            Doors_safe[4] = true;
            Doors_safe[5] = false;
            Doors_safe[6] = false;
            Doors_safe[7] = true;
            Doors_safe[8] = false;
            Doors_safe[9] = false;
            Doors_safe[10] = false;
            Doors_safe[11] = true;
            Doors_safe[12] = false;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = false;
            Doors_safe[16] = true;
            Doors_safe[17] = false;

            Console_2_Active = false;
        }
    }

    public void ConsoleToggle_3()
    {
        if (!Console_3_Active)
        {
            Debug.Log("!Console_3_Active");

            Air.GetComponent<Image>().sprite = Air_Active;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Closed;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = true;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = false;
            Doors_safe[3] = false;
            Doors_safe[4] = false;
            Doors_safe[5] = true;
            Doors_safe[6] = false;
            Doors_safe[7] = false;
            Doors_safe[8] = false;
            Doors_safe[9] = true;
            Doors_safe[10] = true;
            Doors_safe[11] = false;
            Doors_safe[12] = true;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = true;
            Doors_safe[16] = false;
            Doors_safe[17] = true;

            Console_3_Active = true;
        }
        else if (Console_3_Active)
        {
            Debug.Log("Console_3_Active");
            Air.GetComponent<Image>().sprite = Air_Inactive;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Open;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = false;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = false;
            Doors_safe[3] = false;
            Doors_safe[4] = false;
            Doors_safe[5] = true;
            Doors_safe[6] = false;
            Doors_safe[7] = false;
            Doors_safe[8] = false;
            Doors_safe[9] = false;
            Doors_safe[10] = true;
            Doors_safe[11] = false;
            Doors_safe[12] = true;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = false;
            Doors_safe[16] = true;
            Doors_safe[17] = false;

            Console_3_Active = false;
        }
    }

    public void ConsoleToggle_4()
    {
        if (!Console_4_Active)
        {
            Debug.Log("!Console_4_Active");

            Air.GetComponent<Image>().sprite = Air_Active;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Closed;

            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = true;

            Doors_safe[0] = true;
            Doors_safe[1] = true;
            Doors_safe[2] = true;
            Doors_safe[3] = true;
            Doors_safe[4] = true;
            Doors_safe[5] = false;
            Doors_safe[6] = true;
            Doors_safe[7] = true;
            Doors_safe[8] = true;
            Doors_safe[9] = true;
            Doors_safe[10] = true;
            Doors_safe[11] = false;
            Doors_safe[12] = true;
            Doors_safe[13] = true;
            Doors_safe[14] = true;
            Doors_safe[15] = true;
            Doors_safe[16] = false;
            Doors_safe[17] = true;

            Console_4_Active = true;
        }
        else if (Console_4_Active)
        {
            Debug.Log("Console_4_Active");
            Air.GetComponent<Image>().sprite = Air_Inactive;
            // Door is sealed so change image
            Door.GetComponent<Image>().sprite = Door_Open;

            // set doors NOT safe doors are 
            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[7] = Doors[7].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[8] = Doors[8].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[9] = Doors[9].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[10] = Doors[10].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[11] = Doors[11].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[12] = Doors[12].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[13] = Doors[13].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[14] = Doors[14].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[15] = Doors[15].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[16] = Doors[16].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[17] = Doors[17].GetComponent<DoorOpen>().DoorSafe = true;

            Doors_safe[0] = true;
            Doors_safe[1] = false;
            Doors_safe[2] = false;
            Doors_safe[3] = false;
            Doors_safe[4] = false;
            Doors_safe[5] = true;
            Doors_safe[6] = false;
            Doors_safe[7] = false;
            Doors_safe[8] = false;
            Doors_safe[9] = true;
            Doors_safe[10] = true;
            Doors_safe[11] = false;
            Doors_safe[12] = true;
            Doors_safe[13] = false;
            Doors_safe[14] = true;
            Doors_safe[15] = true;
            Doors_safe[16] = false;
            Doors_safe[17] = true;

            Console_4_Active = false;
        }
    }

    /*
public void ConsoleToggle_1()
    {
            Debug.Log("BUTTON PRESSED");
            if (Doors_safe[0])
            {
                Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = false;
                Doors_safe[0] = false;

                Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = true;
                Doors_safe[3] = true;







                // this should be whatever the selected (on/green) sprite it
                Button_Console_1.GetComponent<Image>().sprite = Active;
                // change the map air image
                Air.GetComponent<Image>().sprite = Air_Inactive;
                // Door is sealed so change image
                Door.GetComponent<Image>().sprite = Door_Open;
                //close the door using its script
                Doors[3].GetComponent<DoorOpen>().CloseDoorsFunction();
            }

            else if (!Doors_safe[0])
            {
                Debug.Log("BUTTON Door is now sealed");
                Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
                Doors_safe[0] = true;

                Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = false;
                Doors_safe[3] = false;

                // Button_Console_1 should be whatever the selected (on/green) sprite it
                Button_Console_1.GetComponent<Image>().sprite = Active;
                // change the map air image
                Air.GetComponent<Image>().sprite = Air_Active;
                // Door is sealed so change image
                Door.GetComponent<Image>().sprite = Door_Closed;

            }
    }

*/
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (playerInRemoteRange)
            {
                if (!usingRemote)
                {
                    usingRemote = true;
                    ShowUI();
                    Debug.Log("USING REMOTE : " + usingRemote);
                }
                else
                {
                    usingRemote = false;
                    HideUI();
                    Debug.Log("USING REMOTE : " + usingRemote);
                }
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            Debug.Log("IN REMOTE");
            playerInRemoteRange = true;
        }
    }


    private void OnTriggerExit(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            Debug.Log("OUT REMOTE");
            playerInRemoteRange = false;
        }
    }

    public void ShowUI()
    {
        Debug.Log("UI OPEB YO");
        sealLeaks_MenuUI_1.SetActive(true);
        PlayerScript.enableCameraMovement = false;
        PlayerScript.playerCanMove = false;
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }

    public void HideUI()
    {
        sealLeaks_MenuUI_1.SetActive(false);
        PlayerScript.enableCameraMovement = true;
        PlayerScript.playerCanMove = true;
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }
}