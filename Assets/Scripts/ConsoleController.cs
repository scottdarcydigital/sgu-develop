using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConsoleController : MonoBehaviour
{
    public DialDate_Interface ShowUIRef;

    public bool isAtConsole = false;

    // Start is called before the first frame update
    void Start()
    {
        ShowUIRef = FindObjectOfType<DialDate_Interface>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            isAtConsole = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            isAtConsole = false;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (isAtConsole) {
                ShowUIRef.consoleMenuUI.SetActive(true);
                ShowUIRef.isShowingUI = !ShowUIRef.isShowingUI;

                if (ShowUIRef.isShowingUI)
                {
                    ShowUIRef.ShowUI();
                }
                else
                {
                    ShowUIRef.HideUI();
                }
            }
        }
        else { 
            return;
             }
    }
}
