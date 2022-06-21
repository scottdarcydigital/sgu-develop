using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountdownclockMilliSeconds : MonoBehaviour
{
    public List<Material> CountDownMaterials;
    public int materialCount = 0;

    void Start()
    {
        InvokeRepeating("CountSecond", 0.0f, 0.01f);  //1s delay, repeat every 1s
    }

    void CountSecond()
    {
        this.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount];
        materialCount++;
        if (materialCount == 10)
        {
            materialCount = 0;
        }
    }
}
