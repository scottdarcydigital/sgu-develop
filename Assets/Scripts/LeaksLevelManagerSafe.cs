using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.Rendering;

public class LeaksLevelManagerSafe : MonoBehaviour
{

    //public LeaksLevelManagerAlpha LevelManager;

    public List<GameObject> Doors = new List<GameObject>();


    void Start()
    {
        foreach (GameObject door in Doors)
        {
            door.GetComponent<DoorOpen>().DoorSafe = true;
        }
    }

}
