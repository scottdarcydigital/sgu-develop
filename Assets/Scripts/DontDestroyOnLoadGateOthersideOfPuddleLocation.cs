﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class DontDestroyOnLoadGateOthersideOfPuddleLocation : MonoBehaviour
{
    public static DontDestroyOnLoadGateOthersideOfPuddleLocation Instance;

    // Start is called before the first frame update
    void Start()
    {
        
        if(Instance != null)
        {
            Destroy(this.gameObject);
            return;
        }

        Instance = this;
        
        DontDestroyOnLoad(this.gameObject);

    }

    // Update is called once per frame
    void Update()
    {
    }
}