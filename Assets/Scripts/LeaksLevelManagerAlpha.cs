using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.Rendering;

public class LeaksLevelManagerAlpha : MonoBehaviour
{

    // Bool LevelFinished State taken from SealLeaks,cs
    //public SealLeaks LevelComplete;

    // No lights objects needed as we will be changing scenes on completion

    // Objects which handle the flashing light in the Danger scene

    public bool LevelSolved = false;

    public bool DangerVolumeShouldIncrement = true;
    public float DangerVolumeMaxValue;
    public float DangerVolumeMinValue;
    public float DangerVolumeIncrementValue;
    public float DangerWeightValue;

    public Volume DangerLevelVolume;

    // Update is called once per frame
    void FixedUpdate()
    {
        // MAKE LIGHTS FLASH BASE ON INCREMENT OVER TIME 
        //Invoke("GateRoomLightFlashing3", 0.0f);

        if (LevelSolved == false)
        {
            DangerVolumeFlashing();
        }

        //if (LevelSolved)
        //{
        //    //LoadSafeLevel();
        //}


        // listen for the console_4_switch having being pressed?
        // also listen to see if the player is in the correct location, Should this be within the bounding boxes of the console_4 item? Yes
    }

    void DangerVolumeFlashing()
    {
        // target the weight of the level volume
        if (DangerVolumeShouldIncrement)
        {
            DangerWeightValue += DangerVolumeIncrementValue;
            DangerLevelVolume.GetComponent<Volume>().weight = DangerWeightValue;
            if (DangerLevelVolume.GetComponent<Volume>().weight >= DangerVolumeMaxValue)
            {
                DangerVolumeShouldIncrement = false;
                //Debug.Log("FLASH");
            }
        }

        if (!DangerVolumeShouldIncrement)
        {
            DangerWeightValue -= DangerVolumeIncrementValue;
            DangerLevelVolume.GetComponent<Volume>().weight = DangerWeightValue;
            if (DangerLevelVolume.GetComponent<Volume>().weight <= DangerVolumeMinValue)
            {
                DangerVolumeShouldIncrement = true;
            }
        }
    }

    //void LevelSafe()
    //{
    //    Debug.Log("WELL DONE");

    //    // keep the canvas open, but listen out for when the relevant parent is closed
    //    // you will need a reference to the HideUI(); function NOTE: This is not a reference to console_4 in particular, just the closing it at any point the levelDSafe method is being called
    //    LevelComplete = FindObjectOfType<SealLeaks>();
    //    //LevelComplete.HideUI();

    //    // once closed, change scenes and have the Room_17 in its own gamobject set to a DontDestroyOnLoad(); script


    //}

}
