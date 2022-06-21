using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class DontDestroyOnLoadPinCollider : MonoBehaviour
{
    public static DontDestroyOnLoadPinCollider Instance;

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
