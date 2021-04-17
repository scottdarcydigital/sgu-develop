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

    // Start is called before the first frame update
    void Start()
    {
        // !!! IMPORTANT Change this later to not use the find function and maybe be something like 
        //  cropBotThis.GetComponent<CropBot>().harvested_Crops = 0;
        WaterBotVariables = FindObjectOfType<WaterBot>();
    }

    // Update is called once per frame
    void Update()
    {
        // only play the hover animation if the bot is not currently farming
       // if (!WaterBotVariables.isFarming)
       // {
            hoverIdol();
       // }
    }
}
