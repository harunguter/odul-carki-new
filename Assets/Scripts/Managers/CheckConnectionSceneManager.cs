using UnityEngine;
using UnityEngine.SceneManagement;

public class CheckConnectionSceneManager : MonoBehaviour
{
    void Start()
    {
        ReklamScript.BannerGizle();
    }

    void Update()
    {
        if (!(Application.internetReachability == NetworkReachability.NotReachable))
            SceneManager.LoadScene("Splash");
    }
}
