using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountdownclockTenMin : MonoBehaviour
{
    // Start is called before the first frame update

    public List<Material> CountDownMaterials;

    public int materialCount = 0;
    void Start()
    {
        InvokeRepeating("CountSecond", 0.0f, 1000.0f);  //1s delay, repeat every 1s
    }

    // Update is called once per frame
    void CountSecond()
    {
        this.GetComponent<MeshRenderer>().material = CountDownMaterials[materialCount];
        materialCount++;
        Debug.Log("MATERIALCOUNT : " + materialCount);
        if (materialCount == 10)
        {
            materialCount = 0;
        }
    }
}
