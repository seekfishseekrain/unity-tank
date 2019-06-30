using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ROTATION : MonoBehaviour
{
    // Start is called before the first frame update
    public float anglgespeed = 10;//坦克旋转速度
    public Rigidbody rigidbody;//坦克
    public int number;//坦克编号
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float r = Input.GetAxis("Horizontal" + number);
        rigidbody.angularVelocity = transform.up * r * anglgespeed;//坦克旋转
    }
}
