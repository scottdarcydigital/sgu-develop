using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDamage : MonoBehaviour
{
    
    public GameObject Life_Meter;
    public float FireDamageAmount;

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            Vector3 lTemp = transform.localScale;
            lTemp.y = 0.5f;
            Life_Meter.GetComponent<RectTransform>().localScale = new Vector3(30, Life_Meter.GetComponent<RectTransform>().localScale.y - FireDamageAmount, 30);
            this.GetComponent<AudioSource>().Play();
            InvokeRepeating("burningPlayer", 0.0f, 0.5f);

        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            this.GetComponent<AudioSource>().Stop();
            CancelInvoke("burningPlayer");
        }
    }

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            //Debug.Log("BURN HIT");
            // invoke function here...

        }
    }

    void burningPlayer()
    {
        Debug.Log("BURN HIT...");
        Vector3 lTemp = transform.localScale;
        lTemp.y = 0.5f;
        Life_Meter.GetComponent<RectTransform>().localScale = new Vector3(30, Life_Meter.GetComponent<RectTransform>().localScale.y - FireDamageAmount, 30);
    }

}
