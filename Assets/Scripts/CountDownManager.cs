using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountDownManager : MonoBehaviour
{
    // public int countDownTime;
    public GameManager countDownTime;

    public GameObject MilliSeconds;
    public GameObject MilliTenSeconds;
    public GameObject Seconds;
    public GameObject TenSeconds;
    public GameObject Minute;
    public GameObject TenMinute;

    public List<Material> CountDownMaterials;
    public List<Material> CountDownMaterialsLowTime;

    public int materialCount_MilliSecond;
    public int materialCount_MilliTenSecond;
    public int materialCount_Second;
    public int materialCount_TenSecond;
    public int materialCount_Min;
    public int materialCount_TenMin;

    // Start is called before the first frame update
    void Start()
    {
        countDownTime = FindObjectOfType<GameManager>();
    }

    void Update()
    {
        // if the user manually shuts the gate down reset the clock to nothing.
        /*
         if (countDownTime.gateManuallyShutDown)
        {
            Debug.Log("MSD");
            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
        }
        */

        // only update timers when the gate is active
        // the gate needs to be active for this because initially the number is a 2 digit number and therefore would always trigger x2 white and x4 red 0's

        if (countDownTime.puddle.activeSelf)
        {

            if (countDownTime.countDownTime > 10000)
            {
                MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_MilliSecond];
                MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_TenMilliSecond];
                Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_Second];
                TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_TenSecond];
                Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_Min];
                TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.Count_TenMin];
            }

            // if countdown is low, change assigned materials without interupting count
            if (countDownTime.countDownTime <= 10000)
            {
                MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[countDownTime.Count_MilliSecond];
                MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[countDownTime.Count_TenMilliSecond];
                Seconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[countDownTime.Count_Second];
                TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[countDownTime.Count_TenSecond];
                Minute.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
                TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
            }

            // fixes bug of last frame landing on a '1'
            if (countDownTime.countDownTime == 0)
            {
                MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
                MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
            }

            // if the largest digit is dropped dont leave the texture at '1'
            if (countDownTime.countDownTime <= 100)
            {
                Seconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
            }

            // if the largest digit is dropped dont leave the texture at '1'
            if (countDownTime.countDownTime <= 1000)
            {
                TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterialsLowTime[0];
            }

            // if the largest digit is dropped dont leave the texture at '1'
            if (countDownTime.countDownTime <= 10000 && countDownTime.TimeIsLow == false)
            {
                Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            }

            // if the largest digit is dropped dont leave the texture at '1'
            if (countDownTime.countDownTime <= 100000 && countDownTime.TimeIsLow == false)
            {
                TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            }
        } 
        // if puddle is inactive then reset the clock display to ZERO
        else if (!countDownTime.puddle.activeSelf)
        {
            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
        }
    }       
            

    private void OnEnable()
    {



        //countDownTime.countDownTime = countDownTime.countDownTime * 100000;
        // if (countDownTime == 10 || countDownTime == 20 || countDownTime == 30 || countDownTime == 40 || countDownTime == 50 || countDownTime == 60 || countDownTime == 70 || countDownTime == 80 || countDownTime == 90)
        //{
        // only use minutes if the time is large enough to allow it

        //  0-10        milli
        //  0-100       ten milli
        //  0-1,000     seconds
        //  0-10,000    ten sec
        //  0-100,000   min
        //  0-1,000,00  ten min

        // the countdown will be a min of ten mins at all times, to make things simple

        // for now 1 = 10,000 - ten secs

        
           // InvokeRepeating("CountDown", 0.0f, 0.01f);


        /*
        if (countDownTime.countDownTime >= 10000)
        {
            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountMilliSecond", 0.0f, 0.01f);
            materialCount_MilliSecond = 0;
        
            MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountTenMilliSecond", 0.0f, 0.1f);
            materialCount_MilliTenSecond = 0;
        
            Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountSecond", 0.0f, 1.0f);
            InvokeRepeating("CountSecond", 0.0f, 1.0f);
            materialCount_Second = 0;
        
            TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountTenSecond", 0.0f, 10.0f);
            materialCount_TenSecond = 0;

            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountMinute", 0.0f, 100.0f);
            materialCount_Min = 0;

            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime.countDownTime / 100000];
            InvokeRepeating("CountTenMinute", 0.0f, 1000.0f);
            materialCount_TenMin = countDownTime.countDownTime / 100000;
        }
        */

    }

    private void OnDisable()
    {
        // CancelInvoke("CountSecond");
        Debug.Log("MATERIALCOUNTSECS CANCELLED : " + materialCount_Second);
    }

}
    