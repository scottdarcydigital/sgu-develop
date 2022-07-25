using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnLoadWithDelay : MonoBehaviour
{

    //public GameObject Player;
    //public GameObject PlayerCamera;
    //public GameObject FadeOutCanvas;
    public GameObject VideoPlane;

    // Start is called before the first frame update
    void Awake()
    {
        //FadeOutCanvas = GameObject.FindWithTag("LevelFadeOut");
        //Player = GameObject.FindWithTag("Player");
        //PlayerCamera = GameObject.FindWithTag("MainCamera");
        //PlayerCamera.SetActive(false);
        //Invoke("DestroyPlayer", 2);
    }

    void Start()
    {
        //Invoke("DestroyFadeOut", 0.5f);
        //Invoke("VideoPlaneActive", 0.01f);
    }

    //void DestroyPlayer()
    //{
    //    Destroy(Player);
    //}

    //void DestroyFadeOut()
    //{
    //    Destroy(FadeOutCanvas);
    //}

    //void VideoPlaneActive()
    //{
    //    VideoPlane.SetActive(true);
    //}


}
