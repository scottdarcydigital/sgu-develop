using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountDownManager : MonoBehaviour
{
    public int countDownTime;

    public GameObject MilliSeconds;
    public GameObject MilliTenSeconds;
    public GameObject Seconds;
    public GameObject TenSeconds;
    public GameObject Minute;
    public GameObject TenMinute;

    public List<Material> CountDownMaterials;

    public int materialCount_MilliSecond = 9;
    public int materialCount_MilliTenSecond = 9;
    public int materialCount_Second = 9;
    public int materialCount_TenSecond = 9;
    public int materialCount_Min = 9;
    public int materialCount_TenMin = 9;

    // Start is called before the first frame update
    void Start()
    {
        //countDownTime = FindObjectOfType<GameManager>();
    }

    private void OnEnable()
    {
        countDownTime = countDownTime * 100000;
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

        
            InvokeRepeating("CountDown", 0.0f, 0.01f);
        


        if (countDownTime >= 10000)
        {
            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountMilliSecond", 0.0f, 0.01f);
            materialCount_MilliSecond = 0;
        
            MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountTenMilliSecond", 0.0f, 0.1f);
            materialCount_MilliTenSecond = 0;
        
            Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountSecond", 0.0f, 1.0f);
            materialCount_Second = 0;
        
            TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountTenSecond", 0.0f, 10.0f);
            materialCount_TenSecond = 0;

            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            InvokeRepeating("CountMinute", 0.0f, 100.0f);
            materialCount_Min = 0;

            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[countDownTime / 100000];
            InvokeRepeating("CountTenMinute", 0.0f, 1000.0f);
            materialCount_TenMin = countDownTime / 100000;
        }

    }

    private void OnDisable()
    {
        CancelInvoke("CountSecond");
        Debug.Log("MATERIALCOUNTSECS CANCELLED : " + materialCount_Second);
    }

    void CountDown()
    {
        if (countDownTime > 0)
        {
            countDownTime--;
            Debug.Log("countDownTime : " + countDownTime);
        }
            
    }

    void CountMilliSecond()
    {
        if (countDownTime > 0)
        {

            if (materialCount_MilliSecond == 0)
            {
                materialCount_MilliSecond = 9;
            }
            else
            {
                materialCount_MilliSecond--;
            }

            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_MilliSecond];
        }
        else
        {
            MilliSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            CancelInvoke("CountMilliSecond");
        }
    }

    void CountTenMilliSecond()
    {
        if (countDownTime > 0)
        {

            if (materialCount_MilliTenSecond == 0)
            {
                materialCount_MilliTenSecond = 9;
            }
            else
            {
                materialCount_MilliTenSecond--;
            }

            MilliTenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_MilliTenSecond];
        }
        else
        {
            CancelInvoke("CountTenMilliSecond");
        }
    }

    void CountSecond()
    {
        if (countDownTime > 0)
        {

            if (materialCount_Second == 0)
            {
                materialCount_Second = 9;
            }
            else
            {
                materialCount_Second--;
            }

            Seconds.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_Second];
        }
        else
        {
            CancelInvoke("CountSecond");
        }
    }

    void CountTenSecond()
    {
        if (countDownTime > 0)
        {

            if (materialCount_TenSecond == 0)
            {
                materialCount_TenSecond = 9;
            }
            else
            {
                materialCount_TenSecond--;
            }

            TenSeconds.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_TenSecond];
        }
        else
        {
            CancelInvoke("CountTenSecond");
        }
    }
    void CountMinute()
    {
        if (countDownTime > 0)
        {

            if (materialCount_Min == 0)
            {
                materialCount_Min = 9;
            }
            else
            {
                materialCount_Min--;
            }

            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_Min];
        }
        else
        {
            Minute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            CancelInvoke("CountMinute");
        }
    }
    void CountTenMinute()
    {
        if (countDownTime > 0)
        {

            if (materialCount_TenMin == 0)
            {
                materialCount_TenMin = 9;
            }
            else
            {
                materialCount_TenMin--;
            }

            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount_TenMin];
        }
        else
        {
            TenMinute.GetComponent<MeshRenderer>().material = CountDownMaterials[0];
            CancelInvoke("CountTenMinute");
        }
    }
}
    