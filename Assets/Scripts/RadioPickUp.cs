using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadioPickUp : MonoBehaviour
{
    // Turn on the collider logic for the first console only after the radio has been picked up
    public GameObject FirstConsole;
    public GameObject Radio;
    public bool nearRadio;

    public AudioSource DangerTrack;
    public AudioSource AlarmTrack;

    public RadioConversations Radio_Conversations;

    void Start()
    {
        Radio = this.gameObject;
        FirstConsole.GetComponent<CapsuleCollider>().enabled = false;
        Radio_Conversations = FindObjectOfType<RadioConversations>();
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
                
                // reference the RadioConversation script and play the initial conversation before this object is destroyed
                Radio_Conversations.audioSource.clip = Radio_Conversations.audioClips[0];
                Radio_Conversations.audioSource.Play();
                Destroy(this.gameObject);
            }
        }
    }
}
