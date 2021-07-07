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

    void Start()
    {
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
    void Update()
    {
        if (!CropBotVariables.isFarming)
        {
            hoverIdol();
        }
    }
}
