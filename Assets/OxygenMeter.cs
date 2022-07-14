using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;

public class OxygenMeter : MonoBehaviour
{
    
    public GameObject LowOxygenGameObject;
    public float O2DeclineRate;
    public Volume Damage_volume;
    public float FPSCrawlSpeed;

    public FirstPersonAIO fpsScript;
    public GameOverManager gameOverScript;


    void Start()
    {
        fpsScript = FindObjectOfType<FirstPersonAIO>();
        gameOverScript = FindObjectOfType<GameOverManager>();

        // This is more efficient than the Update() and FixedUpdate() methods because its such a small visual change on screen
        InvokeRepeating("OutputTime", 1f, 1f);
    }


    void OutputTime()
    {
        Debug.Log("O2 Decline..." + Time.time);
        if (this.transform.localScale.y > 0)
        {
            // NOTE : 0.1 reduction == 5 mins if the scale of the UI element is set to 30.0f
            this.transform.localScale = new Vector3(this.transform.localScale.x, this.transform.localScale.y - O2DeclineRate, this.transform.localScale.z);

            if (this.transform.localScale.y <= 5.0f)
            {
                Debug.Log("!!! ON");
                LowOxygenGameObject.SetActive(true);
            }
            else if (this.transform.localScale.y > 5.0f)
            {
                Debug.Log("!!! OFF");

                LowOxygenGameObject.SetActive(false);
            }

            InvokeRepeating("fadeInVisualEffect", 0.0f, 0.01f);

        }
    }

    void fadeInVisualEffect()
    {
        if (this.transform.localScale.y <= 10.0f && this.transform.localScale.y >= 5.0f)
        {
            if (Damage_volume.weight < 0.5f && Damage_volume.weight < 1.0f)
            {
                Damage_volume.weight += 0.00005f;
            }
        }

        if (this.transform.localScale.y <= 5.0f && Damage_volume.weight < 1.0f)
        {
            // slow player walk speed
            fpsScript.walkSpeed = FPSCrawlSpeed;
            fpsScript.sprintSpeed = FPSCrawlSpeed;
            fpsScript.headbobFrequency = 3.0f;
            fpsScript.headbobHeight = 3.0f;
            fpsScript.headbobSideMovement = 3.0f;


            if (Damage_volume.weight >= 0.5f)
            {
                Damage_volume.weight += 0.00005f;
            }
        }

    }

    void Update()
    {
        //check for the game over state
        if (this.transform.localScale.y <= 0.0f)
        {
            gameOverScript.ShowGameOverScreen();

        }
    }
}

