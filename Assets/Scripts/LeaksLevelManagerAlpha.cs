using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;
using UnityEngine.Rendering;

public class LeaksLevelManagerAlpha : MonoBehaviour
{

    // No lights objects needed as we will be changing scenes on completion

    // Objects which handle the flashing light in the Danger scene

    public bool LevelSolved = false;

    public bool DangerVolumeShouldIncrement = true;
    public float DangerVolumeMaxValue;
    public float DangerVolumeMinValue;
    public float DangerVolumeIncrementValue;
    public float DangerWeightValue;

    public Volume DangerLevelVolume;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        // MAKE LIGHTS FLASH BASE ON INCREMENT OVER TIME 
        //Invoke("GateRoomLightFlashing3", 0.0f);
        DangerVolumeFlashing();
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
                Debug.Log("FLASH");
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

    void LevelSafe()
    {
        // set bool and transition to next scene
    }
}
