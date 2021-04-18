using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;

public class CorridoorLighting : MonoBehaviour
{
    public GameObject LeaksLevelManager;

    public List<Light> WallSpotLights = new List<Light>();
    public List<Light> MainPointLights = new List<Light>();
    public List<Light> FloorPointLights = new List<Light>();

    public List<GameObject> FloorLights = new List<GameObject>();

    public GameObject[] SafeLights;

    public Material Material_GlowRed;
    public Material Material_GlowYellow;

    // Start is called before the first frame update
    void Start()
    {
        SafeLights = GameObject.FindGameObjectsWithTag("LevelSafe");
        // use variables from the level manager script 
        DangerLighting();
    }

    void DefaultLighting()
    {
        foreach (GameObject safeObject in SafeLights)
        {
            safeObject.SetActive(true);
        }
    }

    void DangerLighting()
    {
        
    }

    // Update is called once per frame
     void Update()
     {
        
     }
    

}
