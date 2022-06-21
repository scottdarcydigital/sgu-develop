using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;
using UnityEngine.Rendering;

 //NOTE : THIS SCRIPT SHOULD BE RE-WRITTEN TO ACCOMODATE THE NEW FUNCTIONS OF
 //https://trello.com/c/WGnaUtV9/92-have-a-level-finished-state-for-when-all-the-leaks-in-the-first-level-are-sealed-off

public class LeaksLevelManager : MonoBehaviour
{
    //public List<Light> TuskLights = new List<Light>();
    //public List<Light> DoorLightsGateRoomEast_West = new List<Light>();
    //public List<Light> Corridoor_FloorLights = new List<Light>();
    //public List<GameObject> GateRoom_FloorLights = new List<GameObject>();
    //public List<GameObject> Gameobject_DoorLights = new List<GameObject>();
    //public List<GameObject> Gameobject_BalconyUnderLights = new List<GameObject>();
    //public List<GameObject> Gameobject_TuskLights = new List<GameObject>();
    //public List<GameObject> Gameobject_StairsLights = new List<GameObject>();

    //public List<Light> Lights_To_Disable = new List<Light>();

    //public Material Material_TuskRed;
    //public Material Material_TuskYellow;
    //public Material Material_GlowRed;
    //public Material Material_GlowYellow;

    //public Camera PlayerCameraISO;

    //public bool IsoIncrement = true;
    //public int isoValue;

    //public bool MainLightIncrement = true;
    //public float MainLightMaxValue;
    //public float MainLightValue;
    //public float MainLightValueIncrement;

    //public bool MainExposureIncrement = true;
    //public float MainExposureMaxValue;
    //public float MainExposureMinValue;
    //public float MainExposureValue;
    //public float FlashInterval;
    //public float FlashDelay;


    //public bool tusklightincrement = true;
    //public float tusklightmaxvalue;
    //public float tusklightvalue;
    //public float tusklightvalueincrement;


    //public List<Light> MainGateRoomLight_Safe = new List<Light>();
    //public List<Light> MainGateRoomLight_Danger = new List<Light>();
    //public List<Light> TuskGateRoomLight = new List<Light>();

    //public List<Volume> Volumes_Safe = new List<Volume>();
    //public List<Volume> Volumes_Danger = new List<Volume>();

    //public bool LevelSolved;

    //public GameObject Corridoors_Script;

    //public GameObject[] SafeLights;
    //public GameObject[] DangerLights;
    //public List<GameObject> listOfChildren = new List<GameObject>();

    //ColorAdjustments color_adjustments;

    void Start()
    {
        //LevelInDanger();
        //DangerLights = GameObject.FindGameObjectsWithTag("LevelDanger");




    }

    //void Toggle()
    //{
    //    m_Volume.enabled = false;
    //}

    void Update()
    {
        //if (IsoIncrement)
        //{
        //    if (PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso >= 200)
        //    {
        //        IsoIncrement = false;
        //    }
        //}
        //if (!IsoIncrement)
        //{
        //    if (PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso <= 10)
        //    {
        //        IsoIncrement = true;
        //    }
        //}

        //if (LevelSolved)
        //{
        //    LevelSafe();
        //}
    }

    //void LevelInDanger()
    //{

    // TOGGLE VOLUMES

    //foreach (Volume child in Volumes_Safe)
    //{
    //    child.enabled = false;
    //}

    //foreach (Volume child in Volumes_Danger)
    //{
    //    child.enabled = true;
    //}

    //foreach (Light child in MainGateRoomLight_Safe)
    //{
    //    child.enabled = false;
    //}

    //foreach (Light child in MainGateRoomLight_Danger)
    //{
    //    child.enabled = true;

    //}

    // CHANGE MATERIALS ON ALL RED LIGHT OBJECTS IN GATE ROOM

    //isoValue = PlayerCameraISO.GetComponent<HDAdditionalCameraData>().physicalParameters.iso;

    // UNDER BALCONY LIGHTS
    //foreach (GameObject Underlights in Gameobject_BalconyUnderLights)
    //{
    //    Underlights.GetComponent<MeshRenderer>().material = Material_GlowRed;
    //}

    //foreach (Light DoorLight in DoorLightsGateRoomEast_West)
    //{
    //    DoorLight.GetComponent<Light>().color = Color.red;
    //}

    //// DOOR LIGHTS
    //foreach (GameObject Door in Gameobject_DoorLights)
    //{
    //    Door.GetComponent<MeshRenderer>().material = Material_TuskRed;
    //}

    //// TUSK LIGHTS
    //foreach (Light TuskLight in TuskLights)
    //{
    //    TuskLight.GetComponent<Light>().color = Color.red;
    //}

    //foreach (GameObject Tusk in Gameobject_TuskLights)
    //{
    //    Tusk.GetComponent<MeshRenderer>().material = Material_TuskRed;
    //}

    //// GATE ROOM FLOOR LIGHTS
    //foreach (GameObject FloorLights in GateRoom_FloorLights)
    //{
    //    FloorLights.GetComponent<MeshRenderer>().material = Material_GlowRed;
    //}

    //foreach (Light LightsToDisable in Lights_To_Disable)
    //{
    //    LightsToDisable.enabled = false;
    //}

    //// STAIRS LIGHTS
    //foreach (GameObject StairsLights in Gameobject_StairsLights)
    //{
    //    StairsLights.GetComponent<MeshRenderer>().material = Material_GlowRed;
    //}

    //// FLASHING POINTLIGHTS TOGGLE ENABLE
    //foreach (Light MainWarningLights in MainGateRoomLight_Danger)
    //{
    //    MainWarningLights.enabled = true;
    //}

    //foreach (Light MainSafeLights in MainGateRoomLight_Safe)
    //{
    //    MainSafeLights.enabled = false;
    //}

    // MAKE LIGHTS FLASH BASE ON INCREMENT OVER TIME 
    //InvokeRepeating("LightFlashingVolume", 0.0f, FlashInterval);
    //InvokeRepeating("LightFlashing", 0.0f, FlashInterval);
    //InvokeRepeating("TuskLightsFlashing", 0.0f, flashInterval);
    //}

    //void LevelSafe()
    //{
    //    foreach (Light child in MainGateRoomLight_Safe)
    //    {
    //        child.enabled = true;
    //    }

    //    foreach (Light child in MainGateRoomLight_Danger)
    //    {
    //        child.enabled = false;

    //    }

    //    // TOGGLE VOLUMES

    //    //foreach (Volume child in Volumes_Safe)
    //    //{
    //    //    child.enabled = true;
    //    //}

    //    //foreach (Volume child in Volumes_Danger)
    //    //{
    //    //    child.enabled = false;
    //    //}

    //    foreach (GameObject Underlights in Gameobject_BalconyUnderLights)
    //    {
    //        Underlights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
    //    }

    //    //foreach (Light DoorLight in DoorLightsGateRoomEast_West)
    //    //{
    //    //    DoorLight.GetComponent<Light>().color = Color.yellow;
    //    //}

    //    foreach (GameObject Door in Gameobject_DoorLights)
    //    {
    //        Door.GetComponent<MeshRenderer>().material = Material_TuskYellow;
    //    }

    //    foreach (Light TuskLight in TuskLights)
    //    {
    //        TuskLight.GetComponent<Light>().color = Color.yellow;
    //    }

    //    foreach (GameObject Tusk in Gameobject_TuskLights)
    //    {
    //        Tusk.GetComponent<MeshRenderer>().material = Material_TuskYellow;
    //    }

    //    foreach (GameObject FloorLights in GateRoom_FloorLights)
    //    {
    //        FloorLights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
    //    }

    //    foreach (GameObject StairsLights in Gameobject_StairsLights)
    //    {
    //        StairsLights.GetComponent<MeshRenderer>().material = Material_GlowYellow;
    //    }

    //    foreach (Light MainWarningLights in MainGateRoomLight_Danger)
    //    {
    //        MainWarningLights.enabled = false;
    //    }

    //    foreach (Light MainSafeLights in MainGateRoomLight_Safe)
    //    {
    //        MainSafeLights.enabled = true;
    //    }

    //    CancelInvoke("TuskLightsFlashing");
    //    CancelInvoke("LightFlashing");

    //    LevelSolved = false; // ensuring the update funtion only runs this once
    //}

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
    //    void LightFlashing()
    //    {
    //        if (MainLightIncrement)
    //        {
    //            MainLightValue += 0.1f;
    //            MainGateRoomLight_Danger[0].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
    //            if (MainGateRoomLight_Danger[0].GetComponent<HDAdditionalLightData>().intensity >= MainLightMaxValue)
    //            {
    //                MainLightIncrement = false;
    //            }
    //        }

    //        if (!MainLightIncrement)
    //        {
    //            MainLightValue -= 0.1f;
    //            MainGateRoomLight_Danger[0].GetComponent<HDAdditionalLightData>().intensity = MainLightValue;
    //            if (MainGateRoomLight_Danger[0].GetComponent<HDAdditionalLightData>().intensity <= 20)
    //            {
    //                MainLightIncrement = true;
    //            }
    //        }
    //    }

    //    void LightFlashingVolume()
    //    {

    //        // NOTE : THIS NOW USES THE DANGER VOLUME RATHER THAN THE MAIN LIGHTS IN THE GATE ROOM

    //        ColorAdjustments temp_exposure;

    //        if (MainExposureIncrement)
    //        {
    //            MainExposureValue += FlashInterval;
    //            if (Volumes_Danger[0].sharedProfile.TryGet<ColorAdjustments>(out temp_exposure))
    //            {
    //                color_adjustments = temp_exposure;
    //                color_adjustments.postExposure.value = MainExposureValue;
    //            }
    //            if (color_adjustments.postExposure.value >= MainExposureMaxValue)
    //            {
    //                Debug.Log("GREATER THAN RED DANGER LIGHT");
    //                MainExposureIncrement = false;
    //            }
    //        }

    //        if (!MainExposureIncrement)
    //        {
    //            MainExposureValue -= FlashInterval;

    //            if (Volumes_Danger[0].sharedProfile.TryGet<ColorAdjustments>(out temp_exposure))
    //            {
    //                color_adjustments = temp_exposure;
    //                color_adjustments.postExposure.value = MainExposureValue;
    //            }
    //            if (color_adjustments.postExposure.value <= MainExposureMinValue)
    //            {
    //                MainExposureIncrement = true;
    //            }
    //        }
    //    }
}
