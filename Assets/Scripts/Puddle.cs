using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Puddle : MonoBehaviour
{

    // you need to be able to talk to the game manager here...?
    private GameManager kinoLocation;
    private GameManager playerLocation;

    // talk to the remote script, but only when the puddle is active as not to cross wires...
    public Remote remoteScript;


    public GameObject Gate;

    public bool GateRotated = false;

    //public DialGate ShevronsLocked;
    public string Planet_Destination;
    public string gateLocation;
    public string gatePrveiousLocation;
    public Transform spawnLocation;

    [SerializeField] public List<GameObject> Address_Shev_Arr;
    [SerializeField] public List<GameObject> Shevrons;

    public GameObject Player;
    public GameObject Kino;

    // public Camera PlayerCam;

    void spawnKino()
    {
        Kino.transform.position = spawnLocation.transform.position;
    }

    void spawnPlayer()
    {
        Player.transform.position = spawnLocation.transform.position;
    }

    void rotateGate()
    {
        if (!GateRotated)
        {
            Debug.Log("WOOOOO z less");
            spawnLocation.position = new Vector3(1.02f, 1.9f, 2.5f);
            Gate.transform.Rotate(0, 0, 180);
            this.transform.Rotate(0, 0, 180);
            GateRotated = true;
        }

        else if (GateRotated)
        {
            Debug.Log("WOOOOO z more");
            spawnLocation.position = new Vector3(1.02f, 1.9f, -2.5f);
            Gate.transform.Rotate(0, 0, 180);
            this.transform.Rotate(0, 0, 180);
            GateRotated = false;
        }

    }

    void OnEnable()
    {
        Debug.Log("OnEnable called");
        SceneManager.sceneLoaded += OnSceneLoaded;


    }

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        Debug.Log("OnSceneLoaded: " + scene.name);
        Debug.Log(mode);
        Debug.Log("PUDDLE ACTIVE");



        // when the scene changes to a new one, update the gates name to one which is the current scene. 
        gateLocation = scene.name;

        // if the puddle is active when the scene loads, you need to change the planet_destination to the one you where just on

        // turn off symbol lights and turn on the lights of the previous location
        // for (turn off all)
        // for turn on lights == previouslocationm
        // update will then run and update the correct desitination
        var i = 0;

        foreach (GameObject light in Address_Shev_Arr)
        {
            light.SetActive(false);
            i++;
            if (i == 36)
            {
                Planet_Destination = gatePrveiousLocation;
            }
        }

        if (Planet_Destination == "Prefab_GateRoom")
        {
            Address_Shev_Arr[0].SetActive(true);
            Address_Shev_Arr[1].SetActive(true);
            Address_Shev_Arr[2].SetActive(true);
            Address_Shev_Arr[3].SetActive(true);
            Address_Shev_Arr[4].SetActive(true);
            Address_Shev_Arr[5].SetActive(true);
            Address_Shev_Arr[6].SetActive(true);
        } else if (Planet_Destination == "GateRoom_1copy")
        {
            Address_Shev_Arr[1].SetActive(true);
            Address_Shev_Arr[2].SetActive(true);
            Address_Shev_Arr[3].SetActive(true);
            Address_Shev_Arr[4].SetActive(true);
            Address_Shev_Arr[5].SetActive(true);
            Address_Shev_Arr[6].SetActive(true);
            Address_Shev_Arr[7].SetActive(true);
        }
        else if (Planet_Destination == "AddressThree")
        {
            Address_Shev_Arr[29].SetActive(true);
            Address_Shev_Arr[30].SetActive(true);
            Address_Shev_Arr[31].SetActive(true);
            Address_Shev_Arr[32].SetActive(true);
            Address_Shev_Arr[33].SetActive(true);
            Address_Shev_Arr[34].SetActive(true);
            Address_Shev_Arr[35].SetActive(true);
        }



    }

    void Start()
    {
        kinoLocation = FindObjectOfType<GameManager>();
        playerLocation = FindObjectOfType<GameManager>();

        remoteScript = FindObjectOfType<Remote>();

        Debug.Log("WOOOOO z less : " + spawnLocation.transform.position.z);

        // ShevronsLocked = FindObjectOfType<DialGate>();
        // Debug.Log("previousLocation : " + LastSceneLoaded.previousLocation);
        // if the global address was a particular scene,
        // you need to ensure the DailGate.cs Array is set to the shevrons for that address
        // This is because it is blank when the Gate room first loads (player hasn't dialed yet)
        // and in this case they may still want to return back to the planet they where just on

        // as of 02.03.21, you need to store the previous location and currently location in the puddle rather than anywhere else. This is because the player can only arrive at the planet if the puddle is ACTIVE.
        // By default, an inactive game object will run none of its scripts, so this is a clean way of doing it.
        // use the DontDestroyOnLoad(); function to maintain it and switch the details before loadint the next scene. using cuurentGateName == getActiveScnee(); and previousLocation == currentgatelocation; when collision => puddle();.cs



        /*
        if (LastSceneLoaded.previousLocation == "AddressOne")
        {
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[0]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[1]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[2]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[3]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[4]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[5]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[6]);

            Planet_Destination = "AddressOne";
        }

        if (LastSceneLoaded.previousLocation == "AddressTwo")
        {
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[1]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[2]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[3]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[4]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[5]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[6]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[7]);

            Planet_Destination = "AddressTwo";
        }

        if (LastSceneLoaded.previousLocation == "GateRoom_1")
        {
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[29]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[30]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[31]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[32]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[33]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[34]);
            ShevronsLocked.ShevronsLocked_Arr.Add(Address_Shev_Arr[35]);

            Planet_Destination = "GateRoom_1";
        }
        */
    }

    private void OnDisable()
    {
        Debug.Log("PUDDLE INACTIVE");
    }



    // Update is called once per frame
    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (
            Address_Shev_Arr[0].activeSelf &&
            Address_Shev_Arr[1].activeSelf &&
            Address_Shev_Arr[2].activeSelf &&
            Address_Shev_Arr[3].activeSelf &&
            Address_Shev_Arr[4].activeSelf &&
            Address_Shev_Arr[5].activeSelf &&
            Address_Shev_Arr[6].activeSelf
            )
        {
            Planet_Destination = "Prefab_GateRoom";
        }

        if (
            Address_Shev_Arr[1].activeSelf &&
            Address_Shev_Arr[2].activeSelf &&
            Address_Shev_Arr[3].activeSelf &&
            Address_Shev_Arr[4].activeSelf &&
            Address_Shev_Arr[5].activeSelf &&
            Address_Shev_Arr[6].activeSelf &&
            Address_Shev_Arr[7].activeSelf
            )
        {
            Planet_Destination = "GateRoom_1copy";
        }

        if (
            Address_Shev_Arr[29].activeSelf &&
            Address_Shev_Arr[30].activeSelf &&
            Address_Shev_Arr[31].activeSelf &&
            Address_Shev_Arr[32].activeSelf &&
            Address_Shev_Arr[33].activeSelf &&
            Address_Shev_Arr[34].activeSelf &&
            Address_Shev_Arr[35].activeSelf
            )
        {
            Planet_Destination = "AddressThree";
        }

        if (Input.GetKeyDown(KeyCode.C))
        {
            Debug.Log("0603 HIT");
            // only trigger if the player and kino location are not the same
            if (playerLocation.PlayerLocation != kinoLocation.KinoLocation)
            {
                // if you are controlling the kino, load the players level and toggle everything 
                if (remoteScript.kinoCam.enabled && !remoteScript.PlayerCam.enabled) {
                    Debug.Log("Player and kino are NOT on the same planet 0603");

                    rotateGate();

                    gatePrveiousLocation = scene.name;

                    Application.LoadLevel(Planet_Destination);

                    Player.SetActive(true);
                    remoteScript.PlayerCam.enabled = !remoteScript.PlayerCam.enabled;

                    remoteScript.PlayerScript.enabled = true;
                    remoteScript.kinoScript.enabled = false;

                    remoteScript.kinoCam.enabled = !remoteScript.kinoCam.enabled;
                    Kino.SetActive(false);
                }
                else if (remoteScript.PlayerCam.enabled && !remoteScript.kinoCam.enabled)
                {
                    Debug.Log("Player and kino are NOT on the same planet 0603-2");

                    rotateGate();

                    gatePrveiousLocation = scene.name;

                    Application.LoadLevel(Planet_Destination);

                    Kino.SetActive(true);
                    remoteScript.kinoCam.enabled = !remoteScript.kinoCam.enabled;

                    remoteScript.kinoScript.enabled = true;
                    remoteScript.PlayerScript.enabled = false;

                    remoteScript.PlayerCam.enabled = !remoteScript.PlayerCam.enabled;
                    Player.SetActive(false);
                }
                else if (playerLocation.PlayerLocation == kinoLocation.KinoLocation)
                {
                    Debug.Log("Player and kino ARE on the same planet 0603");
                }


                // Toggle switch logic for the player player and kino being on different planets and switching between them, use the same button prompt for this??

                // check if they are on the same planet
                // if so, check they are both active
                // if they care just switch
                // if not then check to see if the kinosLocation is the same as the current scene,
                // if so then toggle the scene to the one the gate is pointing at and toggle the kino and player setActive();
                // else if not, then check to see if the Player is active and its location is the current scene,
                // if so then toggle to the kino and change the scene.



                /*
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[0].name + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[1].name + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[2].name + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[3] + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[4] + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[5] + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[6] + "£££");
                Debug.Log(ShevronsLocked.ShevronsLocked_Arr[7] + "£££");

                Debug.Log(Address_Shev_Arr[0] + "$");
                Debug.Log(Address_Shev_Arr[1] + "£££ $");
                Debug.Log(Address_Shev_Arr[2] + "£££ $");
                Debug.Log(Address_Shev_Arr[3] + "£££ $");
                Debug.Log(Address_Shev_Arr[4] + "£££ $");
                Debug.Log(Address_Shev_Arr[5] + "£££ $");
                Debug.Log(Address_Shev_Arr[6] + "£££ $");
                if (
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[0]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[1]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[2]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[3]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[4]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[5]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[6]) 

                    )
                {
                    Debug.Log("Address ONE DIALED!");
                    Planet_Destination = "AddressOne";
                }

                if (
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[1]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[2]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[3]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[4]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[5]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[6]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[7]) 
                    )
                {
                    Debug.Log("Address TWO DIALED!");
                    Planet_Destination = "AddressTwo";
                }

                if (
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[29]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[30]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[31]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[32]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[33]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[34]) &&
                    ShevronsLocked.ShevronsLocked_Arr.Contains(Address_Shev_Arr[35])
                    )
                {
                    Debug.Log("Address DESTINYT DIALED!");
                    Planet_Destination = "GateRoom_1";
                }
                */

            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Scene scene = SceneManager.GetActiveScene();

        Debug.Log("PUDDLE!");
        //Check to see if the tag on the collider is equal to Player
        if (other.tag == "Player")
        {

            rotateGate();

            // use the game manager to track the location of the gate
            gatePrveiousLocation = scene.name;

            Debug.Log("KINO IS AT : " + kinoLocation.KinoLocation);

            // if the player is going through the gate you need to set the kino to inactive for now...
            // this currently works with the logic in the game manger setPlayerLocationToCurrentScene();
            // if the kino is not at the players next location, then set it to inactive on scene.load();
            if (kinoLocation.KinoLocation != Planet_Destination)
            {
                Kino.SetActive(false);
            } else if (kinoLocation.KinoLocation == Planet_Destination)
            {
                Kino.SetActive(true);
            }

            // when the scene changes, set the player position to have stepped through the gate, by default this will only run if the puddle is active and on the DontDestroyOnLoad(); list
            Player.transform.position = spawnLocation.transform.position;

            /*
            if (Gate.transform.rotation.z == 0.0f)
            {
                Gate.transform.Rotate(0.0f, 0.0f, 180.0f);
                Debug.Log("Gate facing forward");
            } else if (Gate.transform.rotation.z == 180)
            {
                Gate.transform.Rotate(0.0f, 0.0f, 0.0f);
                Debug.Log("Gate facing backaward");
            }*/

            Application.LoadLevel(Planet_Destination);

            // gets around error of callback not setting location in time
            Invoke("spawnPlayer", 2.0f);

        }

        if (other.tag == "Kino")
        {
            Debug.Log("KINO HIT");
            rotateGate();

            // use the game manager to track the location of the gate
            gatePrveiousLocation = scene.name;

            // if the kino is going through the gate you need to set the player to inactive for now...
            // this currently works with the logic in the game manger setKinoLocationToCurrentScene();
            // if the player is not at the kinos next location, then set it to inactive on scene.load();
            if (playerLocation.PlayerLocation != Planet_Destination)
            {
                Player.SetActive(false);
            }
            else if (playerLocation.PlayerLocation == Planet_Destination)
            {
                Player.SetActive(true);
            }


            Application.LoadLevel(Planet_Destination);

            // gets around error of callback not setting location in time
            // later on this will be an animation for the kino, but maybe not the player due to it being first person
            Invoke("spawnKino", 0.2f);

        }

    }
}

