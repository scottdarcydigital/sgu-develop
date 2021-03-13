using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KinoController : MonoBehaviour
{
    public Transform cam;
    public CharacterController controller;
    public GameObject Player;

    private KinoArrival SaveKinoLocation;

    public float forwardSpeed = 25.0f;
    public float strifeSpeed = 25.0f;
    public float hoverSpeed = 25.0f;

    public float speed = 6f;
    public float turnSmoothTime = 0.1f;
    float turnSmoothVelocity;

    public float lookRateSpeed = 90f;
    private Vector2 lookInput, screenCenter, mouseDistance;

    private float activeForwardSpeed;
    private float activeStrifeSpeed;
    private float activeHoverSpeed;



    // accelleration speed
    private float forward_acc = 2.5f, strife_acc = 2f, hover_acc = 2f;


    // Start is called before the first frame update
    void Start()
    {
        SaveKinoLocation = FindObjectOfType<KinoArrival>();
    }

    // Update is called once per frame
    void Update()
    {

       

        float horizontal = Input.GetAxisRaw("Horizontal");
        float vertical = Input.GetAxisRaw("Vertical");

        Vector3 direction = new Vector3(horizontal, 0f, vertical).normalized;

        if (direction.magnitude >= 0.1f && !Player.activeSelf)
        {
            float targetAngle = Mathf.Atan2(direction.x, direction.z) * Mathf.Rad2Deg + cam.eulerAngles.y;
            float angle = Mathf.SmoothDampAngle(transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, turnSmoothTime);
            transform.rotation = Quaternion.Euler(0f, angle, 0f);

            Vector3 moveDir = Quaternion.Euler(0f, targetAngle, 0f) * Vector3.forward;  // change move direction to the direction the camera is facing
            controller.Move(moveDir.normalized * speed * Time.deltaTime);

            // controller.Move(direction.normalized * speed * Time.deltaTime);

            Debug.Log("targetAngle : " + targetAngle);
            Debug.Log("moveDir : " + moveDir);
        } else
        {
            // when the kino stops moving save its location, this is also covered in the .C toggle on the remote.cs script
            Invoke("SaveKinoLocation.saveKinoLocation()", 0.5f);    // only save position hald a second after stopping
        }

        // Debug.Log("H  : " + horizontal + "D.x : " + direction.x );
        // Debug.Log("V  : " + vertical + "D.y : " + direction.y);



        if (!Player.activeSelf)
        {
            activeForwardSpeed = Mathf.Lerp(activeForwardSpeed, Input.GetAxisRaw("Vertical") * forwardSpeed, forward_acc * Time.deltaTime);
            activeStrifeSpeed = Mathf.Lerp(activeStrifeSpeed, Input.GetAxisRaw("Horizontal") * strifeSpeed, strife_acc * Time.deltaTime);
            activeHoverSpeed = Mathf.Lerp(activeHoverSpeed, Input.GetAxisRaw("Hover") * hoverSpeed, hover_acc * Time.deltaTime);

            transform.position += transform.forward * activeForwardSpeed * Time.deltaTime;
            transform.position += transform.right * activeStrifeSpeed * Time.deltaTime;
            transform.position += transform.up * activeHoverSpeed * Time.deltaTime;
        }


    }
}
