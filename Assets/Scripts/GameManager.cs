﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public GameObject Player;
    public GameObject Kino;
    public string PlayerLocation;
    public string KinoLocation;

    public GameObject countDownClock;

    public int CountDownClock;
    public bool isCounting;

    public GameObject puddle;

    public DialGate gateTimeOut;

    void setLocationData(Scene scene)
    {
        // if the assigned player gameobject is in the scene then...
        if (Player != null) 
        {
            // only perform this is the player is active EG: Kino logic.
            if (Player.activeSelf)
            {
            PlayerLocation = scene.name;
            Debug.Log("Player Location is 1 : " + PlayerLocation);
            }
            else
            {
                Debug.Log("Player Location is NOT ACTIVE");
            }
        }
        else
        {
            Debug.Log("Player Location is NOT DEFINED");
        }

        // if the assigned player gameobject is in the scene then...
        if (Kino != null)
        {
            // only perform this is the player is active EG: Kino logic.
            if (Kino.activeSelf)
            {
                KinoLocation = scene.name;
                Debug.Log("KinoLocationis 1 : " + KinoLocation);
            }
            else
            {
                Debug.Log("Kino Location is NOT ACTIVE");
            }
        }
        else
        {
            Debug.Log("Kino Location is NOT DEFINED");
        }
    } 

    // Start is called before the first frame update
    void Start()
    {
        Scene scene = SceneManager.GetActiveScene();
        SceneManager.sceneLoaded += OnSceneLoaded;
        setLocationData(scene);
        gateTimeOut = FindObjectOfType<DialGate>();

    }


    void CountSecond()
    {
        if (CountDownClock > 0)
        {
            CountDownClock--;
            Debug.Log("CountSecond123 : " + CountDownClock);
        }
        else
        {
            isCounting = false;
            Debug.Log("TIMES UP 123");
            CancelInvoke("CountSecond");
            gateTimeOut.ShutDownGate();
            countDownClock.SetActive(false);
        }
    }


    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        setLocationData(scene);
    }

    // Update is called once per frame
    void Update()
    {
        // always check if the kino is active then freeze the player and vice versa???
        if (isCounting)
        {
            countDownClock.SetActive(true);
            Debug.Log("InvokeRepeating123");
            InvokeRepeating("CountSecond", 0.0f, 1.0f);  //1s delay, repeat every 1s
            isCounting = false; // only run this once. the true is on the puddle.cs onEnabled script
        }
    }
}
