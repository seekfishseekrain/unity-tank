using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ROTATION : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform tank;//���̹�˸�����
    public float batteryanglespeed = 5;//��̨ת���ٶ�
    public KeyCode turnleft = KeyCode.J;//��̨����ת
    public KeyCode turnright = KeyCode.K;//��̨����ת
    private Rigidbody battery;//�����̨
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

