using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LastSceneLoaded : MonoBehaviour
{
    public static string previousLocation = "null";
    public static string AttemptingToDialLocation = "null";
    
    public static bool sym_1 = true;
    public static bool sym_2 = true;
    public static bool sym_3 = true;
    public static bool sym_4 = true;
    public static bool sym_5 = true;
    public static bool sym_6 = true;
    public static bool sym_7 = true;
    public static bool sym_8 = true;
    public static bool sym_9 = true;
    public static bool sym_10 = true;
    public static bool sym_11 = true;
    public static bool sym_12 = true;
    public static bool sym_13 = true;
    public static bool sym_14 = true;
    public static bool sym_15 = true;
    public static bool sym_16 = true;
    public static bool sym_17 = true;
    public static bool sym_18 = true;
    public static bool sym_19 = true;
    public static bool sym_20 = true;
    public static bool sym_21 = true;
    public static bool sym_22 = true;
    public static bool sym_23 = true;
    public static bool sym_24 = true;
    public static bool sym_25 = true;
    public static bool sym_26 = true;
    public static bool sym_27 = true;
    public static bool sym_28 = true;
    public static bool sym_29 = true;
    public static bool sym_30 = true;
    public static bool sym_31 = true;
    public static bool sym_32 = true;
    public static bool sym_33 = true;
    public static bool sym_34 = true;
    public static bool sym_35 = true;
    public static bool sym_36 = true;

    // figure out if the kino has a different location to the default one at the eventhorizon (first arrival)
    public static bool Add1_KinoSavedLoc = false;

    // save a global location of the kino between gate travel
    public static float Add1_kinoLastKnownLocationX;
    public static float Add1_kinoLastKnownLocationY;
    public static float Add1_kinoLastKnownLocationZ;

    // figure out if the kino has a different location to the default one at the eventhorizon (first arrival)
    public static bool Add2_KinoSavedLoc = false;

    // save a global location of the kino between gate travel
    public static float Add2_kinoLastKnownLocationX;
    public static float Add2_kinoLastKnownLocationY;
    public static float Add2_kinoLastKnownLocationZ;

    // figure out if the kino has a different location to the default one at the eventhorizon (first arrival)
    public static bool GATEROOM_KinoSavedLoc = false;

    // save a global location of the kino between gate travel
    public static float GATEROOM_kinoLastKnownLocationX;
    public static float GATEROOM_kinoLastKnownLocationY;
    public static float GATEROOM_kinoLastKnownLocationZ;


    // ****************************************

    public static string KinoPrev_Location = "null";
    public static string KinoCurr_Location = "null";
    public static string PlayerPrev_Location = "null";
    public static string PlayerCurr_Location = "null";

    public static bool Player_Active = false;
    public static bool Kino_Active = false;

    // if the kino just travelled through the gate, then reset its position...
    public static bool kinoJustTravelledThroughGate = false;

    // for when the level initially starts...
    public static bool Level_initial_Load = false;

    public static void Log()
    {
        Debug.Log("2602 KinoPrev_Location : " + KinoPrev_Location);
        Debug.Log("2602 KinoCurr_Location : " + KinoCurr_Location);
        Debug.Log("2602 PlayerPrev_Location : " + PlayerPrev_Location);
        Debug.Log("2602 PlayerCurr_Location : " + PlayerCurr_Location);
        Debug.Log("2602 Player_Active : " + Player_Active);
        Debug.Log("Kino_Active : " + Kino_Active);
    }









    public static string PreviousLocation
    {
        get
        {
            return previousLocation;
        }

        set
        {
            previousLocation = value;
        }
    }

    // keep and update list to include sym_x buttons
    // in other scripts clear and then update these lists when the gate is shut down 
    public static bool Sym_1
    {
        get
        {
            return sym_1;
        }

        set
        {
            sym_1 = value;
        }
    }
    public static bool Sym_2
    {
        get
        {
            return sym_2;
        }

        set
        {
            sym_2 = value;
        }
    }
    public static bool Sym_3
    {
        get
        {
            return sym_3;
        }

        set
        {
            sym_3 = value;
        }
    }
    public static bool Sym_4
    {
        get
        {
            return sym_4;
        }

        set
        {
            sym_4 = value;
        }
    }
    public static bool Sym_5
    {
        get
        {
            return sym_5;
        }

        set
        {
            sym_5 = value;
        }
    }
    public static bool Sym_6
    {
        get
        {
            return sym_6;
        }

        set
        {
            sym_6 = value;
        }
    }
    public static bool Sym_7
    {
        get
        {
            return sym_7;
        }

        set
        {
            sym_7 = value;
        }
    }
    public static bool Sym_8
    {
        get
        {
            return sym_8;
        }

        set
        {
            sym_8 = value;
        }
    }
    public static bool Sym_9
    {
        get
        {
            return sym_9;
        }

        set
        {
            sym_9 = value;
        }
    }
    public static bool Sym_10
    {
        get
        {
            return sym_10;
        }

        set
        {
            sym_10 = value;
        }
    }
    public static bool Sym_11
    {
        get
        {
            return sym_11;
        }

        set
        {
            sym_11 = value;
        }
    }
    public static bool Sym_12
    {
        get
        {
            return sym_12;
        }

        set
        {
            sym_12 = value;
        }
    }
    public static bool Sym_13
    {
        get
        {
            return sym_13;
        }

        set
        {
            sym_13 = value;
        }
    }
    public static bool Sym_14
    {
        get
        {
            return sym_14;
        }

        set
        {
            sym_14 = value;
        }
    }
    public static bool Sym_15
    {
        get
        {
            return sym_15;
        }

        set
        {
            sym_15 = value;
        }
    }
    public static bool Sym_16
    {
        get
        {
            return sym_16;
        }

        set
        {
            sym_16 = value;
        }
    }
    public static bool Sym_17
    {
        get
        {
            return sym_17;
        }

        set
        {
            sym_17 = value;
        }
    }
    public static bool Sym_18
    {
        get
        {
            return sym_18;
        }

        set
        {
            sym_18 = value;
        }
    }
    public static bool Sym_19
    {
        get
        {
            return sym_19;
        }

        set
        {
            sym_19 = value;
        }
    }
    public static bool Sym_20
    {
        get
        {
            return sym_20;
        }

        set
        {
            sym_20 = value;
        }
    }
    public static bool Sym_21
    {
        get
        {
            return sym_21;
        }

        set
        {
            sym_21 = value;
        }
    }
    public static bool Sym_22
    {
        get
        {
            return sym_22;
        }

        set
        {
            sym_22 = value;
        }
    }
    public static bool Sym_23
    {
        get
        {
            return sym_23;
        }

        set
        {
            sym_23 = value;
        }
    }
    public static bool Sym_24
    {
        get
        {
            return sym_24;
        }

        set
        {
            sym_24 = value;
        }
    }
    public static bool Sym_25
    {
        get
        {
            return sym_25;
        }

        set
        {
            sym_25 = value;
        }
    }
    public static bool Sym_26
    {
        get
        {
            return sym_26;
        }

        set
        {
            sym_26 = value;
        }
    }
    public static bool Sym_27
    {
        get
        {
            return sym_27;
        }

        set
        {
            sym_27 = value;
        }
    }
    public static bool Sym_28
    {
        get
        {
            return sym_28;
        }

        set
        {
            sym_28 = value;
        }
    }
    public static bool Sym_29
    {
        get
        {
            return sym_29;
        }

        set
        {
            sym_29 = value;
        }
    }
    public static bool Sym_30
    {
        get
        {
            return sym_30;
        }

        set
        {
            sym_30 = value;
        }
    }
    public static bool Sym_31
    {
        get
        {
            return sym_31;
        }

        set
        {
            sym_31 = value;
        }
    }
    public static bool Sym_32
    {
        get
        {
            return sym_32;
        }

        set
        {
            sym_32 = value;
        }
    }
    public static bool Sym_33
    {
        get
        {
            return sym_33;
        }

        set
        {
            sym_33 = value;
        }
    }
    public static bool Sym_34
    {
        get
        {
            return sym_34;
        }

        set
        {
            sym_34 = value;
        }
    }
    public static bool Sym_35
    {
        get
        {
            return sym_35;
        }

        set
        {
            sym_35 = value;
        }
    }
    public static bool Sym_36
    {
        get
        {
            return sym_36;
        }

        set
        {
            sym_36 = value;
        }
    }

}
