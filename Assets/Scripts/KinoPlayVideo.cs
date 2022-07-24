using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KinoPlayVideo : MonoBehaviour
{
    public bool isInRange = false;
 

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            isInRange = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            isInRange = false;
        }
    }


    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (isInRange)
            {
                // Play video
            }
        }
        else { return; }
    }
}
