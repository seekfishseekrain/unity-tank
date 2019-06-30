using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Healthpack1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnTriggerEnter(Healthpack1 healthpack)
    {
        if (healthpack.tag =="Tank")
        {
            healthpack.SendMessage("Tankrestore");//用于判断坦克和血包的碰撞
            GameObject.Destroy(this.gameObject);//碰撞后血包消失
        }
    }
}
