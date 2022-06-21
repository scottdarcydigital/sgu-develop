using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuddlePlanet : MonoBehaviour
{
    public string Destination;
    public string PlanetAddress;

    private void Start()
    {
        Debug.Log("current previousLocation : " + LastSceneLoaded.previousLocation);
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("PUDDLE TO DESTINY");
        //Check to see if the tag on the collider is equal to Enemy
        if (other.tag == "Player")
        {
            LastSceneLoaded.previousLocation = PlanetAddress;
            Debug.Log("New previousLocation : " + LastSceneLoaded.previousLocation);
            Application.LoadLevel(Destination);
        }
    }
}