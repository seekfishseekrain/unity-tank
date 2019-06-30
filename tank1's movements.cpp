using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MOVE : MonoBehaviour
{
    // Start is called before the first frame update
    public float movespeed = 5;//坦克的移动速度
    public Rigidbody rigidbody;//坦克
    public int number;//坦克编号
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        float v = Input.GetAxis("Vertical" + number);//获得按键
        rigidbody.velocity = transform.forward * v * movespeed;//坦克移动
    }
}

