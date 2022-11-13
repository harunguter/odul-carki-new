using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class WheelManager : MonoBehaviour
{
    public GameObject outline;
    public float spinningSpeed;
    private bool _spinning = false;
    private bool _spinned = false;
    private bool _stopped = false;
    private float _time = 0;
    void Start()
    {
        transform.localEulerAngles = new Vector3(0, 0, transform.localEulerAngles.z + 1);
    }

    void FixedUpdate()
    {
        if (_spinning)
        {
            _time += Time.deltaTime;

            if (_time > 15)
            {
                _spinned = true;
                _stopped = spinningSpeed == 0;
                spinningSpeed = spinningSpeed < 0 ? spinningSpeed + (_time / 10) : 0;          
            }
            if (_stopped && _spinned)
            {
                transform.localEulerAngles = transform.localEulerAngles.z % 22.5f < 0.9f ? 
                    new Vector3(0, 0, transform.localEulerAngles.z + 1) : 
                    new Vector3(0, 0, transform.localEulerAngles.z);
            }
            transform.eulerAngles += new Vector3(0, 0, spinningSpeed * Time.deltaTime);
            outline.transform.eulerAngles += new Vector3(0, 0, -(spinningSpeed * Time.deltaTime));
        }
    }

    void OnMouseDown()
    {
        if (!_spinning)
        {
            spinningSpeed = Random.Range(-1000, -1500);
            _spinning = true;
        }
    }

}
