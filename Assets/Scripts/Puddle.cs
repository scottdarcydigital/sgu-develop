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
    private GameManager cropBotLocation;
    private GameManager startCountdownClock;

    // talk to the remote script, but only when the puddle is active as not to cross wires...
    public Remote remoteScript;

    public GameObject Gate;

    public bool GateRotated = false;

    //public DialGate ShevronsLocked;
    public string Planet_Destination;
    public string gateLocation;
    public string gatePrveiousLocation;
    public Transform spawnLocation;
    public Transform CropBotPuddleLocation;

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
            spawnLocation.position = new Vector3(1.02f, 1.9f, 2.5f);
            CropBotPuddleLocation.position = new Vector3(1.0f, 1.8f, -5.0f);
            Gate.transform.Rotate(0, 0, 180);
            this.transform.Rotate(0, 0, 180);
            GateRotated = true;
        }

        else if (GateRotated)
        {
            spawnLocation.position = new Vector3(1.02f, 1.9f, -2.5f);
            CropBotPuddleLocation.position = new Vector3(1.0f, 1.8f, 5.0f);
            Gate.transform.Rotate(0, 0, 180);
            this.transform.Rotate(0, 0, 180);
            GateRotated = false;
        }

    }

    void setToTrue()
    {
        startCountdownClock.isCounting = true;
    }

    void setToFalse()
    {
        startCountdownClock.isCounting = false;
    }

    void resetClock ()
    {
        startCountdownClock.countDownTime = 10;
    }

    void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        Invoke("setToTrue", 0.01f);
        Invoke("setPlanetDestination", 0.01f);
    }

    private void OnDisable()
    {
        Invoke("resetClock", 0.01f);
    }


    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        Planet_Destination = gatePrveiousLocation;

        var i = 0;

        foreach (GameObject light in Address_Shev_Arr)
        {
            light.SetActive(false);
            i++;
        }

        if (Planet_Destination == "Prefab_TemplateLevel_1")
        {
            Address_Shev_Arr[0].SetActive(true);
            Address_Shev_Arr[1].SetActive(true);
            Address_Shev_Arr[2].SetActive(true);
            Address_Shev_Arr[3].SetActive(true);
            Address_Shev_Arr[4].SetActive(true);
            Address_Shev_Arr[5].SetActive(true);
            Address_Shev_Arr[6].SetActive(true);
        } else if (Planet_Destination == "Prefab_TemplateLevel_2")
        {
            Address_Shev_Arr[1].SetActive(true);
            Address_Shev_Arr[2].SetActive(true);
            Address_Shev_Arr[3].SetActive(true);
            Address_Shev_Arr[4].SetActive(true);
            Address_Shev_Arr[5].SetActive(true);
            Address_Shev_Arr[6].SetActive(true);
            Address_Shev_Arr[7].SetActive(true);
        }
        else if (Planet_Destination == "Prefab_TemplateLevel_3")
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
        cropBotLocation = FindObjectOfType<GameManager>();
        startCountdownClock = FindObjectOfType<GameManager>();
        remoteScript = FindObjectOfType<Remote>();
    }

    


    // Update is called once per frame
    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (Input.GetKeyDown(KeyCode.C))
        {
            if (playerLocation.PlayerLocation != kinoLocation.KinoLocation)
            {
                if (remoteScript.kinoCam.enabled && !remoteScript.PlayerCam.enabled) {

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
            }
        }
    }

    void setPlanetDestination()
    {
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
            Planet_Destination = "Prefab_TemplateLevel_1";
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
            Planet_Destination = "Prefab_TemplateLevel_2";
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
            Planet_Destination = "Prefab_TemplateLevel_3";
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Scene scene = SceneManager.GetActiveScene();

        if (other.tag == "Player")
        {
            rotateGate();
            
            gatePrveiousLocation = scene.name;
            
            if (kinoLocation.KinoLocation != Planet_Destination)
            {
                Kino.SetActive(false);
            }
            else if (kinoLocation.KinoLocation == Planet_Destination)
            {
                Kino.SetActive(true);
            }

            Player.transform.position = spawnLocation.transform.position;

            Application.LoadLevel(Planet_Destination);

            Invoke("spawnPlayer", 2.0f);
        }

        if (other.tag == "Kino")
        {
            rotateGate();
            
            gatePrveiousLocation = scene.name;

            if (playerLocation.PlayerLocation != Planet_Destination)
            {
                Player.SetActive(false);
            }
            else if (playerLocation.PlayerLocation == Planet_Destination)
            {
                Player.SetActive(true);
            }

            Application.LoadLevel(Planet_Destination);

            Invoke("spawnKino", 0.2f);
        }

        if (other.tag == "CropBotBody")
        {
            other.transform.parent.GetComponent<SphereCollider>().enabled = false;
            other.transform.gameObject.SetActive(false);

            // IMPORTANT : You will need to use the puddle location in the Cropot.cs script for the spawn location of this bot as it shouldnt conflict or be equal to the spawn location of the player or the kino. 
            cropBotLocation.CropBotLocation = Planet_Destination;
        }
    }
}

