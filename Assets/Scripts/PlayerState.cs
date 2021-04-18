using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerState : MonoBehaviour
{
    public GameObject Player;
    public GameObject GateArrivalLocation; 
    // Start is called before the first frame update
    void Start()
    {
        if (LastSceneLoaded.previousLocation != "null")
        {
            Debug.Log("NOT NULL");
            Player.transform.position = GateArrivalLocation.transform.position;
        } else
        {
            Debug.Log("IS NULL");
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
