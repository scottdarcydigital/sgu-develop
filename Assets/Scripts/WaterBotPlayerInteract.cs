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
    public FirstPersonAIO PlayerScript;
    public GameManager Inventory_Water;

    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Inventory_Water = FindObjectOfType<GameManager>();
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
        waterBotUI.SetActive(true);
        playerUsingWaterBot = true;
    }

    void hideCropBotUI()
    {
        waterBotUI.SetActive(false);
        playerUsingWaterBot = false;
    }

    public void CollectCrops()
    {
        Inventory_Water.Inventory_Water = Inventory_Water.Inventory_Water + int.Parse(waternumberUI.text);
        waternumberUI.text = 0.ToString();
        waterBotThis.GetComponent<WaterBot>().harvested_Water = 0;
    }
}
