using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadioPickUp : MonoBehaviour
{
    // Turn on the collider logic for the first console only after the radio has been picked up
    public GameObject FirstConsole;
    public GameObject Radio;
    public bool nearRadio;

    void Start()
    {
        Radio = this.gameObject;
        FirstConsole.GetComponent<CapsuleCollider>().enabled = false;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            nearRadio = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            nearRadio = false;
        }
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (nearRadio)
            {
                FirstConsole.GetComponent<CapsuleCollider>().enabled = true;
                Destroy(this.gameObject);
            }
        }
    }
}
