using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class KinoPlayVideo : MonoBehaviour
{
    public bool isInRange = false;
    public GameObject Player;
    public GameObject FadeOut;
    public Animator FadeOutAnimator;
    public float fadeOutChangeSceneWaitTime;
    public string CutSceneLevelName;
    public bool change;

    void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            isInRange = true;
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            isInRange = false;
        }
    }

    void changeScene()
    {
        SceneManager.LoadScene(CutSceneLevelName);
    }
    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            if (isInRange)
            {
                // Play video
                Debug.Log("You should now play the video!");

                // Freeze player movement
                Player.GetComponent<Rigidbody>().isKinematic = true;

                // Disable dont destroy on load script
                Player.GetComponent<DontDestroyOnLoadPlayer>().enabled = false;

                // Trigger animation fade out
                FadeOut.SetActive(true);

                Invoke("changeScene", fadeOutChangeSceneWaitTime);

            }
        }
        else { return; }
    }

}
