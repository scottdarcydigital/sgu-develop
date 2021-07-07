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
        }

        if (scene.name == "AddressTwo")
        {
            LastSceneLoaded.Add2_kinoLastKnownLocationX = kino.transform.position.x;
            LastSceneLoaded.Add2_kinoLastKnownLocationY = kino.transform.position.y;
            LastSceneLoaded.Add2_kinoLastKnownLocationZ = kino.transform.position.z;
            LastSceneLoaded.Add2_KinoSavedLoc = true;
        }

        if (scene.name == "GateRoom_1")
        {
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationX = kino.transform.position.x;
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationY = kino.transform.position.y;
            LastSceneLoaded.GATEROOM_kinoLastKnownLocationZ = kino.transform.position.z;
            LastSceneLoaded.GATEROOM_KinoSavedLoc = true;
        }
    }

    public void kinoSpawnPosition()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (LastSceneLoaded.Add1_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "AddressOne" && scene.name == "AddressOne" && LastSceneLoaded.kinoJustTravelledThroughGate == false) 
        {
            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.Add1_kinoLastKnownLocationX, LastSceneLoaded.Add1_kinoLastKnownLocationY, LastSceneLoaded.Add1_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        if (LastSceneLoaded.Add2_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "AddressTwo" && scene.name == "AddressTwo" && LastSceneLoaded.kinoJustTravelledThroughGate == false)
        {
            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.Add2_kinoLastKnownLocationX, LastSceneLoaded.Add2_kinoLastKnownLocationY, LastSceneLoaded.Add2_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        if (LastSceneLoaded.GATEROOM_KinoSavedLoc == true && LastSceneLoaded.KinoCurr_Location == "GateRoom_1" && scene.name == "GateRoom_1" && LastSceneLoaded.kinoJustTravelledThroughGate == false)
        {
            kinoDynamicSpawnLocation.position = new Vector3(LastSceneLoaded.GATEROOM_kinoLastKnownLocationX, LastSceneLoaded.GATEROOM_kinoLastKnownLocationY, LastSceneLoaded.GATEROOM_kinoLastKnownLocationZ);
            kino.transform.position = kinoDynamicSpawnLocation.position;
        }

        else if (LastSceneLoaded.kinoJustTravelledThroughGate == true)
        {
            kino.transform.position = GateDefaultSpawnLocation.position;
        }

    } 

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
                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "GateRoom_1" && LastSceneLoaded.KinoCurr_Location != "GateRoom_1")
            {
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
                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
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
                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressOne" && LastSceneLoaded.KinoCurr_Location != "AddressOne")
            {
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
                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
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
                kino.SetActive(true);
                kinoCam.enabled = true;
                PlayerCam.enabled = false;
                Player.SetActive(false);
                kinoSpawnPosition();
            }
            // 2.
            if (LastSceneLoaded.PlayerCurr_Location == "AddressTwo" && LastSceneLoaded.KinoCurr_Location != "AddressTwo")
            {
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
                    kino.SetActive(true);
                    kinoCam.enabled = true;
                    PlayerCam.enabled = false;
                    Player.SetActive(false);
                    kinoSpawnPosition();
                }
                else if (LastSceneLoaded.Player_Active)
                {
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
                
                // only allow if the gate is pointing to where a kino or a player are
                if (LastSceneLoaded.PlayerCurr_Location == Planet_Destination.Planet_Destination || LastSceneLoaded.KinoCurr_Location == Planet_Destination.Planet_Destination) // build issue
                {
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
                            SceneManager.LoadScene(LastSceneLoaded.PlayerCurr_Location);
                        }
                        else if (LastSceneLoaded.Player_Active)
                        {
                            LastSceneLoaded.Player_Active = false;
                            LastSceneLoaded.Kino_Active = true;
                            LastSceneLoaded.previousLocation = scene.name;  // update the global previous scene name
                            SceneManager.LoadScene(LastSceneLoaded.PlayerCurr_Location);
                        }
                    }
                }
            }
        } else
        {

        }
        if (Input.GetKeyDown(KeyCode.H))
        {
            LastSceneLoaded.Log();
        }
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
