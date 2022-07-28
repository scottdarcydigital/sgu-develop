using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnLoadWithDelay : MonoBehaviour
{

    public GameObject Player;
    public GameObject PlayerCamera;
    public GameObject FadeOutCanvas;
    public GameObject FadeInCanvas;
    public GameObject VideoPlane;

    // Start is called before the first frame update
    void Awake()
    {
        FadeOutCanvas = GameObject.FindWithTag("LevelFadeOut");
        Player = GameObject.FindWithTag("Player");
        PlayerCamera = GameObject.FindWithTag("MainCamera");
        PlayerCamera.SetActive(false);
        Invoke("DestroyPlayer", 1.0f);
    }

    void Start()
    {
        Invoke("DestroyFadeOut", 1.0f);
        //Invoke("DestroyFadeIn", 2.5f);
        //Invoke("VideoPlaneActive", 1.5f);
    }

    void DestroyPlayer()
    {
        Destroy(Player);
    }

    void DestroyFadeOut()
    {
        Destroy(FadeOutCanvas);
    }

    //void DestroyFadeIn()
    //{
    //    Destroy(FadeInCanvas);
    //}

    //void VideoPlaneActive()
    //{
    //    VideoPlane.SetActive(true);
    //}


}
