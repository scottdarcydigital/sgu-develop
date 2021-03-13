using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AccelerationTest : MonoBehaviour
{
    private float activeForwardSpeed;
    public float forwardSpeed = 400.0f;
    public float forward_acc = 2.0f;
    public bool shouldSpin = false;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (shouldSpin)
        {
            spinAcc();
        } else
        {
            spinDec();
        }
      
        // transform.Rotate(Vector3.left * (xSpeed * Time.deltaTime));
        if (Input.GetKeyDown(KeyCode.J))
        {
            shouldSpin = true;
        }

        if (Input.GetKeyDown(KeyCode.H))
        {
            shouldSpin = false;
        }


    }

    public void spinAcc()
    {
        activeForwardSpeed = Mathf.Lerp(activeForwardSpeed, 1.0f * forwardSpeed, forward_acc * Time.deltaTime);
        transform.Rotate(Vector3.left * (activeForwardSpeed * Time.deltaTime));
    }

    public void spinDec()
    {
        activeForwardSpeed = Mathf.Lerp(activeForwardSpeed, 0.0f, forward_acc * Time.deltaTime);
        transform.Rotate(Vector3.left * (activeForwardSpeed * Time.deltaTime));
    }
}
