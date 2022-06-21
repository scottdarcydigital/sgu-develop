using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class consoleMenu : MonoBehaviour
{
    [SerializeField] private GameObject consoleMenuUI;
    [SerializeField] private GameObject eventHorizon;
    [SerializeField] private bool isShowingUI;

    public bool DialNow = false;

    // Audio button sounds
    public AudioSource GateShutDown;
    public AudioSource GateActivate;
    public AudioSource GetConst;

    [SerializeField] private GameObject Gate;

    // Symbol_Lights
    [SerializeField] private GameObject S16;
    [SerializeField] private GameObject S22;
    [SerializeField] private GameObject S20;

    // Symbol_PinFire
    [SerializeField] private GameObject DialPin;

    // Fire_ Pinx
    [SerializeField] private GameObject Symbol16Pin1;
    [SerializeField] private GameObject Symbol16Pin2;
    public bool S16_pin1 = false;
    public bool S16_pin2 = false;

    [SerializeField] private GameObject Symbol22Pin1;
    [SerializeField] private GameObject Symbol22Pin2;
    public bool S22_pin1 = false;
    public bool S22_pin2 = false;

    public float xSpeed;
    public float LeftSpeed;
    public float RightSpeed;

    private void Start()
    {
       xSpeed = RightSpeed;
    }

    private void Update()
    {
        if (DialNow == true)
        {
            // 0. Rotate gate & Stop
            Gate.transform.Rotate(Vector3.left * (xSpeed * Time.deltaTime));

            if (Gate.transform.eulerAngles.x > 39 && Gate.transform.eulerAngles.x < 40)
            {
              xSpeed = 0.0f;
              Symbol16Pin1.transform.position = Vector3.MoveTowards(Symbol16Pin1.transform.position, DialPin.transform.position, 0.05f);
              Symbol16Pin2.transform.position = Vector3.MoveTowards(Symbol16Pin2.transform.position, DialPin.transform.position, 0.03f);

                if (Symbol16Pin1.transform.position == DialPin.transform.position)
                {
                    S16_pin1 = true;
                    Symbol16Pin1.transform.position = Symbol16Pin1.transform.position;
                    S16.SetActive(true);
                }

                if (Symbol16Pin2.transform.position == DialPin.transform.position)
                {
                    S16_pin2 = true;
                    Symbol16Pin2.transform.position = Symbol16Pin2.transform.position;
                    xSpeed = LeftSpeed;
                }
                
            }
        }

        if (Gate.transform.eulerAngles.x > 333 && Gate.transform.eulerAngles.x < 334)
        {

            if (S22_pin1 == false || S22_pin2 == false)
            {
                xSpeed = 0.0f;
                Symbol22Pin1.transform.position = Vector3.MoveTowards(Symbol22Pin1.transform.position, DialPin.transform.position, 0.05f);
                Symbol22Pin2.transform.position = Vector3.MoveTowards(Symbol22Pin2.transform.position, DialPin.transform.position, 0.03f);
            }

            if (Symbol22Pin1.transform.position == DialPin.transform.position)
            {
                S22_pin1 = true;
                Symbol22Pin1.transform.position = Symbol22Pin1.transform.position;
                S22.SetActive(true);
            }

            if (Symbol22Pin2.transform.position == DialPin.transform.position)
            {
                S22_pin2 = true;
                Symbol22Pin2.transform.position = Symbol22Pin2.transform.position;
                xSpeed = RightSpeed;
            }
        }

        if (S22_pin1 == true && S22_pin2 == true)
        {
            if (Gate.transform.eulerAngles.x > 0 && Gate.transform.eulerAngles.x < 1)
            {
                xSpeed = 0.0f;
                S20.SetActive(true);
                eventHorizon.SetActive(true);
            }
        }

        if (Input.GetKeyDown(KeyCode.F))
        {
            DialNow = true;
        }

    }
        void ShowUI()
        {
            Time.timeScale = 0f;
            consoleMenuUI.SetActive(true);
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;
        }

        void HideUI()
        {
            Time.timeScale = 1f;
            consoleMenuUI.SetActive(false);
            Cursor.visible = false;
            Cursor.lockState = CursorLockMode.Locked;
        }


        void rotateGate()
        {

        }

        public void DailGate()
        {
            if (eventHorizon.activeSelf)
            {
                eventHorizon.SetActive(false);
                GetConst.Stop();
            }
            else
            {
                eventHorizon.SetActive(true);
            }
        }
}
