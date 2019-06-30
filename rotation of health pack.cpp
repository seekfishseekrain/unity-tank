using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("World Euler Angle" + transform.eulerAngles.x);//世界坐标欧拉x轴
        Debug.Log("World Euler Angle" + transform.eulerAngles.y);//世界坐标欧拉y轴
        Debug.Log("World Euler Angle" + transform.eulerAngles.z);//世界坐标欧拉z轴
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Rotate(0, 45f * Time.deltaTime, 0, Space.World);//让目标沿y轴以每秒45度速度旋转
    }
}
