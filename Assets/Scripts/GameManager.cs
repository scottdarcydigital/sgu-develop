using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    public GameObject Player;
    public GameObject Kino;
    public string PlayerLocation;
    public string KinoLocation;

    public GameObject puddle;
    public GameObject GameOverScreen;

    public FirstPersonAIO PlayerScript;

    public int countDownTime;

    public bool TimeIsLow = false;

    public bool isCounting = false;

    public int countDownTimeRecord;

    public bool gateManuallyShutDown = false;

    // TODO still need to set this up...
    public DialGate gateTimeOut;

    // countdown clock management
    //      other objects will look to this in order to get the correct time update for thier materials and or sprites
    public int Count_MilliSecond;
    public int Count_TenMilliSecond;
    public int Count_Second;
    public int Count_TenSecond;
    public int Count_Min;
    public int Count_TenMin;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("START():");
        Scene scene = SceneManager.GetActiveScene();
        SceneManager.sceneLoaded += OnSceneLoaded;
        setLocationData(scene);
        gateTimeOut = FindObjectOfType<DialGate>();
        PlayerScript = FindObjectOfType<FirstPersonAIO>();
    }

    void cancelAllCountDowns()
    {
        // for some reason the functions between scripts updated with a small lag detaly meaning that some of the digits will still display millisecond caught inbetween function calls, this fixes that issue
        Count_MilliSecond = 0;
        Count_TenMilliSecond = 0;
        Count_Second = 0;
        Count_TenSecond = 0;
        Count_Min = 0;
        Count_TenMin = 0;
        CancelInvoke("CountDown");
        CancelInvoke("CountMilliSecond");
        CancelInvoke("CountTenMilliSecond");
        CancelInvoke("CountSecond");
        CancelInvoke("CountTenSecond");
        CancelInvoke("CountMin");
        CancelInvoke("CountTenMin");

    }

    // make sure the inputed number actually counts down...
    void CountDown()
    {
        if (countDownTime > 0)
        {
            countDownTime--;
            Debug.Log("countDownTime : " + countDownTime);
        } 
        if (countDownTime <= 10000)
        {
            TimeIsLow = true;
        }
        if (countDownTime == 0 && gateManuallyShutDown == false)
        {
            gateTimeOut.ShutDownGate();
            Debug.Log("isCounting : " + isCounting);
            cancelAllCountDowns();
            Invoke("GameOver", 5.0f);

            // Reset the clock
            countDownTime = countDownTimeRecord;
        }

    }
    void GameOver()
    {
           PlayerScript.enableCameraMovement = false;
           PlayerScript.playerCanMove = false;
           GameOverScreen.SetActive(true);
           
           Invoke("closeGame", 15.0f);
    }

    void closeGame()
    {
           Application.Quit();
    }

    void CountMilliSecond()
    {
        if (countDownTime > 0)
        {

            if (Count_MilliSecond == 0)
            {
                Count_MilliSecond = 9;
            }
            else
            {
                Count_MilliSecond--;
            }
        }
        else
        {
            CancelInvoke("CountMilliSecond");
        }
    }

    void CountTenMilliSecond()
    {
        if (countDownTime >= 10)
        {

            if (Count_TenMilliSecond == 0)
            {
                Count_TenMilliSecond = 9;
            }
            else
            {
                Count_TenMilliSecond--;
            }
        }
        else
        {
            CancelInvoke("CountTenMilliSecond");
        }
    }
    void CountSecond()
    {
        if (countDownTime >= 100)
        {

            if (Count_Second == 0)
            {
                Count_Second = 9;
            }
            else
            {
                Count_Second--;
            }
        }
        else
        {
            CancelInvoke("CountSecond");
        }
    }

    void CountTenSecond()
    {
        if (countDownTime >= 1000)
        {

            if (Count_TenSecond == 0)
            {
                Count_TenSecond = 9;
            }
            else
            {
                Count_TenSecond--;
            }
        }
        else
        {
            CancelInvoke("CountTenSecond");
        }
    }

    void CountMin()
    {
        if (countDownTime >= 10000)
        {

            if (Count_Min == 0)
            {
                Count_Min = 9;
            }
            else
            {
                Count_Min--;
            }
        }
        else
        {
            CancelInvoke("CountMin");
        }
    }

    void CountTenMin()
    {
        if (countDownTime >= 100000)
        {
            if (Count_TenMin == 0)
            {
                Count_TenMin = 9;
            }
            else
            {
                Count_TenMin--;
            }
        }
        else
        {
            CancelInvoke("CountTenMin");
        }
    }

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

    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        setLocationData(scene);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.T))
        {
            GameOver();
        }

        // Gate is now active so start running the countdown...
        // only run this once. the true is on the puddle.cs onEnabled script, so that the countdownclock starts counting when the gate is active...
        if (isCounting)
        {
            // save a record of what the time was set to so that the clock can reset... do I need this now???
            countDownTimeRecord = countDownTime;

            countDownTime = countDownTime * 10000;

            // make sure the inputed number actually counts down...
            InvokeRepeating("CountDown", 0.0f, 0.01f);

            // 6 digits
            if (countDownTime >= 100000)
            {
                InvokeRepeating("CountMilliSecond", 0.0f, 0.01f);
                InvokeRepeating("CountTenMilliSecond", 0.0f, 0.1f);
                InvokeRepeating("CountSecond", 0.0f, 1.0f);
                InvokeRepeating("CountTenSecond", 0.01f, 10.0f);
                InvokeRepeating("CountMin", 0.01f, 100.0f);
                InvokeRepeating("CountTenMin", 0.01f, 1000.0f);

                Count_TenMin = countDownTime / 100000;
            }
            // 5 digits
            else if (countDownTime <= 99999)
            {
                InvokeRepeating("CountMilliSecond", 0.0f, 0.01f);
                InvokeRepeating("CountTenMilliSecond", 0.0f, 0.1f);
                InvokeRepeating("CountSecond", 0.0f, 1.0f);
                InvokeRepeating("CountTenSecond", 0.01f, 10.0f);
                InvokeRepeating("CountMin", 0.01f, 100.0f);

                Count_Min = countDownTime / 10000;
            }
            isCounting = false; // only run this once. the true is on the puddle.cs onEnabled script, so that the countdownclock starts counting when the gate is active...
        }
        Debug.Log("CDT : " + countDownTime);

    }

}
