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

    public void switchCams()
    {
        if (!PlayerCam.enabled && kinoCam.enabled)
        {
            PlayerScript.enabled = false;
            kinoScript.enabled = true;
        }
        else if (PlayerCam.enabled && !kinoCam.enabled) // add additional check to ensure they are in the same level..
        {
            kinoScript.enabled = false;
            PlayerScript.enabled = true;
        }
    }
    void Start()
    {
        kinoScript = FindObjectOfType<KinoController>();
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        switchCams();
    }

    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();
        if (Input.GetKeyDown(KeyCode.F))
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

        if (Input.GetKeyDown(KeyCode.C))
        {

            if (Player.activeSelf && Kino.activeSelf) {
                kinoCam.enabled = !kinoCam.enabled;
                PlayerCam.enabled = !PlayerCam.enabled;
                switchCams();

            } 
        } 
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {

        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {

        }
    }

    public void ShowUI()
    {
        Scene scene = SceneManager.GetActiveScene();

        remoteMenuUI.SetActive(true);

        PlayerScript.enableCameraMovement = false;
        PlayerScript.playerCanMove = false;

        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;

        if (scene.name == "Prefab_GateRoom")
        {
            Button_1.SetActive(false);
            Button_2.SetActive(true);
            Button_3.SetActive(true);
        }

        if (scene.name == "GateRoom_1")
        {
            Button_1.SetActive(false);
            Button_2.SetActive(false);
            Button_3.SetActive(true);
        }

        if (scene.name == "AddressThree")
        {
            Button_1.SetActive(true);
            Button_2.SetActive(false);
            Button_3.SetActive(false);
        }
    }

    public void HideUI()
    {
        remoteMenuUI.SetActive(false);
        PlayerScript.enableCameraMovement = true;
        PlayerScript.playerCanMove = true;
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }
}
