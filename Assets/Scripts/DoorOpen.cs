using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorOpen : MonoBehaviour
{
    public GameObject Door_Left;   
    public GameObject Door_Right;   
    public GameObject Door_LeftOpenPosition;
    public GameObject Door_RigthOpenPosition;
    public GameObject Door_LeftClosePosition;
    public GameObject Door_RigthClosePosition;

    public List<AudioClip> audioClips;

    public List<GameObject> culledfViaScript;


    // occlusion volume for anything behind the door
    // public GameObject OcclussionVolume;

    //public GameObject DoorButtonLight;
    public List<GameObject> DoorButtonLights = new List<GameObject>();

    public Material RedGlow;
    public Material BlueGlow;
    public Material YellowGlow;

    public bool DoorSafe;
    public bool PlayerInRange;
    public bool OpenDoors;

    public bool PlayingDoorsOpeningAudio;
    public bool PlayDoorsFullyOpenAudio;

    public bool PlayingDoorsClosingAudio;
    public bool PlayDoorsFullyClosedAudio;


    private void OnTriggerEnter(Collider other)
    {

        if (other.tag == "Player")
        {
            PlayerInRange = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {

            if (Door_Left.transform.position != Door_LeftClosePosition.transform.position &&
            Door_Right.transform.position != Door_RigthClosePosition.transform.position) {
                Debug.Log("WOO");
                Debug.Log("WOO Door left : " + Door_Left.transform.position);
                Debug.Log("WOO Door left Close.Pos : " + Door_LeftClosePosition.transform.position);
                Debug.Log("WOO Door right : " + Door_Right.transform.position);
                Debug.Log("WOO Door right Close.Pos : " + Door_RigthClosePosition.transform.position);
                PlayingDoorsClosingAudio = true;
                PlayDoorsFullyClosedAudio = true;
                PlayerInRange = false;
                OpenDoors = false;
                CloseDoorsFunction();
            } 
            else
            {
                Debug.Log("WOOOo 2");

            }
            //PlayerInRange = false;
            //OpenDoors = false;

            // check to make sure the door close sound and function doesnt play if the doors are already closed...
            //if (Door_Left.transform.position != Door_LeftClosePosition.transform.position &&
            //Door_Right.transform.position != Door_RigthClosePosition.transform.position)
            //{
            //PlayingDoorsClosingAudio = true;
            //PlayDoorsFullyClosedAudio = true;
            //CloseDoorsFunction();
            //}

        }
    }

    public void OpenDoorsFunction()
    {
        if (!PlayingDoorsOpeningAudio)
        {
            PlayingDoorsOpeningAudio = true;
            this.gameObject.GetComponent<AudioSource>().clip = audioClips[1];
            this.gameObject.GetComponent<AudioSource>().Play();
        }

        Debug.Log("Doros opening....");

        this.GetComponent<OcclusionPortal>().open = true;
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftOpenPosition.transform.position, 0.015f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthOpenPosition.transform.position, 0.015f);

        if (Door_Left.transform.position == Door_LeftOpenPosition.transform.position && 
            Door_Right.transform.position == Door_RigthOpenPosition.transform.position)
        {
            if (!PlayDoorsFullyOpenAudio)
            {
                PlayDoorsFullyOpenAudio = true;
                Debug.Log("Door is fully open");
                this.gameObject.GetComponent<AudioSource>().clip = audioClips[2];
                this.gameObject.GetComponent<AudioSource>().Play();
            }
            
        }

    }

    public void CloseDoorsFunction()
    {
        if (PlayingDoorsClosingAudio)
        {
            PlayingDoorsClosingAudio = false;
            this.gameObject.GetComponent<AudioSource>().clip = audioClips[3];
            this.gameObject.GetComponent<AudioSource>().Play();
        }

        Debug.Log("Doros closing....");

        DoorButtonLights[0].GetComponent<MeshRenderer>().material = YellowGlow;
        DoorButtonLights[1].GetComponent<MeshRenderer>().material = YellowGlow;
        Door_Left.transform.position = Vector3.MoveTowards(Door_Left.transform.position, Door_LeftClosePosition.transform.position, 0.02f);
        Door_Right.transform.position = Vector3.MoveTowards(Door_Right.transform.position, Door_RigthClosePosition.transform.position, 0.02f);
        
        // only trigger when doors are fully closed (position based due to tick time flucuation)
        if (Door_Left.transform.position == Door_LeftClosePosition.transform.position &&
            Door_Right.transform.position == Door_RigthClosePosition.transform.position)
        {
            this.GetComponent<OcclusionPortal>().open = false;
            Debug.Log("DOOR IS NOW CLOSED, The audio open track can be played again...");
            PlayingDoorsOpeningAudio = false;
            PlayDoorsFullyOpenAudio = false;

            if (PlayDoorsFullyClosedAudio)
            {
                Debug.Log("Door fully closed audio");
                PlayDoorsFullyClosedAudio = false;
                this.gameObject.GetComponent<AudioSource>().clip = audioClips[2];
                this.gameObject.GetComponent<AudioSource>().Play();
                // doors are fully closed so now disable the culled objects
                foreach (GameObject cullObject in culledfViaScript)
                {
                    Debug.Log("1907 culled doors closed");
                    cullObject.SetActive(false);
                }
            }

        }

    }

    // Start is called before the first frame update
    void Start()
    { }


    IEnumerator OpenDoorsWithDelay()
    {
        yield return new WaitForSeconds(1.5f);
        OpenDoors = true;

        // set the objects culling via script to display
        foreach (GameObject cullObject in culledfViaScript)
        {
            Debug.Log("1907 culled doors opening");
            cullObject.SetActive(true);
        }
    }



    


    // Update is called once per frame
    void Update()
    {
        if (!DoorSafe)
        {
            DoorButtonLights[0].GetComponent<MeshRenderer>().material = RedGlow;
            DoorButtonLights[1].GetComponent<MeshRenderer>().material = RedGlow;
            return;
        }

        if (DoorSafe && !PlayerInRange)
        {
            DoorButtonLights[0].GetComponent<MeshRenderer>().material = YellowGlow;
            DoorButtonLights[1].GetComponent<MeshRenderer>().material = YellowGlow;
        }

        if (PlayerInRange)
        {
            if (DoorSafe)
            {
                if (Input.GetKeyDown(KeyCode.E))
                {
                    // Button sound here
                    this.gameObject.GetComponent<AudioSource>().clip = audioClips[0];
                    this.gameObject.GetComponent<AudioSource>().Play();
                    // if safe, play cog turning sound

                    //after other sounds have played then open the door...
                    DoorButtonLights[0].GetComponent<MeshRenderer>().material = BlueGlow;
                    DoorButtonLights[1].GetComponent<MeshRenderer>().material = BlueGlow;

                    // delay function to set true variablet o open doors
                    StartCoroutine(OpenDoorsWithDelay());

                }

                if (OpenDoors)
                {
                    OpenDoorsFunction();
                }
            } 
        }
        else if (!PlayerInRange && DoorSafe)
        {
            CloseDoorsFunction();
        }
    }
}
