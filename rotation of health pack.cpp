using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("World Euler Angle" + transform.eulerAngles.x);//��������ŷ��x��
        Debug.Log("World Euler Angle" + transform.eulerAngles.y);//��������ŷ��y��
        Debug.Log("World Euler Angle" + transform.eulerAngles.z);//��������ŷ��z��
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Rotate(0, 45f * Time.deltaTime, 0, Space.World);//��Ŀ����y����ÿ��45���ٶ���ת
    }
}
