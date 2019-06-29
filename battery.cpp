using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ROTATION : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform tank;//获得坦克父对象
    public float batteryanglespeed = 5;//炮台转动速度
    public KeyCode turnleft = KeyCode.J;//炮台向左转
    public KeyCode turnright = KeyCode.K;//炮台向右转
    private Rigidbody battery;//获得炮台
    void Start()
    {
        battery = this.GetComponent<Rigidbody>();
        battery.transform.parent = tank.transform;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        if(Input.GetKeyDown(turnleft))
        {
            battery.angularVelocity = -1 * transform.up * batteryanglespeed;
        }
        if(Input.GetKeyDown(turnright))
        {
            battery.angularVelocity = transform.up * batteryanglespeed;
        }
    }
}

