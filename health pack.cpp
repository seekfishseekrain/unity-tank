using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Healthpack1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void OnTriggerEnter(Healthpack1 healthpack)
    {
        if (healthpack.tag =="Tank")
        {
            healthpack.SendMessage("Tankrestore");//�����ж�̹�˺�Ѫ������ײ
            GameObject.Destroy(this.gameObject);//��ײ��Ѫ����ʧ
        }
    }
}
