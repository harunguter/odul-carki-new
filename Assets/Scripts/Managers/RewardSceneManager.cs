using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class RewardSceneManager : MonoBehaviour
{
    public GameObject giftText;
    public GameObject giftOutline;
    public Button rewardedVideoButton;
    [SerializeField] float _giftOutlineAnimationLength;
    public Image[] rewardedVideoButtonImages;
    void Start()
    {
        _giftOutlineAnimationLength = giftOutline
            .GetComponent<Animator>()
            .runtimeAnimatorController.animationClips[0].length;

        Invoke("ShowGiftText", _giftOutlineAnimationLength + 0.1f);
    }

    void Update()
    {

        RevardedVideoButtonStatus();
    }

    void ShowGiftText() => giftText.SetActive(true);

    void RevardedVideoButtonStatus()
    {
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

    public void ShowRewardedAd() => Debug.Log("ShowRewardedAd()");

    public void ExitApp() => SceneManager.LoadScene("Reward");

    public void ShareApp() => Debug.Log("ShareApp()");

}
