 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Remote : MonoBehaviour
{
    [SerializeField] public GameObject remoteMenuUI;

    public bool usingRemote = false;
    public bool playerInRemoteRange = false;
    // Start is called before the first frame update

    //private KinoArrival SaveKinoLocation;

    public Camera kinoCam;
    public Camera PlayerCam;

    public GameObject Kino;
    public GameObject Player;

    public KinoController kinoScript;
    public FirstPersonAIO PlayerScript;

    public Rigidbody player_RB;

    public GameObject Button_1;
    public GameObject Button_2;
    public GameObject Button_3;

    // public GameObject RealKino;
    // public GameObject StandInKino;

    public void switchCams()
    {
        if (!PlayerCam.enabled && kinoCam.enabled)
        {
            Debug.Log("KINO ACTIVE");
            PlayerScript.enabled = false;
            kinoScript.enabled = true;
            //player_RB.constraints = RigidbodyConstraints.FreezeAll; // fixes bug of player momentum continuing after the player has toggled to the kino
                                                                    //Player.SetActive(false);
                                                                    //LastSceneLoaded.Player_Active = false;
                                                                    //LastSceneLoaded.Kino_Active = true;
        }
        else if (PlayerCam.enabled && !kinoCam.enabled) // add additional check to ensure they are in the same level..
        {
            kinoScript.enabled = false;
            PlayerScript.enabled = true;
            Debug.Log("PLAYER ACTIVE");
            //Kino.SetActive(true);
            //LastSceneLoaded.Player_Active = true;
            //LastSceneLoaded.Kino_Active = false;
            //SaveKinoLocation.saveKinoLocation();
        }
    }
    void Start()
    {
        // SaveKinoLocation = FindObjectOfType<KinoArrival>();
        kinoScript = FindObjectOfType<KinoController>();
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        switchCams();
    }

    // Update is called once per frame
    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();
        if (Input.GetKeyDown(KeyCode.F))
        {

            // if (playerInRemoteRange)
            // {
            if (!usingRemote)
                {
                    usingRemote = true;
                    // use the remote interace instead
                    ShowUI();
                    Debug.Log("USING REMOTE : " + usingRemote);
                }
                else
                {
                    usingRemote = false;
                    // use the remote interace instead
                    HideUI();
                    Debug.Log("USING REMOTE : " + usingRemote);
                }
            //}
        }

        if (Input.GetKeyDown(KeyCode.C))
        {

            // only trigger if the kino and player are on both active (appear to be on the same planet)
            if (Player.activeSelf && Kino.activeSelf) {
                
                kinoCam.enabled = !kinoCam.enabled;
                PlayerCam.enabled = !PlayerCam.enabled;



                switchCams();

            } else
            {
                Debug.Log("KINO/PLAYER IS NOT HERE!");
            }

            

        } // end KEy DOPwn on .C


    }

    private void OnTriggerEnter(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            Debug.Log("IN REMOTE");
            //playerInRemoteRange = true;
        }
    }


    private void OnTriggerExit(Collider other)
    {
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            Debug.Log("OUT REMOTE");
           // playerInRemoteRange = false;
        }
    }

    public void ShowUI()
    {
        Scene scene = SceneManager.GetActiveScene();

        Debug.Log("UI OPEB YO");

        // bad way of doing this!
        //Time.timeScale = 0f;
        remoteMenuUI.SetActive(true);

        //taken from FirstPersonAIO.cs
        PlayerScript.enableCameraMovement = false;
        PlayerScript.playerCanMove = false;

        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;

        // manage planets within range

        // ADD ONE
        if (scene.name == "Prefab_GateRoom")
        {
            Button_1.SetActive(false);
            Button_2.SetActive(true);
            Button_3.SetActive(true);
        }

        // ADD TWO
        if (scene.name == "GateRoom_1")
        {
            Button_1.SetActive(false);
            Button_2.SetActive(false);
            Button_3.SetActive(true);
        }

        // ADD THREE
        if (scene.name == "AddressThree")
        {
            Button_1.SetActive(true);
            Button_2.SetActive(false);
            Button_3.SetActive(false);
        }

       

    }

    public void HideUI()
    {
        // bad way of doing this!
        //Time.timeScale = 1f;
        remoteMenuUI.SetActive(false);

        //taken from FirstPersonAIO.cs
        PlayerScript.enableCameraMovement = true;
        PlayerScript.playerCanMove = true;

        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }



}
