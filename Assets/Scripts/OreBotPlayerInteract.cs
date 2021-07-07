using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.UI;
using UnityEngine;

public class OreBotPlayerInteract : MonoBehaviour
{
    public GameObject oreBotUI;
    public GameObject oreBotThis;
    public bool playerNearOreBot = false;
    public bool playerUsingOreBot = false;

    public Text oresnumberUI;
    
    public FirstPersonAIO PlayerScript;

    public GameManager Inventory_Ore;

    void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Inventory_Ore = FindObjectOfType<GameManager>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            showOreBotUI();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            hideOreBotUI();
        }
    }


    private void Update()
    {
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
        oreBotUI.SetActive(true);
        playerUsingOreBot = true;
    }

    void hideOreBotUI()
    {
        oreBotUI.SetActive(false);
        playerUsingOreBot = false;
    }

    public void CollectOres()
    {
        Inventory_Ore.Inventory_Ore = Inventory_Ore.Inventory_Ore + int.Parse(oresnumberUI.text);
        oresnumberUI.text = 0.ToString();
        oreBotThis.GetComponent<OreBot>().harvested_Ores = 0;
    }
}
