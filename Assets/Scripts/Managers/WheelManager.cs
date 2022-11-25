using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class WheelManager : MonoBehaviour
{
    public GameObject outline;
    public GameObject pin;
    private Animator _outlineAnimator;
    private Animator _pinAnimator;
    public float spinningSpeed;
    public bool spinning = false;
    public bool spinned = false;
    public bool stopped = false;
    private float _time = 0;
    void Start()
    {
        _outlineAnimator = outline.GetComponent<Animator>();
        _pinAnimator = pin.GetComponent<Animator>();
    }

    void FixedUpdate()
    {
        if (spinning)
        {
            _time += Time.deltaTime;

            if (_time > 5)
            {
                spinned = true;
                stopped = spinningSpeed == 0;
                spinningSpeed = spinningSpeed < 0 ? spinningSpeed + (_time / 5) : 0;
                _pinAnimator.speed = _pinAnimator.speed > 0 ? _pinAnimator.speed - (Time.deltaTime / 10) : 0;
            }
            if (stopped && spinned)
            {
                _outlineAnimator.Play("Outline Hide");
                _pinAnimator.enabled = false;
                pin.transform.eulerAngles = new Vector3(0, 0, 0);
                transform.localEulerAngles = Mathf.Abs(transform.localEulerAngles.z) % 45f < 1 ?
                    new Vector3(0, 0, transform.localEulerAngles.z + 2) :
                    new Vector3(0, 0, transform.localEulerAngles.z);
            }
            transform.eulerAngles += new Vector3(0, 0, spinningSpeed * Time.deltaTime);
        }
    }

    void OnMouseDown()
    {
        if (!spinning)
        {
            _outlineAnimator.Play("Outline");
            spinningSpeed = Random.Range(-500, -1200);
            //spinningSpeed = -755; //Her zaman boþ
            _pinAnimator.Play("Pin");
            spinning = true;
        }
    }

    void OpenRewardScene() => SceneManager.LoadScene("Reward");

}
