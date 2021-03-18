using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class CountDownManagerRemoteUI : MonoBehaviour
{
    public GameManager countDownTime;

    public GameObject MilliSeconds;
    public GameObject MilliTenSeconds;
    public GameObject Seconds;
    public GameObject TenSeconds;
    public GameObject Minute;
    public GameObject TenMinute;

    public List<Sprite> CountDownMaterials;
    public List<Sprite> CountDownMaterialsLowTime;


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
        if (countDownTime.countDownTime > 10000)
        {

            MilliSeconds.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_MilliSecond];
            MilliTenSeconds.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_TenMilliSecond];
            Seconds.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_Second];
            TenSeconds.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_TenSecond];
            Minute.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_Min];
            TenMinute.GetComponent<Image>().sprite = CountDownMaterials[countDownTime.Count_TenMin];
        }

        if (countDownTime.countDownTime <= 10000)
        {

            MilliSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[countDownTime.Count_MilliSecond];
            MilliTenSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[countDownTime.Count_TenMilliSecond];
            Seconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[countDownTime.Count_Second];
            TenSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[countDownTime.Count_TenSecond];
            Minute.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
            TenMinute.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // fixes bug of last frame landing on a '1'
        if (countDownTime.countDownTime == 0)
        {
            MilliSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
            MilliTenSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // if the largest digit is dropped dont leave the texture at '1'
        if (countDownTime.countDownTime <= 10)
        {
            Seconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // if the largest digit is dropped dont leave the texture at '1'
        if (countDownTime.countDownTime <= 100)
        {
            Seconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // if the largest digit is dropped dont leave the texture at '1'
        if (countDownTime.countDownTime <= 1000)
        {
            TenSeconds.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // if the largest digit is dropped dont leave the texture at '1'
        if (countDownTime.countDownTime <= 10000 && countDownTime.TimeIsLow == false)
        {
            Minute.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }

        // if the largest digit is dropped dont leave the texture at '1'
        if (countDownTime.countDownTime <= 100000 && countDownTime.TimeIsLow == false)
        {
            TenMinute.GetComponent<Image>().sprite = CountDownMaterialsLowTime[0];
        }
    }

}
