using UnityEngine;

public class PinManager : MonoBehaviour
{

    public GameObject wheel;
    private Animator _animator;
    public bool spinning;
    public bool stopped;
    public string reward;

    void FixedUpdate()
    {
        spinning = wheel.GetComponent<WheelManager>().spinning;
        stopped = wheel.GetComponent<WheelManager>().stopped;
        _animator = GetComponent<Animator>();
        PlayerPrefs.SetString("Reward", reward);
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.tag == "Reward") reward = collision.name;
    }
}
