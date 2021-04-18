using UnityEngine;
using UnityEngine.SceneManagement;


public class KinoArrival : MonoBehaviour
{
    public Camera kinoCam;
    public Camera PlayerCam;

    public GameObject kino;
    public GameObject Player;

    public Transform kinoDynamicSpawnLocation;
    public Transform GateDefaultSpawnLocation;

    public DialGate EventHorizon;
    public Puddle Planet_Destination;


    public void saveKinoLocation()
    {
        Scene scene = SceneManager.GetActiveScene();

        LastSceneLoaded.kinoJustTravelledThroughGate = false;

        if (scene.name == "AddressOne")
        {
        LastSceneLoaded.Add1_kinoLastKnownLocationX = kino.transform.position.x;
        LastSceneLoaded.Add1_kinoLastKnownLocationY = kino.transform.position.y;
        LastSceneLoaded.Add1_kinoLastKnownLocationZ = kino.transform.position.z;
        LastSceneLoaded.Add1_KinoSavedLoc = true;
        Debug.Log("KINO POSITION SAVED ADD_1" + kino.transform.position.x + kino.transform.position.y + kino.transform.position.z);
        Debug.Log("KINO POSITION SAVED ADD_1" + LastSceneLoaded.KinoCurr_Location);
        }

        if (scene.name == "AddressTwo")
        {
            LastSceneLoaded.Add2_kinoLastKnownLocationX = kino.transform.position.x;
            LastSceneLoaded.Add2_kinoLastKnownLocationY = kino.transform.position.y;
            LastSceneLoaded.Add2_kinoLastKnownLocationZ = kino.transform.position.z;
            LastSceneLoaded.Add2_KinoSavedLoc = true;
            Debug.Log("KINO POSITION SAVED ADD_2" + kino.transform.position.x + kino.transform.position.y + kino.transform.position.z);
        }

        if (scene.name == "GateRoom_1")
        {
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationX = kino.transform.position.x;
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationY = kino.transform.position.y;
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationZ = kino.transform.position.z;
            LastSceneLoaded.GATEROOM_KinoSavedLoc = true;
            Debug.Log("KINO POSITION SAVED GATEROOM" + kino.transform.position.x + kino.transform.position.y + kino.transform.position.z);
        }

    }
    public void kinoSpawnPosition()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (LastSceneLoaded.Add1_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "AddressOne" && scene.name == "AddressOne" && LastSceneLoaded.kinoJustTravelledThroughGate == false) 
        {
            Debug.Log("KINO POSITION LOADED 1");
            Debug.Log("KINO POSITION LOADED 1" + LastSceneLoaded.Add1_kinoLastKnownLocationX);
            Debug.Log("KINO POSITION LOADED 1" + LastSceneLoaded.Add1_kinoLastKnownLocationY);
            Debug.Log("KINO POSITION LOADED 1" + LastSceneLoaded.Add1_kinoLastKnownLocationZ);

            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.Add1_kinoLastKnownLocationX, LastSceneLoaded.Add1_kinoLastKnownLocationY, LastSceneLoaded.Add1_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        if (LastSceneLoaded.Add2_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "AddressTwo" && scene.name == "AddressTwo" && LastSceneLoaded.kinoJustTravelledThroughGate == false)
        {
            Debug.Log("KINO POSITION LOADED 2");
            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.Add2_kinoLastKnownLocationX, LastSceneLoaded.Add2_kinoLastKnownLocationY, LastSceneLoaded.Add2_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        if (LastSceneLoaded.GATEROOM_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "GateRoom_1" && scene.name == "GateRoom_1" && LastSceneLoaded.kinoJustTravelledThroughGate == false)
        {
            Debug.Log("KINO POSITION LOADED GR");
            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.GATEROOM_kinoLastKnownLocationX, LastSceneLoaded.GATEROOM_kinoLastKnownLocationY, LastSceneLoaded.GATEROOM_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        else if (LastSceneLoaded.kinoJustTravelledThroughGate == true)
        {
            Debug.Log("KINO POSITION LOADED DEFAULT");

            kino.transform.position = GateDefaultSpawnLocation.position;
        }

    } 
    // Start is called before the first frame update
    /*
    public void startMethodOne()
    {
        Scene scene = SceneManager.GetActiveScene();

        // if the player is not on the current active scene then disable them
        if (LastSceneLoaded.PlayerCurrentSceneLocation != scene.name)
        {
            Player.SetActive(false);
            PlayerCam.enabled = false;
            kino.SetActive(true);
            kinoCam.enabled = true;
        }
        else if (LastSceneLoaded.PlayerCurrentSceneLocation == scene.name)
        {
            Player.SetActive(true);
            PlayerCam.enabled = true;
            kinoCam.enabled = false;
        }

        Debug.Log("2502 : PlayerCurrentSceneLocation : " + LastSceneLoaded.PlayerCurrentSceneLocation);
        Debug.Log("2502 : KinoCurrentSceneLocation : " + LastSceneLoaded.KinoCurrentSceneLocation);



        if (LastSceneLoaded.KinoToggledToPlayer == true && LastSceneLoaded.PlayerToggledToKino == false)
        {
            if (LastSceneLoaded.KinoCurrentSceneLocation != LastSceneLoaded.PlayerCurrentSceneLocation)
            {
                Debug.Log("2502 B pressed and they are NOT together...");
                Debug.Log("2502 Player Active");
                Player.SetActive(true);
                kino.SetActive(false);
                PlayerCam.enabled = true;
                kinoCam.enabled = false;
            }
        }

        if (LastSceneLoaded.PlayerToggledToKino == true && LastSceneLoaded.KinoToggledToPlayer == false)
        {
            if (LastSceneLoaded.KinoCurrentSceneLocation != LastSceneLoaded.PlayerCurrentSceneLocation)
            {
                Debug.Log("2502 B pressed and they are NOT together...");
                Debug.Log("2502 Kino Active");
                Player.SetActive(false);
                kino.SetActive(true);
                PlayerCam.enabled = false;
                kinoCam.enabled = true;
            }
        }


        // if the location of the kino is the same as the current active scene, spawn it
        if (LastSceneLoaded.KinoCurrentSceneLocation == "AddressOne")
        {
            Debug.Log("2402 : The kino is on planet one!");

            // Spawn the kino at the correct location if it does not have a saved location
            if (!LastSceneLoaded.kinoThroughGateNewLocationHasBeenSaved)
            {
                kino.transform.position = kinoSpawnLocation.transform.position;
            }
            // If it DOES have a saved location, then spawn it at that location
            else if (LastSceneLoaded.kinoThroughGateNewLocationHasBeenSaved)
            {
                kino.transform.position = new Vector3(LastSceneLoaded.kinoLastKnownLocationX, LastSceneLoaded.kinoLastKnownLocationY, LastSceneLoaded.kinoLastKnownLocationZ);
            }

        }

        // if the Play has a current location of Planet one, spawn them at the PlayerGateSpawn location 
        if (LastSceneLoaded.PlayerCurrentSceneLocation == "AddressOne")
        {
            Debug.Log("2402 : The player is on planet one!");
        }
    }
    */

    public void startMethodTwo()
    {

        Scene scene = SceneManager.GetActiveScene();

        // 1. if kino current location is {this} and player current location is NOT                    : Kino
        // 2. if player current location is {this} and kino is NOT                                     : Player
        // 3. if kino current location is {this} and player current location is {this}                 : Both
        // 3a. if player is currently active ALL KINOS
        // 3b. if player is currently active ALL PLAYERS

        if (scene.name == "GateRoom_1" && LastSceneLoaded.Level_initial_Load == true)
        {
            // 1.
            if (LastSceneLoaded.KinoCurr_Location == "GateRoom_1" && LastSceneLoaded.PlayerCurr_Location != "GateRoom_1")
            {
                Debug.Log("State : 1 GR");

                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "GateRoom_1" && LastSceneLoaded.KinoCurr_Location != "GateRoom_1")
            {
                Debug.Log("State : 2 GR");

                kinoCam.enabled = false;
                kino.SetActive(false);
                Player.SetActive(true);
                PlayerCam.enabled = true;
                kinoSpawnPosition();
            }
            // 3.
            if (LastSceneLoaded.PlayerCurr_Location == "GateRoom_1" && LastSceneLoaded.KinoCurr_Location == "GateRoom_1")
            {
                if (LastSceneLoaded.Kino_Active)
                {
                    Debug.Log("State : 3a GR");

                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
                    Debug.Log("State : 3b GR");

                    kinoCam.enabled = false;
                    kino.SetActive(true);
                    Player.SetActive(true);
                    PlayerCam.enabled = true;
                    kinoSpawnPosition();
                }

            }
        }

        if (scene.name == "AddressOne")
        {
            // 1.
            if (LastSceneLoaded.KinoCurr_Location == "AddressOne" && LastSceneLoaded.PlayerCurr_Location != "AddressOne")
            {
                Debug.Log("State : 1 ADD");

                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressOne" && LastSceneLoaded.KinoCurr_Location != "AddressOne")
            {
                Debug.Log("State : 2 ADD");

                kinoCam.enabled = false;
                kino.SetActive(false);
                Player.SetActive(true);
                PlayerCam.enabled = true;
                kinoSpawnPosition();
            }
            // 3.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressOne" && LastSceneLoaded.KinoCurr_Location == "AddressOne")
            {
                if (LastSceneLoaded.Kino_Active)
                {
                    Debug.Log("State : 3a ADD");

                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
                    Debug.Log("State : 3b ADD");
                    kinoCam.enabled = false;
                    kino.SetActive(true);
                    Player.SetActive(true);
                    PlayerCam.enabled = true;
                    kinoSpawnPosition();
                }

            }

        }

        if (scene.name == "AddressTwo")
        {
            // 1.
            if (LastSceneLoaded.KinoCurr_Location == "AddressTwo" && LastSceneLoaded.PlayerCurr_Location != "AddressTwo")
            {
                Debug.Log("State : 1 ADD_2");

                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressTwo" && LastSceneLoaded.KinoCurr_Location != "AddressTwo")
            {
                Debug.Log("State : 2 ADD_2");

                kinoCam.enabled = false;
                kino.SetActive(false);
                Player.SetActive(true);
                PlayerCam.enabled = true;
                kinoSpawnPosition();
            }
            // 3.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressTwo" && LastSceneLoaded.KinoCurr_Location == "AddressTwo")
            {
                if (LastSceneLoaded.Kino_Active)
                {
                    Debug.Log("State : 3a ADD_2");

                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
                    Debug.Log("State : 3b ADD_2");
                    kinoCam.enabled = false;
                    kino.SetActive(true);
                    Player.SetActive(true);
                    PlayerCam.enabled = true;
                    kinoSpawnPosition();
                }

            }

        }

        // Initial load above function for gateroom should fail 
        if (scene.name == "GateRoom_1" && LastSceneLoaded.Level_initial_Load == false)
        {
            LastSceneLoaded.KinoCurr_Location = "GateRoom_1";
            LastSceneLoaded.PlayerCurr_Location = "GateRoom_1";
            LastSceneLoaded.Player_Active = true;
            LastSceneLoaded.Level_initial_Load = true;
        }


    }

    public void updateMethodTwo()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (Input.GetKeyDown(KeyCode.B))
        {
        }

        // to avoid a bug with the previousscene for the dial gate script being set to this location,

        // only allow when the gate is active
        if (EventHorizon.eventHorizon.activeSelf) {
            // only allow the B switch to occur if the kino and player are in differnt scenes
            if (LastSceneLoaded.PlayerCurr_Location != LastSceneLoaded.KinoCurr_Location) {
                

                Debug.Log("2702-A");
                // only allow if the gate is pointing to where a kino or a player are
                if (LastSceneLoaded.PlayerCurr_Location == Planet_Destination.Planet_Destination || LastSceneLoaded.KinoCurr_Location == Planet_Destination.Planet_Destination) // build issue
                {
                    Debug.Log("2702-B");

                    if (Input.GetKeyDown(KeyCode.B))
                    {
                        SceneManager.LoadScene("GateRoom_1");
                        // toggle the player or kino active states accordingly
                        if (LastSceneLoaded.Kino_Active)
                        {
                            LastSceneLoaded.Player_Active = true;
                            LastSceneLoaded.Kino_Active = false;
                            LastSceneLoaded.previousLocation = scene.name;  // update the global previous scene name
                            saveKinoLocation();
                            // Application.LoadLevel(LastSceneLoaded.PlayerCurr_Location);
                            SceneManager.LoadScene(LastSceneLoaded.PlayerCurr_Location);
                        }
                        else if (LastSceneLoaded.Player_Active)
                        {

                            LastSceneLoaded.Player_Active = false;
                            LastSceneLoaded.Kino_Active = true;
                            LastSceneLoaded.previousLocation = scene.name;  // update the global previous scene name

                            Debug.Log("2702-C : " + LastSceneLoaded.previousLocation + " : " + LastSceneLoaded.Player_Active + LastSceneLoaded.Kino_Active);
                            SceneManager.LoadScene(LastSceneLoaded.PlayerCurr_Location);

                           // Application.LoadLevel(LastSceneLoaded.KinoCurr_Location);
                        }
                    }
                }
            }
        } else
        {
            Debug.Log("PISSOFF");
        }
        if (Input.GetKeyDown(KeyCode.H))
        {
            LastSceneLoaded.Log();
        }
       // if (Input.GetKeyDown(KeyCode.M))
       // {
        //    saveKinoLocation();
       // }
    }
    void Start()
    {
        EventHorizon = FindObjectOfType<DialGate>();
        Planet_Destination = FindObjectOfType<Puddle>();
        startMethodTwo();
    }
    // Update is called once per frame
    void Update()
    {
        updateMethodTwo();
 
    }
}
