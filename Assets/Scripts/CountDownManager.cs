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

    }

    private void OnDisable()
    {

    }

}
    