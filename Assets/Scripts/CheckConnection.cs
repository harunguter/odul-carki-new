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

    public static void Internet()
    {
        if ((Application.internetReachability == NetworkReachability.NotReachable) && SceneManager.GetActiveScene().name != "Check Connection")
            SceneManager.LoadScene("Check Connection");
    }

}
