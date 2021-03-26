using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
public class chest : MonoBehaviour
{
    [SerializeField] public GameObject chestUI;
    public bool playerNearChest = false;
    public bool playerUsingChest = false;

    private GameManager Inventory_Crops;
    public Text cropsnumberUI;

    public FirstPersonAIO PlayerScript;

    private void Start()
    {
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
        Inventory_Crops = FindObjectOfType<GameManager>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            playerNearChest = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            playerNearChest = false;
        }
    }

    private void Update()
    {
        cropsnumberUI.text = Inventory_Crops.Inventory_Crops.ToString();

        if (playerNearChest)
        {
            if (Input.GetKeyDown(KeyCode.E))
            {
                if (!playerUsingChest)
                {
                    showChestUI();
                } else if (playerUsingChest)
                {
                    hideChestUI();
                }
            }
        }
    }

    void showChestUI()
    {
        chestUI.SetActive(true);
        //taken from FirstPersonAIO.cs
        PlayerScript.enableCameraMovement = false;
        PlayerScript.playerCanMove = false;

        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;

        playerUsingChest = true;
    }

    void hideChestUI()
    {
        chestUI.SetActive(false);
        playerUsingChest = false;
        //taken from FirstPersonAIO.cs
        PlayerScript.enableCameraMovement = true;
        PlayerScript.playerCanMove = true;

        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }

}
