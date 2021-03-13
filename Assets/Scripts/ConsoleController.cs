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
        // init other scripts public class
        ShowUIRef = FindObjectOfType<DialDate_Interface>();
        // consoleMenuUI.SetActive(true);
        // isShowingUI = !isShowingUI;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Debug.Log("*********PLAYER AT CONSOLE*****************");
            isAtConsole = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            Debug.Log("*********PLAYER LEFT CONSOLE*****************");
            isAtConsole = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (isAtConsole) {
                ShowUIRef.consoleMenuUI.SetActive(true);
                ShowUIRef.isShowingUI = !ShowUIRef.isShowingUI;

                if (ShowUIRef.isShowingUI)
                {
                    Debug.Log("UI OPEN");
                    ShowUIRef.ShowUI();
                }
                else
                {
                    Debug.Log("UI CLOSED");
                    ShowUIRef.HideUI();
                }
            }
        }
        else { return; }
    }
}
