using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BATTERY : MonoBehaviour
{
    // Start is called before the first frame update
    public float b_rspeed = 10;//��̨����ת�ٶ�
    public KeyCode turnleft = KeyCode.J;//��̨��ת
    public KeyCode turnright = KeyCode.K;//��̨��ת
    public GameObject battery;//�����̨
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void FixedUpdate()
    {
        if(Input.GetKey(turnleft))
        {
            battery.transform.Rotate(new Vector3((float)1.055496e-05, (float)1.079641, (float)-0.02532136), -Time.deltaTime * b_rspeed, Space.Self);
        }
        if (Input.GetKey(turnright))
        {
            battery.transform.Rotate(new Vector3((float)1.055496e-05, (float)1.079641, (float)-0.02532136), Time.deltaTime * b_rspeed, Space.Self);
        }
    }
}


