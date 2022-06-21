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

    void Start()
    {
        ShowKinoUIRef = FindObjectOfType<DialDate_Interface>();
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
            if (isAtConsole)
            {
                ShowKinoUIRef.KinoMenuUI.SetActive(true);
                ShowKinoUIRef.isShowingUI = !ShowKinoUIRef.isShowingUI;

                if (ShowKinoUIRef.isShowingUI)
                {
                    ShowKinoUIRef.ShowKinoUI();
                }
                else
                {
                    ShowKinoUIRef.HideKinoUI();
                }
            }
        }
        else { return; }
    }

    public void PlayKinoVideo_1()
    {
        KinoPlane_1.SetActive(true);
        ShowKinoUIRef.KinoMenuUI.SetActive(false);
        Invoke("closeKinoVideo1", 30);
    }
}
