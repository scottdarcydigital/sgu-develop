using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThirdPersonMovement : MonoBehaviour
{
    // start kino movement
    public float forwardSpeed = 25.0f;
    public float strifeSpeed = 25.0f;
    public float hoverSpeed = 25.0f;

    public float lookRateSpeed = 90f;
    private Vector2 lookInput, screenCenter, mouseDistance;

    private float activeForwardSpeed;
    private float activeStrifeSpeed;
    private float activeHoverSpeed;

    // accelleration speed
    private float forward_acc = 2.5f, strife_acc = 2f, hover_acc = 2f;
    // end kino movement



    // Script taken from https://www.youtube.com/watch?v=4HpC--2iowE 

    public Transform cam;
    public CharacterController controller;
    public float speed = 6f;

    public float turnSmoothTime = 0.1f;
    float turnSmoothVelocity;

    // Update is called once per frame
    void Update()
    {
        /* PRESERVED BRACKEYS ONLY SCRIPT
        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");

        Vector3 direction = new Vector3(horizontal, 0f, vertical).normalized; 
        
        if (direction.magnitude >= 0.1f)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg + cam.eulerAngles.y;
            float angle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime); 
            transform.rotation = Quaternion.Euler(0f, angle, 0f);

            Vector3 moveDir = Quaternion.Euler(0f, targetAngle, 0f) * Vector3.forward;  // change move direction to the direction the camera is facing
            controller.Move(moveDir.normalized * speed * Time.deltaTime);
        }
        */

        /* PRESERVED KINO MOVE SCRIPT

        activeForwardSpeed = Mathf.Lerp(activeForwardSpeed, Input.GetAxisRaw("Vertical") * forwardSpeed, forward_acc * Time.deltaTime);
        activeStrifeSpeed = Mathf.Lerp(activeStrifeSpeed, Input.GetAxisRaw("Horizontal") * strifeSpeed, strife_acc * Time.deltaTime);
        activeHoverSpeed = Mathf.Lerp(activeHoverSpeed, Input.GetAxisRaw("Hover") * hoverSpeed, hover_acc * Time.deltaTime);

        transform.position += transform.forward * activeForwardSpeed * Time.deltaTime; 
        transform.position += transform.right * activeStrifeSpeed * Time.deltaTime; 
        transform.position += transform.up * activeHoverSpeed * Time.deltaTime; 
        */

        // HYBRID SCRIPT
        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");

        Vector3 direction = new Vector3(horizontal, 0f, vertical).normalized;

        
        if (direction.magnitude >= 0.1f)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg + cam.eulerAngles.y;
            float angle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime);
            transform.rotation = Quaternion.Euler(0f, angle, 0f);

            Vector3 moveDir = Quaternion.Euler(0f, targetAngle, 0f) * Vector3.forward;  // change move direction to the direction the camera is facing
            controller.Move(moveDir.normalized * speed * Time.deltaTime);
        }


    }
}
