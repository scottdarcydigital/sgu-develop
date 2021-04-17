using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class OreBotPlayerInteract : MonoBehaviour
{
    // UI of this bot
    public GameObject oreBotUI;
    public GameObject oreBotThis;
    public bool playerNearOreBot = false;
    public bool playerUsingOreBot = false;

    public Text oresnumberUI;
    
    // private GameManager Inventory_Ores;
    public FirstPersonAIO PlayerScript;

    public GameManager Inventory_Ore;

    // public Button Collect;

    // Start is called before the first frame update
    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();

        Inventory_Ore = FindObjectOfType<GameManager>();
        // Collect.onClick.AddListener(CollectOres);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            showOreBotUI();
            //playerNearOreBot = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            //playerNearOreBot = false;
           // playerUsingOreBot = false;
            hideOreBotUI();
        }
    }


    private void Update()
    {
        // oresnumberUI.text = Inventory_Ores.Inventory_Ores.ToString();

        // you only want to get the amount of ores harvested by THIS BOT 
        /*
        if (playerNearOreBot)
        {
            Debug.Log("2503 E-1");

            if (!playerUsingOreBot)
            {
                Debug.Log("2503 E-2");
                showOreBotUI();
            }
            else if (playerUsingOreBot)
            {
                hideOreBotUI();
            }
        }*/

        if (playerUsingOreBot)
        {
            if (Input.GetKeyDown(KeyCode.E))
            {
                CollectOres();
            }
        }

    }

    void showOreBotUI()
    {
        Debug.Log("2503 ();");

        oreBotUI.SetActive(true);



        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = false;
      //  PlayerScript.playerCanMove = false;

       // Cursor.visible = true;
      //  Cursor.lockState = CursorLockMode.None;

        playerUsingOreBot = true;
    }

    void hideOreBotUI()
    {
        oreBotUI.SetActive(false);
        playerUsingOreBot = false;
        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = true;
     //   PlayerScript.playerCanMove = true;

      //  Cursor.visible = false;
      //  Cursor.lockState = CursorLockMode.Locked;
    }

    public void CollectOres()
    {
        Inventory_Ore.Inventory_Ore = Inventory_Ore.Inventory_Ore + int.Parse(oresnumberUI.text);
        oresnumberUI.text = 0.ToString();
        Debug.Log("2503Int" + Inventory_Ore.Inventory_Ore);
       
        // remove the ores from this bot
        oreBotThis.GetComponent<OreBot>().harvested_Ores = 0;
    }
}
