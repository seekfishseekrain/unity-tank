using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MOVE : MonoBehaviour
{
    // Start is called before the first frame update
    public float movespeed = 5;//̹�˵��ƶ��ٶ�
    public Rigidbody rigidbody;//̹��
    public int number;//̹�˱��
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void FixedUpdate()
    {
        float v = Input.GetAxis("Vertical" + number);//��ð���
        rigidbody.velocity = transform.forward * v * movespeed;//̹���ƶ�
    }
}

