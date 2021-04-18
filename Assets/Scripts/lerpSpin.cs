using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lerpSpin : MonoBehaviour
{

    public float minimum;
    public float maximum;
    static float t = 0.0f;
    public float speed = 0.0f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Rotate(Vector3.left * speed);
        t += 0.5f * Time.deltaTime;
        speed = Mathf.Lerp(minimum, maximum, t);
        
        if (t > 1.0f)
        {
            float temp = maximum;
            maximum = minimum;
            minimum = temp;
            t = 0.0f;

            //maximum = 2.0f;
            //t = 0.0f;
            Debug.Log("HIT");
        }

        Debug.Log(maximum + " : MAX");
        Debug.Log(t + " : MAX");

        // x = Mathf.Lerp(x, maxSpeed, Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed);

    }
}
