using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.Rendering;

public class LeaksLevelManagerSafe : MonoBehaviour
{

    //public LeaksLevelManagerAlpha LevelManager;
    public FirstPersonAIO fpsScript;

    public List<GameObject> Doors = new List<GameObject>();


    void Start()
    {
        fpsScript = FindObjectOfType<FirstPersonAIO>();

        fpsScript.walkSpeed = 10.0f;
        fpsScript.sprintSpeed = 20.0f;
        fpsScript.headbobFrequency = 1.5f;
        fpsScript.headbobHeight = 1.0f;
        fpsScript.headbobSideMovement = 0.5f;

        MonoBehaviour[] armyUnits = Object.FindObjectsOfType<MonoBehaviour>();
        foreach (MonoBehaviour v in armyUnits)
        {
            Debug.Log(v.name + "-" + v.gameObject.name);
        }

        //foreach (GameObject door in Doors)
        //{
        //    door.GetComponent<DoorOpen>().DoorSafe = true;
        //}

        
    }

    private static void MTwo()
    {
        MonoBehaviour[] armyUnits = Object.FindObjectsOfType<MonoBehaviour>();
        foreach (MonoBehaviour v in armyUnits)
        {
            Debug.Log(v.name + "-" + v.gameObject.name);
        }
    }
}
