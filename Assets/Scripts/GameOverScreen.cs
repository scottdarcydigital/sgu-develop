using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

public class GameOverScreen : MonoBehaviour
{

    public Button Retry_Button;
    public string StartingLevel;

    // Start is called before the first frame update
    void Start()
    {
        Retry_Button.onClick.AddListener(RetryLevel);
        Cursor.visible = true;
        Cursor.lockState = CursorLockMode.None;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void RetryLevel()
    {
        Application.LoadLevel(StartingLevel);

    }
}
