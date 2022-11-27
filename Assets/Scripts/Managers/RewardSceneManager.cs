using GoogleMobileAds.Api;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RewardSceneManager : MonoBehaviour
{
    public GameObject giftText;
    public GameObject giftOutline;
    public GameObject giftBox;
    public string reward;
    public Button rewardedVideoButton;
    private float _giftOutlineAnimationLength;
    public Image[] rewardedVideoButtonImages;
    public TextMeshProUGUI rewardedVideoButtonText;
    public int adReward;
    void Start()
    {
        Debug.Log(PlayerPrefs.GetString("Reward"));
        _giftOutlineAnimationLength = giftOutline
            .GetComponent<Animator>()
            .runtimeAnimatorController.animationClips[0].length;

        switch (PlayerPrefs.GetString("Reward"))
        {
            case "Bos":
                reward = "Hediye kazanamadýnýz.<br>Lütfen tekrar deneyin.";
                break;
            case "Dakika":
                reward = Rewards.Minute[Random.Range(0, Rewards.Minute.Length)];
                break;
            case "Internet":
                reward = Rewards.Internet[Random.Range(0, Rewards.Internet.Length)];
                break;
            case "Surpriz":
                string[] _suprise = Rewards.Suprise[Random.Range(0, Rewards.Suprise.Length)];
                reward = _suprise[Random.Range(0, _suprise.Length)];
                break;
            default:
                break;
        }

        reward = PlayerPrefs.GetString("Reward") != "Bos" ? reward + "<br>Hediye kazandýnýz." : reward;

        giftText.GetComponent<TextMeshProUGUI>().text = reward;

        Invoke("ShowGiftText", _giftOutlineAnimationLength + 0.1f);
        Invoke("ShowGiftBox", _giftOutlineAnimationLength + 0.1f);

        adReward = PlayerPrefs.HasKey("AdReward") ? PlayerPrefs.GetInt("AdReward") : 0;
        if (!PlayerPrefs.HasKey("AdReward")) PlayerPrefs.SetInt("AdReward", 0);
    }

    void Update()
    {

        RevardedVideoButtonStatus();
    }

    void ShowGiftText() => giftText.SetActive(true);
    void ShowGiftBox() => giftBox.SetActive(true);

    void RevardedVideoButtonStatus()
    {
        rewardedVideoButton.interactable = ReklamScript.RewardedReklamHazirMi();
        rewardedVideoButtonText.alpha = rewardedVideoButton.interactable ? 1 : 0.5f;
        foreach (var rewardedVideoButtonImage in rewardedVideoButtonImages)
        {
            rewardedVideoButtonImage.color = new Color(
                rewardedVideoButtonImage.color.r,
                rewardedVideoButtonImage.color.g,
                rewardedVideoButtonImage.color.b,
                rewardedVideoButton.interactable ? 1 : 0.5f
           );
        }
    }

    public void ShowRewardedAd()
    {
        ReklamScript.RewardedReklamGoster(Rewarded);
    }

    void Rewarded(Reward reward)
    {
        PlayerPrefs.SetInt("AdReward", PlayerPrefs.GetInt("AdReward") + (int)reward.Amount);
        SceneManager.LoadScene("Main");
    }

    public void ExitApp() => Application.Quit();

    public void ShareApp()
    {
        new NativeShare()
            .SetTitle("Test title")
            .SetText("Test text")
            .SetUrl("https://google.com")
            .Share();
    }

}
