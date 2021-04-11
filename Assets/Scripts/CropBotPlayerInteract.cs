using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class CropBotPlayerInteract : MonoBehaviour
{
    // UI of this bot
    public GameObject cropBotUI;
    public GameObject cropBotThis;
    public bool playerNearCropBot = false;
    public bool playerUsingCropBot = false;

    public Text cropsnumberUI;
    
    // private GameManager Inventory_Crops;
    public FirstPersonAIO PlayerScript;

    public GameManager Inventory_Crops;

    // public Button Collect;

    // Start is called before the first frame update
    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        
        Inventory_Crops = FindObjectOfType<GameManager>();
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

        if (playerUsingCropBot)
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

        cropBotUI.SetActive(true);



        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = false;
      //  PlayerScript.playerCanMove = false;

       // Cursor.visible = true;
      //  Cursor.lockState = CursorLockMode.None;

        playerUsingCropBot = true;
    }

    void hideCropBotUI()
    {
        cropBotUI.SetActive(false);
        playerUsingCropBot = false;
        //taken from FirstPersonAIO.cs
      //  PlayerScript.enableCameraMovement = true;
     //   PlayerScript.playerCanMove = true;

      //  Cursor.visible = false;
      //  Cursor.lockState = CursorLockMode.Locked;
    }

    public void CollectCrops()
    {
        Inventory_Crops.Inventory_Crops = Inventory_Crops.Inventory_Crops+int.Parse(cropsnumberUI.text);
        cropsnumberUI.text = 0.ToString();
        Debug.Log("2503Int" + Inventory_Crops.Inventory_Crops);
       
        // remove the crops from this bot
        cropBotThis.GetComponent<CropBot>().harvested_Crops = 0;
    }
}
