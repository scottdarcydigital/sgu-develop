using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RadioConversations : MonoBehaviour
{

    public List<AudioClip> audioClips;
    public AudioSource audioSource;

    public AudioSource DangerTrack;
    public AudioSource AlarmTrack;

    public float DangerTrackVolume_high;
    public float AlarmTrackVolume_high;
    public float DangerTrackVolume_low;
    public float AlarmTrackVolume_low;

    // Start is called before the first frame update
    void Start()
    {
        DangerTrack.volume = DangerTrackVolume_high;
        AlarmTrack.volume = AlarmTrackVolume_high;
        audioSource = this.gameObject.GetComponent<AudioSource>();
        //int r = Random.Range(0, audioClips.Count);
        //audioSource.clip = audioClips[0];
        //audioSource.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (this.audioSource.isPlaying)
        {
            Debug.Log("CLIP Playing");
            DangerTrack.volume = DangerTrackVolume_low;
            AlarmTrack.volume = AlarmTrackVolume_low;
        }
        if (!this.audioSource.isPlaying)
        {
            Debug.Log("CLIP Finished");
            DangerTrack.volume = DangerTrackVolume_high;
            AlarmTrack.volume = AlarmTrackVolume_high;
        }
    }
}
