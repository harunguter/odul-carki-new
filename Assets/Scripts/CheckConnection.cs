using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CheckConnection : MonoBehaviour
{
    private static CheckConnection _instance = null;

    void Awake()
    {

        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(this);
        }
        else if (this != _instance)
            Destroy(this);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)) CaptureScreenshot();
    }

    public static void Internet()
    {
        if ((Application.internetReachability == NetworkReachability.NotReachable) && SceneManager.GetActiveScene().name != "Check Connection")
            SceneManager.LoadScene("Check Connection");
    }

    void CaptureScreenshot()
    {
        ScreenCapture.CaptureScreenshot("./Screenshoots/" + Guid.NewGuid().ToString() + ".png");
    }

}
