using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArchPin : MonoBehaviour
{
    [SerializeField] private DialGate GateSpeed;
    [SerializeField] private DialGate GateDirection;
    [SerializeField] private DialGate ShevronsLocked;
    [SerializeField] private GameObject DialPin;
    [SerializeField] private GameObject Light;
    [SerializeField] private GameObject GateCenter;
    [SerializeField] private AudioSource ShevLocked;
    [SerializeField] private Material m_Material;
    [SerializeField] private GameObject FirePin1;
    [SerializeField] private GameObject FirePin2;

    public bool Hit = false;
    public bool hasDialed = false;
    public bool paused = false;
    public bool Shevron_locked = false;
    public bool ArchAddedToArray = false;

    void Start()
    {
        GateSpeed = FindObjectOfType<DialGate>();
        ShevronsLocked = FindObjectOfType<DialGate>();
        GateDirection = FindObjectOfType<DialGate>();
    }

    void Update()
    {
        // Reset the values of this script once the ArchPin is put back into its origianl location
        if (this.transform.position == GateCenter.transform.position)
        {
            Hit = false;
            paused = false;
            ArchAddedToArray = false;
        }

        if (Hit == true)
        {
            this.GetComponent<MeshRenderer>().material = m_Material;
            if (!ArchAddedToArray)
            {
                // Trigger this Arches Firing_Pins if the shevron is not locked...
                FirePin1.transform.position = Vector3.MoveTowards(FirePin1.transform.position, this.transform.position, 0.05f);
                FirePin2.transform.position = Vector3.MoveTowards(FirePin2.transform.position, this.transform.position, 0.03f);
            }
            else if (ArchAddedToArray)
            {
                this.transform.position = Vector3.MoveTowards(this.transform.position, GateCenter.transform.position, 1.0f);

                FirePin1.transform.position = Vector3.MoveTowards(FirePin1.transform.position, GateCenter.transform.position, 1.0f);
                FirePin2.transform.position = Vector3.MoveTowards(FirePin2.transform.position, GateCenter.transform.position, 1.0f);
            }

            if (FirePin1.transform.position == this.transform.position)
            {
                Shevron_locked = true;
                Light.SetActive(true);
                Light.GetComponentInChildren<MeshRenderer>().material = m_Material;

                if (FirePin2.transform.position == this.transform.position && paused == true)
                {
                    if (paused == true)
                    {
                        AddShevron();
                    }

                    GateSpeed.xSpeed = GateSpeed.xSpeedCopy;
                    paused = false;
                }
            }
        }
    }

    public void AddShevron()
    {
        ShevronsLocked.ShevronsLocked_Arr.Add(Light);   
        ShevLocked.Play();
        GateDirection.RandomRotationDirection = Random.Range(0.0f, 1.0f);
        ArchAddedToArray = true;
        GateSpeed.GatePaused = false;

        if (GateDirection.RandomRotationDirection <= 0.5f)
        {
            GateSpeed.xSpeed = Mathf.Lerp(GateSpeed.xSpeed, 1.0f * GateSpeed.forwardSpeed, GateSpeed.forward_acc * Time.deltaTime);
            GateSpeed.xSpeedCopy = Mathf.Lerp(GateSpeed.xSpeed, 1.0f * GateSpeed.forwardSpeed, GateSpeed.forward_acc * Time.deltaTime);

        }
        else
        {
            GateSpeed.xSpeed = Mathf.Lerp(GateSpeed.xSpeed, 1.0f * GateSpeed.forwardSpeed, GateSpeed.forward_acc * Time.deltaTime);
            GateSpeed.xSpeedCopy = Mathf.Lerp(GateSpeed.xSpeed, 1.0f * GateSpeed.forwardSpeed, GateSpeed.forward_acc * Time.deltaTime);

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Dail_Pin")
        {
            GateSpeed.xSpeed = Mathf.Lerp(GateSpeed.xSpeed, 0.0f * GateSpeed.forwardSpeed, 60.0f * Time.deltaTime);
            Hit = true;
            paused = true;
            GateSpeed.GatePaused = true;
        }
    }
    
}
