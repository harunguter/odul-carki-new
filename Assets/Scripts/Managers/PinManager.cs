using UnityEngine;

public class PinManager : MonoBehaviour
{

    public GameObject wheel;
    void Start()
    {

    }

    void Update()
    {

    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        Debug.Log(collision.name);
    }
}
