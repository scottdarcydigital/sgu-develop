using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialDate_Interface : MonoBehaviour
{
    [SerializeField] public GameObject consoleMenuUI;
    [SerializeField] public GameObject KinoMenuUI;
    [SerializeField] public GameObject remoteMenuUI;
   // [SerializeField] private GameObject eventHorizon;
    [SerializeField] public bool isShowingUI;

    // EXTERNAL REFERENCES

    public Button sym_1;
    public Button sym_2;
    public Button sym_3;
    public Button sym_4;
    public Button sym_5;
    public Button sym_6;
    public Button sym_7;
    public Button sym_8;
    public Button sym_9;
    public Button sym_10;
    public Button sym_11;
    public Button sym_12;
    public Button sym_13;
    public Button sym_14;
    public Button sym_15;
    public Button sym_16;
    public Button sym_17;
    public Button sym_18;
    public Button sym_19;
    public Button sym_20;
    public Button sym_21;
    public Button sym_22;
    public Button sym_23;
    public Button sym_24;
    public Button sym_25;
    public Button sym_26;
    public Button sym_27;
    public Button sym_28;
    public Button sym_29;
    public Button sym_30;
    public Button sym_31;
    public Button sym_32;
    public Button sym_33;
    public Button sym_34;
    public Button sym_35;
    public Button sym_36;

    // Full address buttons
    public Button Add_1;
    public Button Add_2;
    public Button Add_3;

    //public Button VideoButton_1;

    private DialGate Shev_1;
    private DialGate Shev_2;
    private DialGate Shev_3;
    private DialGate Shev_4;
    private DialGate Shev_5;
    private DialGate Shev_6;
    private DialGate Shev_7;
    private DialGate Shev_8;
    private DialGate Shev_9;
    private DialGate Shev_10;
    private DialGate Shev_11;
    private DialGate Shev_12;
    private DialGate Shev_13;
    private DialGate Shev_14;
    private DialGate Shev_15;
    private DialGate Shev_16;
    private DialGate Shev_17;
    private DialGate Shev_18;
    private DialGate Shev_19;
    private DialGate Shev_20;
    private DialGate Shev_21;
    private DialGate Shev_22;
    private DialGate Shev_23;
    private DialGate Shev_24;
    private DialGate Shev_25;
    private DialGate Shev_26;
    private DialGate Shev_27;
    private DialGate Shev_28;
    private DialGate Shev_29;
    private DialGate Shev_30;
    private DialGate Shev_31;
    private DialGate Shev_32;
    private DialGate Shev_33;
    private DialGate Shev_34;
    private DialGate Shev_35;
    private DialGate Shev_36;

    private DialGate Shev_Add_1;
    private DialGate Shev_Add_2;
    private DialGate Shev_Add_3;

    private KinoFootage Playkino_1;

    private DialGate disableButtons;


    // Start is called before the first frame update
    public void Start()
    {
        Debug.Log("START_DGINT");
        Shev_1 = FindObjectOfType<DialGate>();
        Shev_2 = FindObjectOfType<DialGate>();
        Shev_3 = FindObjectOfType<DialGate>();
        Shev_4 = FindObjectOfType<DialGate>();
        Shev_5 = FindObjectOfType<DialGate>();
        Shev_6 = FindObjectOfType<DialGate>();
        Shev_7 = FindObjectOfType<DialGate>();
        Shev_8 = FindObjectOfType<DialGate>();
        Shev_9 = FindObjectOfType<DialGate>();
        Shev_10 = FindObjectOfType<DialGate>();
        Shev_11 = FindObjectOfType<DialGate>();
        Shev_12 = FindObjectOfType<DialGate>();
        Shev_13 = FindObjectOfType<DialGate>();
        Shev_14 = FindObjectOfType<DialGate>();
        Shev_15 = FindObjectOfType<DialGate>();
        Shev_16 = FindObjectOfType<DialGate>();
        Shev_17 = FindObjectOfType<DialGate>();
        Shev_18 = FindObjectOfType<DialGate>();
        Shev_19 = FindObjectOfType<DialGate>();
        Shev_20 = FindObjectOfType<DialGate>();
        Shev_21 = FindObjectOfType<DialGate>();
        Shev_22 = FindObjectOfType<DialGate>();
        Shev_23 = FindObjectOfType<DialGate>();
        Shev_24 = FindObjectOfType<DialGate>();
        Shev_25 = FindObjectOfType<DialGate>();
        Shev_26 = FindObjectOfType<DialGate>();
        Shev_27 = FindObjectOfType<DialGate>();
        Shev_28 = FindObjectOfType<DialGate>();
        Shev_29 = FindObjectOfType<DialGate>();
        Shev_30 = FindObjectOfType<DialGate>();
        Shev_31 = FindObjectOfType<DialGate>();
        Shev_32 = FindObjectOfType<DialGate>();
        Shev_33 = FindObjectOfType<DialGate>();
        Shev_34 = FindObjectOfType<DialGate>();
        Shev_35 = FindObjectOfType<DialGate>();
        Shev_36 = FindObjectOfType<DialGate>();

        Shev_Add_1 = FindObjectOfType<DialGate>();
        Shev_Add_2 = FindObjectOfType<DialGate>();
        Shev_Add_3 = FindObjectOfType<DialGate>();

        Playkino_1 = FindObjectOfType<KinoFootage>();

        sym_1.onClick.AddListener(SymbolButton_1);
        sym_2.onClick.AddListener(SymbolButton_2);
        sym_3.onClick.AddListener(SymbolButton_3);
        sym_4.onClick.AddListener(SymbolButton_4);
        sym_5.onClick.AddListener(SymbolButton_5);
        sym_6.onClick.AddListener(SymbolButton_6);
        sym_7.onClick.AddListener(SymbolButton_7);
        sym_8.onClick.AddListener(SymbolButton_8);
        sym_9.onClick.AddListener(SymbolButton_9);
        sym_10.onClick.AddListener(SymbolButton_10);
        sym_11.onClick.AddListener(SymbolButton_11);
        sym_12.onClick.AddListener(SymbolButton_12);
        sym_13.onClick.AddListener(SymbolButton_13);
        sym_14.onClick.AddListener(SymbolButton_14);
        sym_15.onClick.AddListener(SymbolButton_15);
        sym_16.onClick.AddListener(SymbolButton_16);
        sym_17.onClick.AddListener(SymbolButton_17);
        sym_18.onClick.AddListener(SymbolButton_18);
        sym_19.onClick.AddListener(SymbolButton_19);
        sym_20.onClick.AddListener(SymbolButton_20);
        sym_21.onClick.AddListener(SymbolButton_21);
        sym_22.onClick.AddListener(SymbolButton_22);
        sym_23.onClick.AddListener(SymbolButton_23);
        sym_24.onClick.AddListener(SymbolButton_24);
        sym_25.onClick.AddListener(SymbolButton_25);
        sym_26.onClick.AddListener(SymbolButton_26);
        sym_27.onClick.AddListener(SymbolButton_27);
        sym_28.onClick.AddListener(SymbolButton_28);
        sym_29.onClick.AddListener(SymbolButton_29);
        sym_30.onClick.AddListener(SymbolButton_30);
        sym_31.onClick.AddListener(SymbolButton_31);
        sym_32.onClick.AddListener(SymbolButton_32);
        sym_33.onClick.AddListener(SymbolButton_33);
        sym_34.onClick.AddListener(SymbolButton_34);
        sym_35.onClick.AddListener(SymbolButton_35);
        sym_36.onClick.AddListener(SymbolButton_36);

        Add_1.onClick.AddListener(AddButton_1);
        Add_2.onClick.AddListener(AddButton_2);
        Add_3.onClick.AddListener(AddButton_3);

        //VideoButton_1.onClick.AddListener(PlayKinoVideo_1);  

        // If the gate is active from the player coming through it, disabled the UI buttons
        // if (eventHorizon.activeSelf)
        //  {
        //      sym_1.interactable = false;
        // }

    }

    public void SymbolButton_1()
    {
        Debug.Log("BUTTON 1 PRESSED");
        Shev_1.Shev_1();
        LastSceneLoaded.sym_1 = false;
        ColorBlock colorVar = sym_1.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_1.colors = colorVar;
        sym_1.interactable = false;
    }
    public void SymbolButton_2()
    {
        Debug.Log("BUTTON 2 PRESSED");
        Shev_2.Shev_2();
        LastSceneLoaded.sym_2 = false;
        ColorBlock colorVar = sym_2.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_2.colors = colorVar;
        sym_2.interactable = false;
    }
    public void SymbolButton_3()
    {
        Debug.Log("BUTTON 3 PRESSED");
        Shev_3.Shev_3();
        LastSceneLoaded.sym_3 = false;
        ColorBlock colorVar = sym_3.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_3.colors = colorVar;
        sym_3.interactable = false;
    }
    public void SymbolButton_4()
    {
        Debug.Log("BUTTON 4 PRESSED");
        Shev_4.Shev_4();
        LastSceneLoaded.sym_4 = false;
        ColorBlock colorVar = sym_4.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_4.colors = colorVar;
        sym_4.interactable = false;
    }
    public void SymbolButton_5()
    {
        Debug.Log("BUTTON 5 PRESSED");
        Shev_5.Shev_5();
        LastSceneLoaded.sym_5 = false;
        ColorBlock colorVar = sym_5.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_5.colors = colorVar;
        sym_5.interactable = false;
    }
    public void SymbolButton_6()
    {
        Debug.Log("BUTTON 6 PRESSED");
        Shev_6.Shev_6();
        LastSceneLoaded.sym_6 = false;
        ColorBlock colorVar = sym_6.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_6.colors = colorVar;
        sym_6.interactable = false;
    }
    public void SymbolButton_7()
    {
        Debug.Log("BUTTON 7 PRESSED");
        Shev_7.Shev_7();
        LastSceneLoaded.sym_7 = false;
        ColorBlock colorVar = sym_7.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_7.colors = colorVar;
        sym_7.interactable = false;
    }
    public void SymbolButton_8()
    {
        Debug.Log("BUTTON 8 PRESSED");
        Shev_8.Shev_8();
        LastSceneLoaded.sym_8 = false;
        ColorBlock colorVar = sym_8.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_8.colors = colorVar;
        sym_8.interactable = false;
    }
    public void SymbolButton_9()
    {
        Debug.Log("BUTTON 9 PRESSED");
        Shev_9.Shev_9();
        LastSceneLoaded.sym_9 = false;
        ColorBlock colorVar = sym_9.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_9.colors = colorVar;
        sym_9.interactable = false;
    }
    public void SymbolButton_10()
    {
        Debug.Log("BUTTON 10 PRESSED");
        Shev_10.Shev_10();
        LastSceneLoaded.sym_10 = false;
        ColorBlock colorVar = sym_10.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_10.colors = colorVar;
        sym_10.interactable = false;
    }
    public void SymbolButton_11()
    {
        Debug.Log("BUTTON 11 PRESSED");
        Shev_11.Shev_11();
        LastSceneLoaded.sym_11 = false;
        ColorBlock colorVar = sym_11.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_11.colors = colorVar;
        sym_11.interactable = false;
    }
    public void SymbolButton_12()
    {
        Debug.Log("BUTTON 12 PRESSED");
        Shev_12.Shev_12();
        LastSceneLoaded.sym_12 = false;
        ColorBlock colorVar = sym_12.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_12.colors = colorVar;
        sym_12.interactable = false;
    }
    public void SymbolButton_13()
    {
        Debug.Log("BUTTON 13 PRESSED");
        Shev_13.Shev_13();
        LastSceneLoaded.sym_13 = false;
        ColorBlock colorVar = sym_13.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_13.colors = colorVar;
        sym_13.interactable = false;
    }
    public void SymbolButton_14()
    {
        Debug.Log("BUTTON 14 PRESSED");
        Shev_14.Shev_14();
        LastSceneLoaded.sym_14 = false;
        ColorBlock colorVar = sym_14.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_14.colors = colorVar;
        sym_14.interactable = false;
    }
    public void SymbolButton_15()
    {
        Debug.Log("BUTTON 15 PRESSED");
        Shev_15.Shev_15();
        LastSceneLoaded.sym_15 = false;
        ColorBlock colorVar = sym_15.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_15.colors = colorVar;
        sym_15.interactable = false;
    }
    public void SymbolButton_16()
    {
        Debug.Log("BUTTON 16 PRESSED");
        Shev_16.Shev_16();
        LastSceneLoaded.sym_16 = false;
        ColorBlock colorVar = sym_16.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_16.colors = colorVar;
        sym_16.interactable = false;
    }
    public void SymbolButton_17()
    {
        Debug.Log("BUTTON 17 PRESSED");
        Shev_17.Shev_17();
        LastSceneLoaded.sym_17 = false;
        ColorBlock colorVar = sym_17.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_17.colors = colorVar;
        sym_17.interactable = false;
    }
    public void SymbolButton_18()
    {
        Debug.Log("BUTTON 18 PRESSED");
        Shev_18.Shev_18();
        LastSceneLoaded.sym_18 = false;
        ColorBlock colorVar = sym_18.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_18.colors = colorVar;
        sym_18.interactable = false;
    }
    public void SymbolButton_19()
    {
        Debug.Log("BUTTON 19 PRESSED");
        Shev_19.Shev_19();
        LastSceneLoaded.sym_19 = false;
        ColorBlock colorVar = sym_19.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_19.colors = colorVar;
        sym_19.interactable = false;
    }
    public void SymbolButton_20()
    {
        Debug.Log("BUTTON 20 PRESSED");
        Shev_20.Shev_20();
        LastSceneLoaded.sym_20 = false;
        ColorBlock colorVar = sym_20.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_20.colors = colorVar;
        sym_20.interactable = false;
    }
    public void SymbolButton_21()
    {
        Debug.Log("BUTTON 21 PRESSED");
        Shev_21.Shev_21();
        LastSceneLoaded.sym_21 = false;
        ColorBlock colorVar = sym_21.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_21.colors = colorVar;
        sym_21.interactable = false;
    }
    public void SymbolButton_22()
    {
        Debug.Log("BUTTON 22 PRESSED");
        Shev_22.Shev_22();
        LastSceneLoaded.sym_22 = false;
        ColorBlock colorVar = sym_22.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_22.colors = colorVar;
        sym_22.interactable = false;
    }
    public void SymbolButton_23()
    {
        Debug.Log("BUTTON 23 PRESSED");
        Shev_23.Shev_23();
        LastSceneLoaded.sym_23 = false;
        ColorBlock colorVar = sym_23.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_23.colors = colorVar;
        sym_23.interactable = false;
    }
    public void SymbolButton_24()
    {
        Debug.Log("BUTTON 24 PRESSED");
        Shev_24.Shev_24();
        LastSceneLoaded.sym_24 = false;
        ColorBlock colorVar = sym_24.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_24.colors = colorVar;
        sym_24.interactable = false;
    }
    public void SymbolButton_25()
    {
        Debug.Log("BUTTON 25 PRESSED");
        Shev_25.Shev_25();
        LastSceneLoaded.sym_25 = false;
        ColorBlock colorVar = sym_25.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_25.colors = colorVar;
        sym_25.interactable = false;
    }
    public void SymbolButton_26()
    {
        Debug.Log("BUTTON 26 PRESSED");
        Shev_26.Shev_26();
        LastSceneLoaded.sym_26 = false;
        ColorBlock colorVar = sym_26.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_26.colors = colorVar;
        sym_26.interactable = false;
    }
    public void SymbolButton_27()
    {
        Debug.Log("BUTTON 27 PRESSED");
        Shev_27.Shev_27();
        LastSceneLoaded.sym_27 = false;
        ColorBlock colorVar = sym_27.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_27.colors = colorVar;
        sym_27.interactable = false;
    }
    public void SymbolButton_28()
    {
        Debug.Log("BUTTON 28 PRESSED");
        Shev_28.Shev_28();
        LastSceneLoaded.sym_28 = false;
        ColorBlock colorVar = sym_28.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_28.colors = colorVar;
        sym_28.interactable = false;
    }
    public void SymbolButton_29()
    {
        Debug.Log("BUTTON 29 PRESSED");
        Shev_29.Shev_29();
        LastSceneLoaded.sym_29 = false;
        ColorBlock colorVar = sym_29.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_29.colors = colorVar;
        sym_29.interactable = false;
    }
    public void SymbolButton_30()
    {
        Debug.Log("BUTTON 30 PRESSED");
        Shev_30.Shev_30();
        LastSceneLoaded.sym_30 = false;
        ColorBlock colorVar = sym_30.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_30.colors = colorVar;
        sym_30.interactable = false;
    }
    public void SymbolButton_31()
    {
        Debug.Log("BUTTON 31 PRESSED");
        Shev_31.Shev_31();
        LastSceneLoaded.sym_31 = false;
        ColorBlock colorVar = sym_31.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_31.colors = colorVar;
        sym_31.interactable = false;
    }
    public void SymbolButton_32()
    {
        Debug.Log("BUTTON 32 PRESSED");
        Shev_32.Shev_32();
        LastSceneLoaded.sym_32 = false;
        ColorBlock colorVar = sym_32.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_32.colors = colorVar;
        sym_32.interactable = false;
    }
    public void SymbolButton_33()
    {
        Debug.Log("BUTTON 33 PRESSED");
        Shev_33.Shev_33();
        LastSceneLoaded.sym_33 = false;
        ColorBlock colorVar = sym_33.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_33.colors = colorVar;
        sym_33.interactable = false;
    }
    public void SymbolButton_34()
    {
        Debug.Log("BUTTON 34 PRESSED");
        Shev_34.Shev_34();
        LastSceneLoaded.sym_34 = false;
        ColorBlock colorVar = sym_34.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_34.colors = colorVar;
        sym_34.interactable = false;
    }
    public void SymbolButton_35()
    {
        Debug.Log("BUTTON 35 PRESSED");
        Shev_35.Shev_35();
        LastSceneLoaded.sym_35 = false;
        ColorBlock colorVar = sym_35.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_35.colors = colorVar;
        sym_35.interactable = false;
    }
    public void SymbolButton_36()
    {
        Debug.Log("BUTTON 36 PRESSED");
        Shev_36.Shev_36();
        LastSceneLoaded.sym_36 = false;
        ColorBlock colorVar = sym_36.colors;
        colorVar.disabledColor = new Color(0, 255, 255, 0.8f);
        sym_36.colors = colorVar;
        sym_36.interactable = false;
    }

    public void AddButton_1()
    {
        Debug.Log("BUTTON ADD 1 PRESSED");
        Shev_Add_1.Shev_Add_1();
    }

    public void AddButton_2()
    {
        Debug.Log("BUTTON ADD 2 PRESSED");
        Shev_Add_2.Shev_Add_2();
    }

    public void AddButton_3()
    {
        Debug.Log("BUTTON ADD 3 PRESSED");
        Shev_Add_3.Shev_Add_3();
    }

    public void ShowUI()
    {
        Debug.Log("UI OPEB YO");
        Time.timeScale = 0f;
        consoleMenuUI.SetActive(true);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }

    public void HideUI()
    {
        Time.timeScale = 1f;
        consoleMenuUI.SetActive(false);
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }

    public void PlayKinoVideo_1()
    {
        Playkino_1.PlayKinoVideo_1();
    }

    public void ShowKinoUI()
    {
        Debug.Log("UI OPEB YO");
        Time.timeScale = 0f;
        KinoMenuUI.SetActive(true);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }

    public void HideKinoUI()
    {
        Time.timeScale = 1f;
        KinoMenuUI.SetActive(false);
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;
    }




}
