using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerArrival : MonoBehaviour
{
    [SerializeField] public AudioSource GateShutDown;
    [SerializeField] private List<GameObject> SymbolLights;
    [SerializeField] private GameObject ball;

    [SerializeField] private ParticleSystem gateRoomSmokeleft;
    [SerializeField] private ParticleSystem gateRoomSmokeright;

    public List<GameObject> Shevrons = new List<GameObject>();
    public Material LightOff;
    public GameObject PlayerCamera;
    public GameObject Player;
    public GameObject eventHorizon;
    public Animator PlayerCamAnimator;

    void Start()
    {
        Invoke("turnOnPlayer", 13.0f);
        Invoke("turnOffPuddle", 10.0f);
        gateRoomSmokeright.Stop();
        gateRoomSmokeleft.Stop();
    }

    void turnOnPlayer()
    {
        Debug.Log("PLAYER ON");
        Player.GetComponent<Rigidbody>().useGravity = true;
        Player.GetComponent<FirstPersonAIO>().enabled = true;
        Player.GetComponent<CapsuleCollider>().enabled = true;
        //Player.transform.position = PlayerStartPosition.transform.position;

        // Turn camera animator off
        PlayerCamAnimator.enabled = false; 

    }

    public void smokeGateRoomPlay()
    {
        gateRoomSmokeleft.Play();
        gateRoomSmokeright.Play();
    }

    public void smokeGateRoomStop()
    {
        gateRoomSmokeleft.Stop();
        gateRoomSmokeright.Stop();
    }

    public void shutdownEventHorizon()
    {
        eventHorizon.SetActive(false);
    }

    public void UnlitShevrons()
    {
        foreach (GameObject light in Shevrons)
        {
            light.GetComponent<MeshRenderer>().material = LightOff;
        }
        ball.GetComponent<MeshRenderer>().material = LightOff;
    }

    public void UnlitSymbols()
    {
        foreach (GameObject light in SymbolLights)
        {
            light.SetActive(false);
        }
    }

    void turnOffPuddle()
    {
        Debug.Log("PUDDLE OFF");
        GateShutDown.Play();
        Invoke("shutdownEventHorizon", 2.5f);
        Invoke("UnlitShevrons", 2.0f);
        Invoke("UnlitSymbols", 2.0f);
        Invoke("smokeGateRoomPlay", 5.0f);
        Invoke("smokeGateRoomStop", 9.0f);

    }


}
