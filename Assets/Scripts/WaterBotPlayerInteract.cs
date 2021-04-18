using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class WaterBotPlayerInteract : MonoBehaviour
{
    // UI of this bot
    public GameObject waterBotUI;
    public GameObject waterBotThis;
    public bool playerNearWaterBot = false;
    public bool playerUsingWaterBot = false;

    public Text waternumberUI;
    
    // private GameManager Inventory_Crops;
    public FirstPersonAIO PlayerScript;

    public GameManager Inventory_Water;

    // public Button Collect;

    // Start is called before the first frame update
    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        
        Inventory_Water = FindObjectOfType<GameManager>();
        // Collect.onClick.AddListener(CollectCrops);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            showCropBotUI();
            //playerNearCropBot = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            //playerNearCropBot = false;
           // playerUsingCropBot = false;
            hideCropBotUI();
        }
    }


    private void Update()
    {
        // cropsnumberUI.text = Inventory_Crops.Inventory_Crops.ToString();

        // you only want to get the amount of crops harvested by THIS BOT 
        /*
        if (playerNearCropBot)
        {
            Debug.Log("2503 E-1");

            if (!playerUsingCropBot)
            {
                Debug.Log("2503 E-2");
                showCropBotUI();
            }
            else if (playerUsingCropBot)
            {
                hideCropBotUI();
            }
        }*/

        if (playerUsingWaterBot)
        {
            if (Input.GetKeyDown(KeyCode.E))
            {
                CollectCrops();
            }
        }

    }

    void showCropBotUI()
    {
        Debug.Log("2503 ();");

        waterBotUI.SetActive(true);



        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = false;
      //  PlayerScript.playerCanMove = false;

       // Cursor.visible = true;
      //  Cursor.lockState = CursorLockMode.None;

        playerUsingWaterBot = true;
    }

    void hideCropBotUI()
    {
        waterBotUI.SetActive(false);
        playerUsingWaterBot = false;
        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = true;
     //   PlayerScript.playerCanMove = true;

      //  Cursor.visible = false;
      //  Cursor.lockState = CursorLockMode.Locked;
    }

    public void CollectCrops()
    {
        Inventory_Water.Inventory_Water = Inventory_Water.Inventory_Water + int.Parse(waternumberUI.text);
        waternumberUI.text = 0.ToString();
        Debug.Log("2503Int" + Inventory_Water.Inventory_Water);
       
        // remove the crops from this bot
        waterBotThis.GetComponent<WaterBot>().harvested_Water = 0;
    }
}
