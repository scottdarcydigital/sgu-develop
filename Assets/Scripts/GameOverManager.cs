using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameOverManager : MonoBehaviour
{
    public bool GameOverState = false;

    public GameObject Player;

    void Update()
    {
        if (GameOverState)
        {
            Debug.Log("game is over");
            ShowGameOverScreen();
        }    
    }

    public void ShowGameOverScreen()
    {
        
        Application.LoadLevel("GameOverScreen");
    }
}
