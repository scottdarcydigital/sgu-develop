using System.Collections;
using System.Collections.Generic;
using UnityEngine.Rendering;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine;

public class LifeMeter : MonoBehaviour
{

    public GameObject LowHealthGameObject;
    public float HealthDeclineRate;
    public Volume Damage_volume;
    public float FPSCrawlSpeed;

    public float HealthReduction;

    public FirstPersonAIO fpsScript;
    public GameOverManager gameOverScript;

    // Start is called before the first frame update
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
            this.transform.localScale = new Vector3(this.transform.localScale.x, this.transform.localScale.y - HealthDeclineRate, this.transform.localScale.z);

            if (this.transform.localScale.y <= 5.0f)
            {
                LowHealthGameObject.SetActive(true);
            }
            else if (this.transform.localScale.y > 5.0f)
            {
                LowHealthGameObject.SetActive(false);
            }



            InvokeRepeating("fadeInVisualEffect", 0.0f, 0.01f);


        }
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log("scaleing down..");

        if (Input.GetKeyDown(KeyCode.X))
        {
            if (this.transform.localScale.y > 0.0f)
            {
                this.transform.localScale = new Vector3(this.transform.localScale.x, this.transform.localScale.y - HealthReduction, this.transform.localScale.z);
            }
        }

        if (this.transform.localScale.y <= 0.0f)
        {
            gameOverScript.ShowGameOverScreen();
        }


    }

    void fadeInVisualEffect()
    {
        if (this.transform.localScale.y <= 10.0f && this.transform.localScale.y >= 9.0f)
        {
            if (Damage_volume.weight <= 0.1f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <=9.0f && this.transform.localScale.y >= 8.0f)
        {
            if (Damage_volume.weight <= 0.2f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <= 8.0f && this.transform.localScale.y >= 7.0f)
        {
            if (Damage_volume.weight <= 0.3f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <= 7.0f && this.transform.localScale.y >= 6.0f)
        {
            if (Damage_volume.weight <= 0.4f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <= 6.0f && this.transform.localScale.y >= 5.0f)
        {
            if (Damage_volume.weight <= 0.5f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <= 5.0f && this.transform.localScale.y >= 4.0f)
        {
            if (Damage_volume.weight <= 0.6f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }
        if (this.transform.localScale.y <= 4.0f && this.transform.localScale.y >= 3.0f)
        {
            if (Damage_volume.weight <= 0.7f)
            {
                Damage_volume.weight += 0.0005f;
            }
        }

        if (this.transform.localScale.y <= 5.0f)
        {

            if (Damage_volume.weight <= 1.0f)
            {
                Damage_volume.weight += 0.0005f;
            }

            // slow player walk speed
            fpsScript.walkSpeed = FPSCrawlSpeed;
            fpsScript.sprintSpeed = FPSCrawlSpeed;
            fpsScript.headbobFrequency = 3.0f;
            fpsScript.headbobHeight = 3.0f;
            fpsScript.headbobSideMovement = 3.0f;

        }
    }
}
