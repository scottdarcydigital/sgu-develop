using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class SealLeaks : MonoBehaviour
{
    public LeaksLevelManagerAlpha LevelManager;

    public bool LevelCompleteStatus = false;

    public bool lockClosingConsole = true;

    [SerializeField] public GameObject sealLeaks_MenuUI_1;

    public bool Console_firstTime_PressedForAudioTrigger = false;
    public bool Console_firstTime_OpeningConsole = false;

    public RadioConversations RadioRef;

    public bool usingRemote = false;
    public bool playerInRemoteRange = false;

    public FirstPersonAIO PlayerScript;

    public Button Button_Console_1_Activate;
    public Button Button_Console_2_Activate;
    public Button Button_Console_3_Activate;
    public Button Button_Console_4_Activate;

    public Rigidbody player_RB;

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

    void Start()
    {
        RadioRef = FindObjectOfType<RadioConversations>();
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Button_Console_1_Activate.onClick.AddListener(ConsoleToggle_1);
        Button_Console_2_Activate.onClick.AddListener(ConsoleToggle_2);
        Button_Console_3_Activate.onClick.AddListener(ConsoleToggle_3);
        Button_Console_4_Activate.onClick.AddListener(ConsoleToggle_4);
        LevelManager = FindObjectOfType<LeaksLevelManagerAlpha>();

        if (LevelManager.LevelSolved == true)
        {

        }
    }

    public void ConsoleToggle_1()
    {
        // This only triggers when the UI button for sealing the door is clicked
        if (!Console_1_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Active;
            Door.GetComponent<Image>().sprite = Door_Closed;

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
            
            // This only triggers when the UI button for sealing the door is clicked
            Debug.Log("CONOLE DONE");
            if (!Console_firstTime_PressedForAudioTrigger)
            {
                consoleSolved();
            }

            Console_1_Active = true;
        }
        else if (Console_1_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            Door.GetComponent<Image>().sprite = Door_Open;

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

            Debug.Log("CONOLE NOT DONE");

            Console_1_Active = false;

        }
    }

    public void ConsoleToggle_2()
    {
        if (!Console_2_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Active;
            Door.GetComponent<Image>().sprite = Door_Closed;

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

            Debug.Log("CONOLE DONE");
            if (!Console_firstTime_PressedForAudioTrigger)
            {
                consoleSolved();
            }

            Console_2_Active = true;
        }
        else if (Console_2_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            Door.GetComponent<Image>().sprite = Door_Open;

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
            Air.GetComponent<Image>().sprite = Air_Active;
            Door.GetComponent<Image>().sprite = Door_Closed;

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

            Debug.Log("CONOLE DONE");
            if (!Console_firstTime_PressedForAudioTrigger)
            {
                consoleSolved();
            }

            Console_3_Active = true;
        }
        else if (Console_3_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            Door.GetComponent<Image>().sprite = Door_Open;

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
            Air.GetComponent<Image>().sprite = Air_Active;
            Door.GetComponent<Image>().sprite = Door_Closed;

            Doors_safe[0] = Doors[0].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[1] = Doors[1].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[2] = Doors[2].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[3] = Doors[3].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[4] = Doors[4].GetComponent<DoorOpen>().DoorSafe = true;
            Doors_safe[5] = Doors[5].GetComponent<DoorOpen>().DoorSafe = false;
            Doors_safe[6] = Doors[6].GetComponent<DoorOpen>().DoorSafe = false;
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
            Doors_safe[6] = false;
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

            Debug.Log("LEVEL FINISHED 1");
            LevelCompleteStatus = true;
            LevelManager.LevelSolved = true;

            if (!Console_firstTime_PressedForAudioTrigger)
            {
                consoleSolved();
            }

            Console_4_Active = true;
        }
        else if (Console_4_Active)
        {
            Air.GetComponent<Image>().sprite = Air_Inactive;
            Door.GetComponent<Image>().sprite = Door_Open;

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
                }
                else
                {
                    usingRemote = false;
                    HideUI();
                }
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            playerInRemoteRange = true;
        }
    }


    private void OnTriggerExit(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            playerInRemoteRange = false;
        }
    }

    public void ShowUI()
    {
        sealLeaks_MenuUI_1.SetActive(true);
        PlayerScript.enableCameraMovement = false;
        PlayerScript.playerCanMove = false;
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;

        Debug.Log("You are at console : " + this.tag);

        consoleOpened();

        //if (!Console_firstTime_OpeningConsole && this.tag == "console1")
        //{
        //    Debug.Log("Console opened for the first time");
            
        //}

    }

    public void consoleOpened()
    {
        if (this.tag == "console1" && !Console_firstTime_OpeningConsole)
        {
            Debug.Log("Console 1 opened for first time...");

            Console_firstTime_OpeningConsole = true;

            RadioRef.audioSource.clip = RadioRef.audioClips[1];
            RadioRef.audioSource.Play();

            StartCoroutine(ExampleCoroutine());
        }
        if (this.tag == "console2" && !Console_firstTime_OpeningConsole)
        {
            Debug.Log("Console 2 opened for first time...");

            Console_firstTime_OpeningConsole = true;

            RadioRef.audioSource.clip = RadioRef.audioClips[4];
            RadioRef.audioSource.Play();
        }
    }


    public void consoleSolved()
    {
        if (this.tag == "console1")
        {
            RadioRef.audioSource.clip = RadioRef.audioClips[3];
            RadioRef.audioSource.Play();
            Console_firstTime_PressedForAudioTrigger = true;
            lockClosingConsole = false;
        }

        if (this.tag == "console2")
        {
            lockClosingConsole = false;
        }

        if (this.tag == "console3")
        {
            RadioRef.audioSource.clip = RadioRef.audioClips[5];
            RadioRef.audioSource.Play();
            Console_firstTime_PressedForAudioTrigger = true;
            lockClosingConsole = false;
        }

        if (this.tag == "console4")
        {
            lockClosingConsole = false;
        }
    }

    IEnumerator ExampleCoroutine()
    {
        if (this.tag == "console1")
        {
            //Print the time of when the function is first called.
            Debug.Log("Started Coroutine for console 1...");

            //yield on a new YieldInstruction that waits for 5 seconds.
            yield return new WaitForSeconds(28);

            //After we have waited 5 seconds print the time again.
            Debug.Log("Finished Coroutine at console 1...");

            if (playerInRemoteRange)
            {
                Debug.Log("Playing console 1 hint....");
                RadioRef.audioSource.clip = RadioRef.audioClips[2];
                RadioRef.audioSource.Play();
            }
           
        }
        
    }

    public void HideUI()
    {
        if (!lockClosingConsole)
        {
            sealLeaks_MenuUI_1.SetActive(false);
            PlayerScript.enableCameraMovement = true;
            PlayerScript.playerCanMove = true;
            Cursor.visible = false;
            Cursor.lockState = CursorLockMode.Locked;

            // Listen out for the Level solved property every time you close this menu..
            if (LevelManager.LevelSolved == true)
            {
                Debug.Log("WELL DONE, TRIGGER LEVEL LOAD....");
                // change the scene here...
                Application.LoadLevel("Level_1_SeakLeaks_Safe");
            }
        } else
        {
            return;
        }

    }
}
