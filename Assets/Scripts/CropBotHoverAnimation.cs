using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropBotHoverAnimation : MonoBehaviour
{
    public Transform hoverTopPoint;
    public Transform hoverBottomPoint;

    public bool atHoverTop;
    public bool atHoverBottom;
    
    public CropBot CropBotVariables;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("DEBUG BOT ACTIVE");
        CropBotVariables = FindObjectOfType<CropBot>();
    }

    void hoverIdol()
    {
        if (!atHoverTop)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, hoverTopPoint.transform.position, 0.0008f);
            if (this.transform.position == hoverTopPoint.transform.position)
            {
                atHoverTop = true;
            }
        }
        else if (atHoverTop)
        {
            this.transform.position = Vector3.MoveTowards(this.transform.position, hoverBottomPoint.transform.position, 0.0008f);
            if (this.transform.position == hoverBottomPoint.transform.position)
            {
                atHoverTop = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        // only play the hover animation if the bot is not currently farming
        if (!CropBotVariables.isFarming)
        {
            hoverIdol();
        }
    }
}
