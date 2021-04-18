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

    // Symbol_Colision with Dial Pin
    //[SerializeField] private GameObject S16Col_w_DialPin;

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

            Debug.Log("ROT1 : A : :" + Gate.transform.rotation.eulerAngles.x);
            // Debug.Log("ROT1 : B : :" + Rot1.transform.rotation.normalized.x);
            // Debug.Log("ROT1 : C : :" + Rot1.transform.rotation.x);

            // DAIL 16
            //if (S16Col_w_DialPin.transform.position == DialPin.transform.position)      Change this to a collision detect with the Symbol_Colision with Dial Pin
            if (Gate.transform.eulerAngles.x > 39 && Gate.transform.eulerAngles.x < 40)
            {
                Debug.Log("HIT-2 ****************************************************");
              xSpeed = 0.0f;
              Symbol16Pin1.transform.position = Vector3.MoveTowards(Symbol16Pin1.transform.position, DialPin.transform.position, 0.05f);
              Symbol16Pin2.transform.position = Vector3.MoveTowards(Symbol16Pin2.transform.position, DialPin.transform.position, 0.03f);
                
                if (S16_pin1 == false || S16_pin2 == false)
                {
                    // Debug.Log("HIT-2");
                  //  xSpeed = 0.0f;
                   // Symbol16Pin1.transform.position = Vector3.MoveTowards(Symbol16Pin1.transform.position, DialPin.transform.position, 0.05f);
                    //Symbol16Pin2.transform.position = Vector3.MoveTowards(Symbol16Pin2.transform.position, DialPin.transform.position, 0.03f);
                }
                

                

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
        
                //DAIL 22
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

        
        // check if pins are dialed AND Gate is Rotated
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

        // START GATE DIAL PROCESS




        // 1. Fire light pin up to fixed position after gate has stoped on shevron and light it up, then fire second pin to move gate again
        /* if (xSpeed == 0.0f)
         {
             // fire pin 1
             if (Symb)
             {
                 // light up and fire pin2
                 if ()
                 {
                     //rotate gate again
                 }
             }
         }*/


        //        }



        //consoleMenuUI.SetActive(true);
        //isShowingUI = !isShowingUI;
        /*
        if (isShowingUI)
        {
            ShowUI();
        }

        else
        {
            HideUI();
        }
        */

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
            // use a Quaternion.lerp with set targets.
            //Gate.transform.rotation = Quaternion.Lerp(Gate.transform.rotation, to.rotation, Time.time * xSpeed);
        }

        public void DailGate()
        {
            if (eventHorizon.activeSelf)
            {
                Debug.Log("GATE SHUTDOWN");
                //GateShutDown.Play();
                eventHorizon.SetActive(false);
                GetConst.Stop();
            }
            else
            {
                Debug.Log("GATE DAILED");
                //GateActivate.Play();
                eventHorizon.SetActive(true);
                //GetConst.Play();
            }
            //HideUI();
            //isShowingUI = false;
        }

    
}
