using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SplashSceneManager : MonoBehaviour
{
    public Slider slider;
    public TextMeshProUGUI loading;
    public int sliderMaxValue;
    private float _sliderValue;
    public int progress;

    void Start()
    {
        slider.maxValue = sliderMaxValue;
    }

    void Update()
    {
        _sliderValue = _sliderValue < sliderMaxValue ? _sliderValue += Time.deltaTime : sliderMaxValue;
        _sliderValue = _sliderValue < sliderMaxValue ? _sliderValue += Time.deltaTime : sliderMaxValue;
        slider.value = slider.value < sliderMaxValue ? _sliderValue : sliderMaxValue;
        progress = (int)((_sliderValue / sliderMaxValue) * 100);

        loading.text = (_sliderValue < (sliderMaxValue / 2)) ? "Baðlantý kuruluyor" : "Yükleniyor";

        if (_sliderValue >= sliderMaxValue) SceneManager.LoadScene("Main");

        CheckConnection.Internet();
    }

    void ChangeScene()
    {
        SceneManager.LoadScene("Main");
    }
}
