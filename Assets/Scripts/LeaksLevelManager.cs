using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;

public class LeaksLevelManager : MonoBehaviour
{
    public List<Light> TuskLights = new List<Light>();
//    public List<Light> DoorLightsGateRoomEast_West = new List<Light>();
    //public List<Light> Corridoor_FloorLights = new List<Light>();
    public List<GameObject> GateRoom_FloorLights = new List<GameObject>();
    public List<GameObject> Gameobject_DoorLights = new List<GameObject>();
    public List<GameObject> Gameobject_BalconyUnderLights = new List<GameObject>();
    public List<GameObject> Gameobject_TuskLights = new List<GameObject>();
    public List<GameObject> Gameobject_StairsLights = new List<GameObject>();

    //public List<Light> Lights_To_Disable = new List<Light>();

    public Material Material_TuskRed;
    public Material Material_TuskYellow;
    public Material Material_GlowRed;
    public Material Material_GlowYellow;

    public Camera PlayerCameraISO;

    public bool IsoIncrement = true;
    public int isoValue;

    public bool MainLightIncrement = true;
    public float MainLightMaxValue;
    public float MainLightValue;
    public float MainLightValueIncrement;

    public bool TuskLightIncrement = true;
    public float TuskLightMaxValue;
    public float TuskLightValue;
    public float TuskLightValueIncrement;

    public float flashInterval;

    public List<Light> MainGateRoomLight_Safe = new List<Light>();
    public List<Light> MainGateRoomLight = new List<Light>();
    //public List<Light> TuskGateRoomLight = new List<Light>();

    public bool LevelSolved;

    public GameObject Corridoors_Script;

    public GameObject[] SafeLights;
    public GameObject[] DangerLights;

    public List<GameObject> listOfChildren = new List<GameObject>();

    void Start()
    {
        LevelInDanger();
        DangerLights = GameObject.FindGameObjectsWithTag("LevelDanger");
    }

    void Update()
    {
        if (IsoIncrement)
        {
            if (PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso >= 200)
            {
                IsoIncrement = false;
            }
        }
        if (!IsoIncrement)
        {
            if (PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso <= 10)
            {
                IsoIncrement = true;
            }
        }

        if (LevelSolved)
        {
            LevelSafe();
        } 
    }

    void LevelInDanger()
    {
        foreach (GameObject child in SafeLights)
        {
            child.SetActive(false);
        }

        foreach (GameObject child in DangerLights)
        {
            child.SetActive(true);
        }
        
        isoValue = PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso;

        foreach (GameObject Underlights in Gameobject_BalconyUnderLights)
        {
            Underlights.GetComponent<MeshRenderer>().material = Material_GlowRed;
        }

        //foreach (Light DoorLight in DoorLightsGateRoomEast_West)
        //{
        //    DoorLight.GetComponent<Light>().color = Color.red;
        //}

        foreach (GameObject Door in Gameobject_DoorLights)
        {
            Door.GetComponent<MeshRenderer>().material = Material_TuskRed;
        }

        foreach (Light TuskLight in TuskLights)
        {
            TuskLight.GetComponent<Light>().color = Color.red;
        }

        foreach (GameObject Tusk in Gameobject_TuskLights)
        {
            Tusk.GetComponent<MeshRenderer>().material = Material_TuskRed;
        }

        foreach (GameObject FloorLights in GateRoom_FloorLights)
        {
            FloorLights.GetComponent<MeshRenderer>().material = Material_GlowRed;
        }

        //foreach (Light LightsToDisable in Lights_To_Disable)
        //{
        //    LightsToDisable.enabled = false;
        //}

        foreach (GameObject StairsLights in Gameobject_StairsLights)
        {
            StairsLights.GetComponent<MeshRenderer>().material = Material_GlowRed;
        }

        foreach (Light MainWarningLights in MainGateRoomLight)
        {
            MainWarningLights.enabled = true;
        }

        foreach (Light MainSafeLights in MainGateRoomLight_Safe)
        {
            MainSafeLights.enabled = false;
        }
        InvokeRepeating("LightFlashing", 0.0f, flashInterval);
        InvokeRepeating("TuskLightsFlashing", 0.0f, flashInterval);
    }

    void LevelSafe()
    {
        foreach (GameObject child in SafeLights)
        {
            child.SetActive(true);
        }

        foreach (GameObject child in DangerLights)
        {
            child.SetActive(false);
        }

        foreach (GameObject Underlights in Gameobject_BalconyUnderLights)
        {
            Underlights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
        }

        //foreach (Light DoorLight in DoorLightsGateRoomEast_West)
        //{
        //    DoorLight.GetComponent<Light>().color = Color.yellow;
        //}

        foreach (GameObject Door in Gameobject_DoorLights)
        {
            Door.GetComponent<MeshRenderer>().material = Material_TuskYellow;
        }

        foreach (Light TuskLight in TuskLights)
        {
            TuskLight.GetComponent<Light>().color = Color.yellow;
        }

        foreach (GameObject Tusk in Gameobject_TuskLights)
        {
            Tusk.GetComponent<MeshRenderer>().material = Material_TuskYellow;
        }

        foreach (GameObject FloorLights in GateRoom_FloorLights)
        {
            FloorLights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
        }

        foreach (GameObject StairsLights in Gameobject_StairsLights)
        {
            StairsLights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
        }

        foreach (Light MainWarningLights in MainGateRoomLight)
        {
            MainWarningLights.enabled = false;
        }

        foreach (Light MainSafeLights in MainGateRoomLight_Safe)
        {
            MainSafeLights.enabled = true;
        }

        CancelInvoke("TuskLightsFlashing");
        CancelInvoke("LightFlashing");

        LevelSolved = false; // ensuring the update funtion only runs this once
    }
    
    //void TuskLightsFlashing()
    //{
    //    if (TuskLightIncrement)
    //    {
    //        TuskLightValue += 0.1f;
    //        TuskGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity = TuskLightValue;
    //         if (TuskGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity >= TuskLightMaxValue)
    //        {
    //            TuskLightIncrement = false;
    //        }
    //    }

    //    if (!TuskLightIncrement)
    //    {
    //        TuskLightValue -= 0.1f;
    //        TuskGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity = TuskLightValue;
    //        if (TuskGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity <= 18)
    //        {
    //            TuskLightIncrement = true;
    //        }
    //    }
    //}
    

    void LightFlashing()
    {
        if (MainLightIncrement)
        {
            MainLightValue += 0.1f;
            MainGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
            MainGateRoomLight[1].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
            if (MainGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity >= MainLightMaxValue)
            {
                MainLightIncrement = false;
            }
        }

        if (!MainLightIncrement)
        {
            MainLightValue -= 0.1f;
            MainGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
            MainGateRoomLight[1].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
            if (MainGateRoomLight[0].GetComponent<HDAdditionalLightData>().intensity <= 20)
            {
                MainLightIncrement = true;
            }
        }
    }
}
