using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MOVE : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 10;//̹���ƶ��ٶ�
    public float anglespeed = 5;//̹����ת�ٶ�
    private Rigidbody rigidbody;//̹�˱���
    public int number;//̹�˱��
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
        float v = Input.GetAxis("Vertical" + number);//��ȡ̹���ƶ�
        rigidbody.velocity = transform.forward * v * speed;//����̹���ƶ�
        float r = Input.GetAxis("Horizontal" + number);//��ȡ̹����ת
        rigidbody.angularVelocity = transform.up * r * anglespeed;//����̹����ת
    }
}

