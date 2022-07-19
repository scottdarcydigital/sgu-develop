using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleIndervidualObject : MonoBehaviour
{
    public GameObject Target;

    void OnTriggerStay(Collider other)
    {
        if (other.tag == "Player")
        {
            // Toggle the display of the objects
            if (!Target.activeInHierarchy)
            {
                Debug.Log("1907 object turened on while you are here");
                Target.SetActive(true);

            } else if (Target.activeInHierarchy)
            {
                Debug.Log("1907 object turened on already");

            }
        }
    }

    //void OnTriggerExit(Collider other)
    //{
    //    if (other.tag == "Player")
    //    {
    //        // Toggle the display of the objects
    //        if (Target.activeInHierarchy)
    //        {
    //            Debug.Log("1907 object turened OFF");
    //            Target.SetActive(false);

    //        }
    //    }
    //}
}
