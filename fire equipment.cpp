using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Takeattack : MonoBehaviour
{
    private Transform fireposition;

    private GameObject shellprefab;

    public KeyCode fireKey = KeyCode.Space;
    // Start is called before the first frame update
    void Start()
    {
        fireposition.transform.Find("Fireposition");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(fireKey))//如果摁下空格则开火
        {
            GameObject.Instantiate(shellprefab, fireposition.position, fireposition.rotation);
        }
    }
}
