using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class DialGate : MonoBehaviour
{
    private DialDate_Interface UIbuttons;

    public GameManager playerLocation;
    public GameManager countDownVariables;

    [SerializeField] public AudioSource GateShutDown;
    [SerializeField] private AudioSource GateTurnOn;
    [SerializeField] private AudioSource GateActivate;
    [SerializeField] private AudioSource GateSpinning;
    [SerializeField] private AudioSource GetConst;
    [SerializeField] private AudioSource Failed_Dailing;

    // Temp Var
    [SerializeField] private string AttemptingToDialLocation;
    [SerializeField] private GameObject Gate;
    [SerializeField] private GameObject DialPin;
    [SerializeField] public GameObject eventHorizon;
    [SerializeField] private GameObject ball;
    [SerializeField] private List<GameObject> SymbolLights;
    [SerializeField] private List<GameObject> Targets_Arr;
    [SerializeField] private List<GameObject> ArchPin_Arr;

    public bool DialNow = false;
    public bool GatePaused = false;
    public bool GateIsActive = false;
    public float xSpeed;
    public float xSpeedCopy;
    public float Stop = 0.0f;
    public float RandomRotationDirection;
    public int GateAddressMin = 7;

    public float forwardSpeed;
    public float forward_acc;
    public float forward_dcc;

    public List<GameObject> GateAddress_Arr = new List<GameObject>();
    public List<GameObject> GateAddress_TargetLocations_Arr = new List<GameObject>();
    public List<GameObject> ShevronsLocked_Arr = new List<GameObject>();
    public List<GameObject> Shevrons = new List<GameObject>();

    public Material BlueGlow;
    public Material YellowGlow;
    public Material RedGlow;
    public Material LightOff;

    public bool meh = false;
    [SerializeField] private ParticleSystem gateRoomSmokeleft;
    [SerializeField] private ParticleSystem gateRoomSmokeright;

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

    public void BlueShevrons()
    {
        foreach (GameObject light in Shevrons)
        {
            light.GetComponent<MeshRenderer>().material = BlueGlow;
        }
        GateTurnOn.Play();
        GateSpinning.Play();
        ball.GetComponent<MeshRenderer>().material = BlueGlow;
    }
    public void YellowShevrons()
    {
        foreach (GameObject light in Shevrons)
        {
            light.GetComponent<MeshRenderer>().material = YellowGlow;
        }
    }
    public void RedShevrons()
    {
        foreach (GameObject light in Shevrons)
        {
            light.GetComponent<MeshRenderer>().material = RedGlow;
        }
    }

    public void UnlitShevrons()
    {
        foreach (GameObject light in Shevrons)
        {
            light.GetComponent<MeshRenderer>().material = LightOff;
        }
        ball.GetComponent<MeshRenderer>().material = LightOff;
    }

    public void UIButtons_Active()
    {
        // Set the UI buttons back to active
        UIbuttons.sym_1.interactable = true;
        UIbuttons.sym_2.interactable = true;
        UIbuttons.sym_3.interactable = true;
        UIbuttons.sym_4.interactable = true;
        UIbuttons.sym_5.interactable = true;
        UIbuttons.sym_6.interactable = true;
        UIbuttons.sym_7.interactable = true;
        UIbuttons.sym_8.interactable = true;
        UIbuttons.sym_9.interactable = true;
        UIbuttons.sym_10.interactable = true;
        UIbuttons.sym_11.interactable = true;
        UIbuttons.sym_12.interactable = true;
        UIbuttons.sym_13.interactable = true;
        UIbuttons.sym_14.interactable = true;
        UIbuttons.sym_15.interactable = true;
        UIbuttons.sym_16.interactable = true;
        UIbuttons.sym_17.interactable = true;
        UIbuttons.sym_18.interactable = true;
        UIbuttons.sym_19.interactable = true;
        UIbuttons.sym_20.interactable = true;
        UIbuttons.sym_21.interactable = true;
        UIbuttons.sym_22.interactable = true;
        UIbuttons.sym_23.interactable = true;
        UIbuttons.sym_24.interactable = true;
        UIbuttons.sym_25.interactable = true;
        UIbuttons.sym_26.interactable = true;
        UIbuttons.sym_27.interactable = true;
        UIbuttons.sym_28.interactable = true;
        UIbuttons.sym_29.interactable = true;
        UIbuttons.sym_30.interactable = true;
        UIbuttons.sym_31.interactable = true;
        UIbuttons.sym_32.interactable = true;
        UIbuttons.sym_33.interactable = true;
        UIbuttons.sym_34.interactable = true;
        UIbuttons.sym_35.interactable = true;
        UIbuttons.sym_36.interactable = true;
    }

    public void UIButtons_Inactive()
    {
        UIbuttons.sym_1.interactable = false;
        UIbuttons.sym_2.interactable = false;
        UIbuttons.sym_3.interactable = false;
        UIbuttons.sym_4.interactable = false;
        UIbuttons.sym_5.interactable = false;
        UIbuttons.sym_6.interactable = false;
        UIbuttons.sym_7.interactable = false;
        UIbuttons.sym_8.interactable = false;
        UIbuttons.sym_9.interactable = false;
        UIbuttons.sym_10.interactable = false;
        UIbuttons.sym_11.interactable = false;
        UIbuttons.sym_12.interactable = false;
        UIbuttons.sym_13.interactable = false;
        UIbuttons.sym_14.interactable = false;
        UIbuttons.sym_15.interactable = false;
        UIbuttons.sym_16.interactable = false;
        UIbuttons.sym_17.interactable = false;
        UIbuttons.sym_18.interactable = false;
        UIbuttons.sym_19.interactable = false;
        UIbuttons.sym_20.interactable = false;
        UIbuttons.sym_21.interactable = false;
        UIbuttons.sym_22.interactable = false;
        UIbuttons.sym_23.interactable = false;
        UIbuttons.sym_24.interactable = false;
        UIbuttons.sym_25.interactable = false;
        UIbuttons.sym_26.interactable = false;
        UIbuttons.sym_27.interactable = false;
        UIbuttons.sym_28.interactable = false;
        UIbuttons.sym_29.interactable = false;
        UIbuttons.sym_30.interactable = false;
        UIbuttons.sym_31.interactable = false;
        UIbuttons.sym_32.interactable = false;
        UIbuttons.sym_33.interactable = false;
        UIbuttons.sym_34.interactable = false;
        UIbuttons.sym_35.interactable = false;
        UIbuttons.sym_36.interactable = false;
    }

    public void UIButtons_LastSceneLoaded_Active()
    {
        LastSceneLoaded.sym_1 = true;
        LastSceneLoaded.sym_2 = true;
        LastSceneLoaded.sym_3 = true;
        LastSceneLoaded.sym_4 = true;
        LastSceneLoaded.sym_5 = true;
        LastSceneLoaded.sym_6 = true;
        LastSceneLoaded.sym_7 = true;
        LastSceneLoaded.sym_8 = true;
        LastSceneLoaded.sym_9 = true;
        LastSceneLoaded.sym_10 = true;
        LastSceneLoaded.sym_11 = true;
        LastSceneLoaded.sym_12 = true;
        LastSceneLoaded.sym_13 = true;
        LastSceneLoaded.sym_14 = true;
        LastSceneLoaded.sym_15 = true;
        LastSceneLoaded.sym_16 = true;
        LastSceneLoaded.sym_17 = true;
        LastSceneLoaded.sym_18 = true;
        LastSceneLoaded.sym_19 = true;
        LastSceneLoaded.sym_20 = true;
        LastSceneLoaded.sym_21 = true;
        LastSceneLoaded.sym_22 = true;
        LastSceneLoaded.sym_23 = true;
        LastSceneLoaded.sym_24 = true;
        LastSceneLoaded.sym_25 = true;
        LastSceneLoaded.sym_26 = true;
        LastSceneLoaded.sym_27 = true;
        LastSceneLoaded.sym_28 = true;
        LastSceneLoaded.sym_29 = true;
        LastSceneLoaded.sym_30 = true;
        LastSceneLoaded.sym_31 = true;
        LastSceneLoaded.sym_32 = true;
        LastSceneLoaded.sym_33 = true;
        LastSceneLoaded.sym_34 = true;
        LastSceneLoaded.sym_35 = true;
        LastSceneLoaded.sym_36 = true;
    }

    public void UIButtons_LastSceneLoaded_Inactive()
    {
        LastSceneLoaded.sym_1 = false;
        LastSceneLoaded.sym_2 = false;
        LastSceneLoaded.sym_3 = false;
        LastSceneLoaded.sym_4 = false;
        LastSceneLoaded.sym_5 = false;
        LastSceneLoaded.sym_6 = false;
        LastSceneLoaded.sym_7 = false;
        LastSceneLoaded.sym_8 = false;
        LastSceneLoaded.sym_9 = false;
        LastSceneLoaded.sym_10 = false;
        LastSceneLoaded.sym_11 = false;
        LastSceneLoaded.sym_12 = false;
        LastSceneLoaded.sym_13 = false;
        LastSceneLoaded.sym_14 = false;
        LastSceneLoaded.sym_15 = false;
        LastSceneLoaded.sym_16 = false;
        LastSceneLoaded.sym_17 = false;
        LastSceneLoaded.sym_18 = false;
        LastSceneLoaded.sym_19 = false;
        LastSceneLoaded.sym_20 = false;
        LastSceneLoaded.sym_21 = false;
        LastSceneLoaded.sym_22 = false;
        LastSceneLoaded.sym_23 = false;
        LastSceneLoaded.sym_24 = false;
        LastSceneLoaded.sym_25 = false;
        LastSceneLoaded.sym_26 = false;
        LastSceneLoaded.sym_27 = false;
        LastSceneLoaded.sym_28 = false;
        LastSceneLoaded.sym_29 = false;
        LastSceneLoaded.sym_30 = false;
        LastSceneLoaded.sym_31 = false;
        LastSceneLoaded.sym_32 = false;
        LastSceneLoaded.sym_33 = false;
        LastSceneLoaded.sym_34 = false;
        LastSceneLoaded.sym_35 = false;
        LastSceneLoaded.sym_36 = false;
    }

    public void UnlitSymbols()
    {
        foreach (GameObject light in SymbolLights)
        {
            light.SetActive(false);
        }
    }

    public void shutdownEventHorizon()
    {
        eventHorizon.SetActive(false);
    }

    public void DialIsTrue()
    {
        DialNow = true;
        
    }

    public void attemptingToDialSameAddress()
    {
        Invoke("RedShevrons", 0);
        Invoke("UnlitShevrons", 2);
        GateIsActive = false;
        DialNow = false;
        GateAddress_Arr.Clear();
        ShevronsLocked_Arr.Clear();
        GateAddress_TargetLocations_Arr.Clear();
        Invoke("UIButtons_Active", 0.0f);
        Invoke("UIButtons_LastSceneLoaded_Active", 0.0f);
        return;
    }

    void Start()
    {
        gateRoomSmokeright.Stop();
        gateRoomSmokeleft.Stop();
        Scene scene = SceneManager.GetActiveScene();
        UIbuttons = FindObjectOfType<DialDate_Interface>();
        RandomRotationDirection = Random.Range(0.0f, 1.0f);       // NOTE USE THIS TO FIGURE OUT WHICH WAY AND TO RANDOMISE THE SPIN DIRECTION OF THE GATE
        playerLocation = FindObjectOfType<GameManager>();
        countDownVariables = FindObjectOfType<GameManager>();

        if (RandomRotationDirection <= 0.5f)
        {
            xSpeedCopy = -xSpeed;
            xSpeed = -xSpeed;
        } else
        {
            xSpeedCopy = xSpeed;
        }

        if (eventHorizon.activeSelf)
        {
            UIButtons_Inactive();
            UIButtons_LastSceneLoaded_Inactive();
        }

        if (LastSceneLoaded.previousLocation != "null")
        {

        }
    }

    void randomDirection() {

        if (RandomRotationDirection <= 0.5f)
        {
            xSpeedCopy = -xSpeed;
            xSpeed = -xSpeed;
        }
        else
        {
            xSpeedCopy = xSpeed;
        }
    }

    public float accinc = 0.01f;

    void Update()
    {
        Scene scene = SceneManager.GetActiveScene();

        if (ShevronsLocked_Arr.Count == GateAddressMin)
        {
            if(!GateIsActive)
            {
                DailGate();
            }
        }

        if (Input.GetKeyDown(KeyCode.X))
        {
            ShutDownGate();
            Invoke("smokeGateRoomPlay" , 2);    // difference in these values determines time particle system is played for 
            Invoke("smokeGateRoomStop" , 4);
        }

        if (Input.GetKeyDown(KeyCode.Q))
        {
            if (
                GateAddress_Arr.Contains(ArchPin_Arr[0]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[1]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[2]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[3]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[4]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[5]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[6]) 
                )
            {
                AttemptingToDialLocation = "Prefab_TemplateLevel_1";
            }

            //  AddressTwo Check
            if (
                GateAddress_Arr.Contains(ArchPin_Arr[1]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[2]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[3]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[4]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[5]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[6]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[7])
                )
            {
                AttemptingToDialLocation = "Prefab_TemplateLevel_2";
            }

            //  AddressDestiny Check
            if (
                GateAddress_Arr.Contains(ArchPin_Arr[29]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[30]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[31]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[32]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[33]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[34]) &&
                GateAddress_Arr.Contains(ArchPin_Arr[35])
                )
            {
                AttemptingToDialLocation = "Prefab_TemplateLevel_3";
            }

            // if you have not selected enough symbols throw a gate failed function and clear the arrays just selected
            if (GateAddress_Arr.Count < GateAddressMin)
            {
                Invoke("YellowShevrons", 0);
                Invoke("UnlitShevrons", 2);
                Failed_Dailing.Play();

                // clear arrays and reset UI buttons/ global values
                GateIsActive = false;
                DialNow = false;

                Invoke("UIButtons_Active", 0.0f);
                Invoke("UIButtons_LastSceneLoaded_Active", 0.0f);

                GateAddress_Arr.Clear();
                ShevronsLocked_Arr.Clear();
                GateAddress_TargetLocations_Arr.Clear();
                return;
            }

            else if (AttemptingToDialLocation == playerLocation.PlayerLocation)  // HERE 08.03   // your player and kino location for this.
            {
                attemptingToDialSameAddress();
            }
            else if (GateAddress_Arr.Count == GateAddressMin)
            {
                Invoke("BlueShevrons", 1.0f);
                Invoke("DialIsTrue", 2.0f);
            }
        }
        
        if (DialNow == true)
        {
            if (GatePaused) { 
                xSpeed = Mathf.Lerp(xSpeed, 0.0f * forwardSpeed, forward_dcc * Time.deltaTime);
            } 
            if (!GatePaused) {
                xSpeed = Mathf.Lerp(xSpeed, 1.0f * forwardSpeed, forward_acc * Time.deltaTime);
            }

            Gate.transform.Rotate(Vector3.left * (xSpeed * Time.deltaTime));

            for (var i = 0; i < GateAddress_Arr.Count; i++)
            {
                GateAddress_Arr[i].transform.position = Vector3.MoveTowards(GateAddress_Arr[i].transform.position, GateAddress_TargetLocations_Arr[i].transform.position, 0.05f);
            }

            if (xSpeed == 0.0f)
            {
                GateSpinning.volume = 0.0f;
            } else if (xSpeed > 2.0f)
            {
                GateSpinning.volume = 0.1f;
            }
        }

        if (GateAddress_Arr.Count == GateAddressMin)
        {
            UIButtons_Inactive();
            UIButtons_LastSceneLoaded_Inactive();
        }

    }

    public void DailGate()
    {
        if (!eventHorizon.activeSelf)
        {
            GateActivate.Play();
            eventHorizon.SetActive(true);
            GetConst.Play();
            xSpeed = 0.0f;
            GateIsActive = true;
            DialNow = false;
        }
    }

    public void ShutDownGate()
    {
        GateIsActive = false;
        DialNow = false;

        GateAddress_Arr.Clear();
        ShevronsLocked_Arr.Clear();
        GateAddress_TargetLocations_Arr.Clear();

        GateShutDown.Play();
        GetConst.Stop();
        Invoke("shutdownEventHorizon", 1.0f);
        Invoke("UnlitShevrons", 2.0f);
        Invoke("UnlitSymbols", 2.0f);
        Invoke("UIButtons_Active", 2.5f);
        Invoke("UIButtons_LastSceneLoaded_Active", 2.5f);
    }

    public void Shev_1()
    {
        GateAddress_Arr.Add(ArchPin_Arr[0]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[0]);
    }
    public void Shev_2()
    {
        GateAddress_Arr.Add(ArchPin_Arr[1]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[1]);
    }
    public void Shev_3()
    {
        GateAddress_Arr.Add(ArchPin_Arr[2]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[2]);
    }
    public void Shev_4()
    {
        GateAddress_Arr.Add(ArchPin_Arr[3]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[3]);
    }
    public void Shev_5()
    {
        GateAddress_Arr.Add(ArchPin_Arr[4]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[4]);
    }
    public void Shev_6()
    {
        GateAddress_Arr.Add(ArchPin_Arr[5]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[5]);
    }
    public void Shev_7()
    {
        GateAddress_Arr.Add(ArchPin_Arr[6]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[6]);
    }
    public void Shev_8()
    {
        GateAddress_Arr.Add(ArchPin_Arr[7]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[7]);
    }
    public void Shev_9()
    {
        GateAddress_Arr.Add(ArchPin_Arr[8]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[8]);
    }
    public void Shev_10()
    {
        GateAddress_Arr.Add(ArchPin_Arr[9]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[9]);
    }
    public void Shev_11()
    {
        GateAddress_Arr.Add(ArchPin_Arr[10]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[10]);
    }
    public void Shev_12()
    {
        GateAddress_Arr.Add(ArchPin_Arr[11]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[11]);
    }
    public void Shev_13()
    {
        GateAddress_Arr.Add(ArchPin_Arr[12]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[12]);
    }
    public void Shev_14()
    {
        GateAddress_Arr.Add(ArchPin_Arr[13]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[13]);
    }
    public void Shev_15()
    {
        GateAddress_Arr.Add(ArchPin_Arr[14]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[14]);
    }
    public void Shev_16()
    {
        GateAddress_Arr.Add(ArchPin_Arr[15]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[15]);
    }
    public void Shev_17()
    {
        GateAddress_Arr.Add(ArchPin_Arr[16]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[16]);
    }
    public void Shev_18()
    {
        GateAddress_Arr.Add(ArchPin_Arr[17]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[17]);
    }
    public void Shev_19()
    {
        GateAddress_Arr.Add(ArchPin_Arr[18]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[18]);
    }
    public void Shev_20()
    {
        GateAddress_Arr.Add(ArchPin_Arr[19]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[19]);
    }
    public void Shev_21()
    {
        GateAddress_Arr.Add(ArchPin_Arr[20]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[20]);
    }
    public void Shev_22()
    {
        GateAddress_Arr.Add(ArchPin_Arr[21]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[21]);
    }
    public void Shev_23()
    {
        GateAddress_Arr.Add(ArchPin_Arr[22]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[22]);
    }
    public void Shev_24()
    {
        GateAddress_Arr.Add(ArchPin_Arr[23]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[23]);
    }
    public void Shev_25()
    {
        GateAddress_Arr.Add(ArchPin_Arr[24]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[24]);
    }
    public void Shev_26()
    {
        GateAddress_Arr.Add(ArchPin_Arr[25]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[25]);
    }
    public void Shev_27()
    {
        GateAddress_Arr.Add(ArchPin_Arr[26]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[26]);
    }
    public void Shev_28()
    {
        GateAddress_Arr.Add(ArchPin_Arr[27]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[27]);
    }
    public void Shev_29()
    {
        GateAddress_Arr.Add(ArchPin_Arr[28]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[28]);
    }
    public void Shev_30()
    {
        GateAddress_Arr.Add(ArchPin_Arr[29]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[29]);
    }
    public void Shev_31()
    {
        GateAddress_Arr.Add(ArchPin_Arr[30]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[30]);
    }
    public void Shev_32()
    {
        GateAddress_Arr.Add(ArchPin_Arr[31]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[31]);
    }
    public void Shev_33()
    {
        GateAddress_Arr.Add(ArchPin_Arr[32]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[32]);
    }
    public void Shev_34()
    {
        GateAddress_Arr.Add(ArchPin_Arr[33]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[33]);
    }
    public void Shev_35()
    {
        GateAddress_Arr.Add(ArchPin_Arr[34]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[34]);
    }
    public void Shev_36()
    {
        GateAddress_Arr.Add(ArchPin_Arr[35]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[35]);
    }

    public void Shev_Add_1()
    {
        GateAddress_Arr.Add(ArchPin_Arr[0]);
        GateAddress_Arr.Add(ArchPin_Arr[1]);
        GateAddress_Arr.Add(ArchPin_Arr[2]);
        GateAddress_Arr.Add(ArchPin_Arr[3]);
        GateAddress_Arr.Add(ArchPin_Arr[4]);
        GateAddress_Arr.Add(ArchPin_Arr[5]);
        GateAddress_Arr.Add(ArchPin_Arr[6]);

        GateAddress_TargetLocations_Arr.Add(Targets_Arr[0]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[1]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[2]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[3]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[4]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[5]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[6]);
    }

    public void Shev_Add_2()
    {
        GateAddress_Arr.Add(ArchPin_Arr[1]);
        GateAddress_Arr.Add(ArchPin_Arr[2]);
        GateAddress_Arr.Add(ArchPin_Arr[3]);
        GateAddress_Arr.Add(ArchPin_Arr[4]);
        GateAddress_Arr.Add(ArchPin_Arr[5]);
        GateAddress_Arr.Add(ArchPin_Arr[6]);
        GateAddress_Arr.Add(ArchPin_Arr[7]);

        GateAddress_TargetLocations_Arr.Add(Targets_Arr[1]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[2]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[3]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[4]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[5]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[6]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[7]);
    }

    public void Shev_Add_3()
    {
        GateAddress_Arr.Add(ArchPin_Arr[29]);
        GateAddress_Arr.Add(ArchPin_Arr[30]);
        GateAddress_Arr.Add(ArchPin_Arr[31]);
        GateAddress_Arr.Add(ArchPin_Arr[32]);
        GateAddress_Arr.Add(ArchPin_Arr[33]);
        GateAddress_Arr.Add(ArchPin_Arr[34]);
        GateAddress_Arr.Add(ArchPin_Arr[35]);

        GateAddress_TargetLocations_Arr.Add(Targets_Arr[29]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[30]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[31]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[32]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[33]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[34]);
        GateAddress_TargetLocations_Arr.Add(Targets_Arr[35]);
    }
}
