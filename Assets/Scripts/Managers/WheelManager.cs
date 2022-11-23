using UnityEngine;
using Random = UnityEngine.Random;

public class WheelManager : MonoBehaviour
{
    public GameObject outline;
    private Animator _outlineAnimator;
    public float spinningSpeed;
    [SerializeField] private bool _spinning = false;
    [SerializeField] private bool _spinned = false;
    [SerializeField] private bool _stopped = false;
    [SerializeField] private float _time = 0;
    void Start()
    {
        _outlineAnimator = outline.GetComponent<Animator>();
    }

    void FixedUpdate()
    {
        if (_spinning)
        {
            _time += Time.deltaTime;

            if (_time > 5)
            {
                _spinned = true;
                _stopped = spinningSpeed == 0;
                spinningSpeed = spinningSpeed < 0 ? spinningSpeed + (_time / 5) : 0;
            }
            if (_stopped && _spinned)
            {
                _outlineAnimator.Play("Outline Hide");
                transform.localEulerAngles = Mathf.Abs(transform.localEulerAngles.z) % 45f < 1 ?
                    new Vector3(0, 0, transform.localEulerAngles.z + 2) :
                    new Vector3(0, 0, transform.localEulerAngles.z);
            }
            transform.eulerAngles += new Vector3(0, 0, spinningSpeed * Time.deltaTime);
        }
    }

    void OnMouseDown()
    {
        if (!_spinning)
        {
            _outlineAnimator.Play("Outline");
            spinningSpeed = Random.Range(-500, -1200);
            _spinning = true;
        }
    }

}
