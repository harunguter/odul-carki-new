using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainSceneManager : MonoBehaviour
{
    public GameObject informationText;
    public GameObject playArea;
    public GameObject wheel;
    private bool _spinned = false;
    private bool _stopped = false;
    private bool _adShowed = false;

    void Start()
    {
        _adShowed = false;
    }

    void Update()
    {
        _spinned = wheel.GetComponent<WheelManager>().spinned;
        _stopped = wheel.GetComponent<WheelManager>().stopped;
      
        if (_spinned && _stopped)
            if (ReklamScript.InterstitialHazirMi())
            {
                playArea.SetActive(false);
                informationText.GetComponent<TextMeshProUGUI>().text = "Reklam yükleniyor<br>Lütfen bekleyin...";
                informationText.GetComponent<TextMeshProUGUI>().rectTransform.localPosition = Vector3.zero;
                Invoke("ShowInterstitialAd", 3f);
            } else
            {
                Invoke("OpenRewardScene", 1f);
            }

        CheckConnection.Internet();
    }

    void OpenRewardScene() => SceneManager.LoadScene("Reward");
    void ShowInterstitialAd(){
        if (!_adShowed)
        {
            _adShowed = true;
            ReklamScript.InsterstitialGoster();
        }
    }
}
