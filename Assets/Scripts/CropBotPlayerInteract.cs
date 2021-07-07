using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class CropBotPlayerInteract : MonoBehaviour
{
    public GameObject cropBotUI;
    public GameObject cropBotThis;
    public bool playerNearCropBot = false;
    public bool playerUsingCropBot = false;
    public Text cropsnumberUI;
    public FirstPersonAIO PlayerScript;
    public GameManager Inventory_Crops;
    
    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Inventory_Crops = FindObjectOfType<GameManager>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            showCropBotUI();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            hideCropBotUI();
        }
    }

    private void Update()
    {
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
        cropBotUI.SetActive(true);
        playerUsingCropBot = true;
    }

    void hideCropBotUI()
    {
        cropBotUI.SetActive(false);
        playerUsingCropBot = false;
    }

    public void CollectCrops()
    {
        Inventory_Crops.Inventory_Crops = Inventory_Crops.Inventory_Crops+int.Parse(cropsnumberUI.text);
        cropsnumberUI.text = 0.ToString();
        cropBotThis.GetComponent<CropBot>().harvested_Crops = 0;
    }
}
