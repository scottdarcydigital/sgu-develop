using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterBotHoverAnimation : MonoBehaviour
{
    public Transform hoverTopPoint;
    public Transform hoverBottomPoint;

    public bool atHoverTop;
    public bool atHoverBottom;

    public WaterBot WaterBotVariables;

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

    void Start()
    {
        WaterBotVariables = FindObjectOfType<WaterBot>();
    }

    void Update()
    {
        hoverIdol();
    }
}
