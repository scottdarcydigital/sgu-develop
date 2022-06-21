using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayVideo : MonoBehaviour
{
    public GameObject KinoCanvas_1;

    // Start is called before the first frame update
    void Start()
    {
        GameObject camera = GameObject.Find("Main Camera");
        var videoPlayer = camera.AddComponent<UnityEngine.Video.VideoPlayer>();
       // videoPlayer.playOnAwake = false;
       // videoPlayer.renderMode = UnityEngine.Video.VideoRenderMode.CameraNearPlane;
       // videoPlayer.targetCameraAlpha = 0.5F;
        // videoPlayer.url = "/Users/graham/movie.mov";
        // videoPlayer.url = "D:/Unity Projects/HDPRSandbox/SGU2020HDRP_Refactoring_120221/Assets/KinoVideos/Kino 04 - The Stargate Room.avi";
       // videoPlayer.frame = 100;
       // videoPlayer.isLooping = true;
       // videoPlayer.loopPointReached += EndReached;
        videoPlayer.Play();
    }

    void EndReached(UnityEngine.Video.VideoPlayer vp)
    {
        vp.playbackSpeed = vp.playbackSpeed / 10.0F;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
