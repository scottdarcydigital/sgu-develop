using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KinoFootage : MonoBehaviour
{

    public DialDate_Interface ShowKinoUIRef;
    public GameObject KinoPlane_1;

    public bool isAtConsole = false;

    public void closeKinoVideo1()
    {
        KinoPlane_1.SetActive(false);
    }

    // Start is called before the first frame update
    void Start()
    {
        // init other scripts public class
        ShowKinoUIRef = FindObjectOfType<DialDate_Interface>();
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
            if (isAtConsole)
            {
                ShowKinoUIRef.KinoMenuUI.SetActive(true);
                ShowKinoUIRef.isShowingUI = !ShowKinoUIRef.isShowingUI;

                if (ShowKinoUIRef.isShowingUI)
                {
                    Debug.Log("UI OPEN");
                    ShowKinoUIRef.ShowKinoUI();
                }
                else
                {
                    Debug.Log("UI CLOSED");
                    ShowKinoUIRef.HideKinoUI();
                }
            }
        }
        else { return; }
    }

    public void PlayKinoVideo_1()
    {
        Debug.Log("PLaying the firs kino video **9");
        KinoPlane_1.SetActive(true);
        ShowKinoUIRef.KinoMenuUI.SetActive(false);
        Invoke("closeKinoVideo1", 30);
    }

}
