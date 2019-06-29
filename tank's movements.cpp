using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MOVE : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 10;//坦克移动速度
    public float anglespeed = 5;//坦克旋转速度
    private Rigidbody rigidbody;//坦克本身
    public int number;//坦克编号
    void Start()
    {
        rigidbody = this.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {
        float v = Input.GetAxis("Vertical" + number);//获取坦克移动
        rigidbody.velocity = transform.forward * v * speed;//控制坦克移动
        float r = Input.GetAxis("Horizontal" + number);//获取坦克旋转
        rigidbody.angularVelocity = transform.up * r * anglespeed;//控制坦克旋转
    }
}

