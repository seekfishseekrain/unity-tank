using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ROTATION : MonoBehaviour
{
    // Start is called before the first frame update
    public float anglgespeed = 10;//̹����ת�ٶ�
    public Rigidbody rigidbody;//̹��
    public int number;//̹�˱��
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float r = Input.GetAxis("Horizontal" + number);
        rigidbody.angularVelocity = transform.up * r * anglgespeed;//̹����ת
    }
}
