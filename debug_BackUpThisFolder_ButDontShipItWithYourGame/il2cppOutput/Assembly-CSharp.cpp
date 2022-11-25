#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CheckConnection
struct CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95;
// CheckConnectionSceneManager
struct CheckConnectionSceneManager_t0DAF16E598FBA3BDE097C3105F548FDB2A7EE2BF;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// MainSceneManager
struct MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PinManager
struct PinManager_t92EAAC20D1F726085CEA801003D3D1EB83D4970F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ReklamScript
struct ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// RewardSceneManager
struct RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SplashSceneManager
struct SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WheelManager
struct WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ReklamScript/<>c
struct U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998;
// ReklamScript/<InsterstitialGosterCoroutine>d__40
struct U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F;
// ReklamScript/<RewardedVideoGosterCoroutine>d__41
struct U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E;
// ReklamScript/RewardedVideoOdul
struct RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33;
// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D11B266DD59F6153581EB126F6FDA89FB7CA2C5;
IL2CPP_EXTERN_C String_t* _stringLiteral0F18E96109098019B1A1C6389CE8520EFF459A6E;
IL2CPP_EXTERN_C String_t* _stringLiteral13587311A842583807BFDCE45EAA841B29066BF2;
IL2CPP_EXTERN_C String_t* _stringLiteral23944589E023D0A0258E2E545E718AB596D1961C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C9C58DB0129F653114CC5CBB6822BC5B8D684DD;
IL2CPP_EXTERN_C String_t* _stringLiteral36651C8D3EDB278236C4DE93091354F5B7E7D2A1;
IL2CPP_EXTERN_C String_t* _stringLiteral39B45D0E2BDA957C0565220FAFBFB6E0B1533D44;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral4435410EBFA63F78AB2C030AD00D75186663C6CA;
IL2CPP_EXTERN_C String_t* _stringLiteral468C1F43F0BCD29F7C0500B7F643B09B475B1A64;
IL2CPP_EXTERN_C String_t* _stringLiteral49E0495FD767F7FAEFC53BF3805DADE1AF914388;
IL2CPP_EXTERN_C String_t* _stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E;
IL2CPP_EXTERN_C String_t* _stringLiteral600ADB1F6C89902F8E385035C72B25C2A4553294;
IL2CPP_EXTERN_C String_t* _stringLiteral64B56570F4FE3FE45A614B62D66279D934F4AAC1;
IL2CPP_EXTERN_C String_t* _stringLiteral66334937258227FC0AABAF92C3CDDAC8708AACEF;
IL2CPP_EXTERN_C String_t* _stringLiteral6D7688F1B3D586B2CF1F643CCE1C19F100E96C7E;
IL2CPP_EXTERN_C String_t* _stringLiteral730A9E45E394CF5B43EDA0A689174C9323AFD544;
IL2CPP_EXTERN_C String_t* _stringLiteral761B0900848A3BEC36C33D72E854D9968F060D70;
IL2CPP_EXTERN_C String_t* _stringLiteral783EBC98D395616FDE498393410E9DCF0DDCCF79;
IL2CPP_EXTERN_C String_t* _stringLiteral81893B86112D00455EFF405FF34F8F7E4946A18C;
IL2CPP_EXTERN_C String_t* _stringLiteral84AC7CD4F053B7B36284E00B7B98F4D129938F7B;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321;
IL2CPP_EXTERN_C String_t* _stringLiteral8EC5BAC4F6A518ABD4B12E3D172F881253589260;
IL2CPP_EXTERN_C String_t* _stringLiteral924E891A0CCB64C9042885034EBF0FB618475577;
IL2CPP_EXTERN_C String_t* _stringLiteral9715992324C239118698F860C6BC3B4D56C34CF3;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C3A73E94A9BCD28352F3B27306829292859EBA;
IL2CPP_EXTERN_C String_t* _stringLiteralA25D578232E42FE2BC9341568F478588EF38B9E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003;
IL2CPP_EXTERN_C String_t* _stringLiteralA82CC61A934CA3F63179AE683C3C24296FC3958C;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBC8AECE81D9B93F6B47F1105A6273DC763DFC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E2A45A55328680F1D37A474030E3E89BE6CE67;
IL2CPP_EXTERN_C String_t* _stringLiteralBC741B20BE9565341C9027ABE3FDD4DA5ED73833;
IL2CPP_EXTERN_C String_t* _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3CC1759A2D681CEDD335DC23B604CDEFC3C4FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF3FF5A8839F7ED5940B7F6FD613B5E25FF70134;
IL2CPP_EXTERN_C String_t* _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB54FA0D68EBA98291C5261C1BC614AC9822D5D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mC0094101367FA342F4A73D136FE5EA1F72D6352B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_BannerYuklenemedi_mD3D3C2C799C1A6835DD108FB6F5959AAD2F495AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_InterstitialDelegate_m452E29FB78AED631A6F3E11F3C8BC5C5D60ACE2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_InterstitialYuklenemedi_mFFB0DDE338F2DA360456FD365CD5F637B4451AAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_RewardedVideoDelegate_m797A3C2E82971F2CF101242A62ACFC4A556CC8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_RewardedVideoOdullendir_m146AA60E6BC7258A1BDAF4CCAA9DFD6AAC470F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReklamScript_RewardedVideoYuklenemedi_mB5F4185D818455F92EC0E1568E2942DCF8BBA1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardSceneManager_Rewarded_mC00AD812C86EE6F5B70AA514DDD039DA9F7B098D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInsterstitialGosterCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_mF4FAE68103D95A6A5698C2ED84FA13EA004E53D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRewardedVideoGosterCoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m7E3B1F66DF1EE011D78D85FC6A603B21A7B14D47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__20_0_mA1A355F7A9E5F2688E9FFDAB2F44AA0EF4F2204C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::type
	int32_t ___type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::orientation
	int32_t ___orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::width
	int32_t ___width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::height
	int32_t ___height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};

// Ads
struct Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040  : public RuntimeObject
{
};

struct Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields
{
	// System.String Ads::AppId
	String_t* ___AppId_0;
	// System.String Ads::BannerId
	String_t* ___BannerId_1;
	// System.String Ads::InterstitialId
	String_t* ___InterstitialId_2;
	// System.String Ads::RewardedId
	String_t* ___RewardedId_3;
	// System.String Ads::TestDeviceId
	String_t* ___TestDeviceId_4;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::client
	RuntimeObject* ___client_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_4;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_5;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_9;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_10;
};

// Rewards
struct Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC  : public RuntimeObject
{
};

struct Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields
{
	// System.String[] Rewards::Minute
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Minute_0;
	// System.String[] Rewards::Internet
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Internet_1;
	// System.String[][] Rewards::Suprise
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___Suprise_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_2;
};

// ReklamScript/<>c
struct U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998  : public RuntimeObject
{
};

struct U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields
{
	// ReklamScript/<>c ReklamScript/<>c::<>9
	U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> ReklamScript/<>c::<>9__20_0
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___U3CU3E9__20_0_1;
};

// ReklamScript/<InsterstitialGosterCoroutine>d__40
struct U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F  : public RuntimeObject
{
	// System.Int32 ReklamScript/<InsterstitialGosterCoroutine>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ReklamScript/<InsterstitialGosterCoroutine>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ReklamScript ReklamScript/<InsterstitialGosterCoroutine>d__40::<>4__this
	ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* ___U3CU3E4__this_2;
	// System.Single ReklamScript/<InsterstitialGosterCoroutine>d__40::<istekTimeoutAni>5__2
	float ___U3CistekTimeoutAniU3E5__2_3;
};

// ReklamScript/<RewardedVideoGosterCoroutine>d__41
struct U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E  : public RuntimeObject
{
	// System.Int32 ReklamScript/<RewardedVideoGosterCoroutine>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ReklamScript/<RewardedVideoGosterCoroutine>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ReklamScript ReklamScript/<RewardedVideoGosterCoroutine>d__41::<>4__this
	ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* ___U3CU3E4__this_2;
	// System.Single ReklamScript/<RewardedVideoGosterCoroutine>d__41::<istekTimeoutAni>5__2
	float ___U3CistekTimeoutAniU3E5__2_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB  : public RuntimeObject
{
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17* ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CSameAppKeyEnabledU3Ek__BackingField_4;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45  : public RuntimeObject
{
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_t8F4AA13668EB7FF7A5F6F369845B5280BBE0BF17* ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_tD9EF87DE17BC8563283D8BCB64EF209BCFE74FD3 ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::<TestDeviceIds>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CTestDeviceIdsU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration/Builder::<SameAppKeyEnabled>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CSameAppKeyEnabledU3Ek__BackingField_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// ReklamScript/RewardedVideoOdul
struct RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// CheckConnection
struct CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_StaticFields
{
	// CheckConnection CheckConnection::_instance
	CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95* ____instance_4;
};

// CheckConnectionSceneManager
struct CheckConnectionSceneManager_t0DAF16E598FBA3BDE097C3105F548FDB2A7EE2BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MainSceneManager
struct MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MainSceneManager::informationText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___informationText_4;
	// UnityEngine.GameObject MainSceneManager::playArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playArea_5;
	// UnityEngine.GameObject MainSceneManager::wheel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wheel_6;
	// System.Boolean MainSceneManager::_spinned
	bool ____spinned_7;
	// System.Boolean MainSceneManager::_stopped
	bool ____stopped_8;
	// System.Boolean MainSceneManager::_adShowed
	bool ____adShowed_9;
};

// PinManager
struct PinManager_t92EAAC20D1F726085CEA801003D3D1EB83D4970F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PinManager::wheel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wheel_4;
	// UnityEngine.Animator PinManager::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_5;
	// System.Boolean PinManager::spinning
	bool ___spinning_6;
	// System.Boolean PinManager::stopped
	bool ___stopped_7;
	// System.String PinManager::reward
	String_t* ___reward_8;
};

// ReklamScript
struct ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ReklamScript::bannerKimligi
	String_t* ___bannerKimligi_5;
	// System.String ReklamScript::interstitialKimligi
	String_t* ___interstitialKimligi_6;
	// System.String ReklamScript::rewardedVideoKimligi
	String_t* ___rewardedVideoKimligi_7;
	// System.Boolean ReklamScript::testModu
	bool ___testModu_8;
	// System.String ReklamScript::testDeviceID
	String_t* ___testDeviceID_9;
	// System.Boolean ReklamScript::cocuklaraYonelikReklamGoster
	bool ___cocuklaraYonelikReklamGoster_10;
	// GoogleMobileAds.Api.AdPosition ReklamScript::bannerPozisyonu
	int32_t ___bannerPozisyonu_11;
	// GoogleMobileAds.Api.BannerView ReklamScript::bannerReklam
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* ___bannerReklam_12;
	// GoogleMobileAds.Api.InterstitialAd ReklamScript::interstitialReklam
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitialReklam_13;
	// GoogleMobileAds.Api.RewardedAd ReklamScript::rewardedVideoReklam
	RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* ___rewardedVideoReklam_14;
	// System.Single ReklamScript::interstitialIstekTimeoutZamani
	float ___interstitialIstekTimeoutZamani_15;
	// System.Single ReklamScript::rewardedVideoIstekTimeoutZamani
	float ___rewardedVideoIstekTimeoutZamani_16;
	// System.Single ReklamScript::bannerOtomatikYeniIstekZamani
	float ___bannerOtomatikYeniIstekZamani_17;
	// System.Single ReklamScript::interstitialOtomatikYeniIstekZamani
	float ___interstitialOtomatikYeniIstekZamani_18;
	// System.Single ReklamScript::rewardedVideoOtomatikYeniIstekZamani
	float ___rewardedVideoOtomatikYeniIstekZamani_19;
	// System.Collections.IEnumerator ReklamScript::interstitialGosterCoroutine
	RuntimeObject* ___interstitialGosterCoroutine_20;
	// System.Collections.IEnumerator ReklamScript::rewardedVideoGosterCoroutine
	RuntimeObject* ___rewardedVideoGosterCoroutine_21;
	// ReklamScript/RewardedVideoOdul ReklamScript::odulDelegate
	RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* ___odulDelegate_22;
};

struct ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields
{
	// ReklamScript ReklamScript::instance
	ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* ___instance_4;
};

// RewardSceneManager
struct RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RewardSceneManager::giftText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___giftText_4;
	// UnityEngine.GameObject RewardSceneManager::giftOutline
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___giftOutline_5;
	// UnityEngine.GameObject RewardSceneManager::giftBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___giftBox_6;
	// System.String RewardSceneManager::reward
	String_t* ___reward_7;
	// UnityEngine.UI.Button RewardSceneManager::rewardedVideoButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___rewardedVideoButton_8;
	// System.Single RewardSceneManager::_giftOutlineAnimationLength
	float ____giftOutlineAnimationLength_9;
	// UnityEngine.UI.Image[] RewardSceneManager::rewardedVideoButtonImages
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___rewardedVideoButtonImages_10;
	// System.Int32 RewardSceneManager::adReward
	int32_t ___adReward_11;
};

// SplashSceneManager
struct SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SplashSceneManager::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_4;
	// TMPro.TextMeshProUGUI SplashSceneManager::loading
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___loading_5;
	// System.Int32 SplashSceneManager::sliderMaxValue
	int32_t ___sliderMaxValue_6;
	// System.Single SplashSceneManager::_sliderValue
	float ____sliderValue_7;
	// System.Int32 SplashSceneManager::progress
	int32_t ___progress_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WheelManager
struct WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WheelManager::outline
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outline_4;
	// UnityEngine.GameObject WheelManager::pin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pin_5;
	// UnityEngine.Animator WheelManager::_outlineAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____outlineAnimator_6;
	// UnityEngine.Animator WheelManager::_pinAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____pinAnimator_7;
	// System.Single WheelManager::spinningSpeed
	float ___spinningSpeed_8;
	// System.Boolean WheelManager::spinning
	bool ___spinning_9;
	// System.Boolean WheelManager::spinned
	bool ___spinned_10;
	// System.Boolean WheelManager::stopped
	bool ___stopped_11;
	// System.Single WheelManager::_time
	float ____time_12;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF  : public RuntimeArray
{
	ALIGN_FIELD (8) StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* m_Items[1];

	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0C1631E6835CC874EFBD2DE2CEA91F7556BC385D (Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTestDeviceIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* Builder_SetTestDeviceIds_m23097E49B7356B95143DEC3A07F7A62825DAF4DA (Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___testDeviceIds0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>::.ctor(T)
inline void Nullable_1__ctor_mC0094101367FA342F4A73D136FE5EA1F72D6352B (Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* Builder_SetTagForChildDirectedTreatment_m276B46CB4D38C8036CDA4322A94D3F3248779258 (Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* __this, Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD ___tagForChildDirectedTreatment0, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* Builder_build_m3D063A3B45CE4C9BF32647A023681414A28C51B1 (Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds::SetRequestConfiguration(GoogleMobileAds.Api.RequestConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_SetRequestConfiguration_m1F0110671038CF67255ADAA3CFDB4CFC6E1E7AF5 (RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* ___requestConfiguration0, const RuntimeMethod* method) ;
// System.Void ReklamScript::BannerReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// System.Void ReklamScript::InterstitialReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void ReklamScript::RewardedReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189 (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.BannerView::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50 (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest ReklamScript::ReklamIstegiOlustur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ReklamScript_ReklamIstegiOlustur_m589F56BF49BCFB94676C8B732BD026C31CEE822A (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, String_t* ___adUnitId0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146 (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85 (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ReklamScript::InsterstitialGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReklamScript_InsterstitialGosterCoroutine_m431D6783CB96B394B0455E706341C9900EDCB5F2 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ReklamScript::RewardedVideoGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReklamScript_RewardedVideoGosterCoroutine_m841B0684D85F3AB8A0321EF9965D2B3729A6DAB2 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) ;
// System.Void ReklamScript/<InsterstitialGosterCoroutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__40__ctor_mBEA29BA8BAC16A6A1FCB7922F96A7952A7FE6778 (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ReklamScript/<RewardedVideoGosterCoroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRewardedVideoGosterCoroutineU3Ed__41__ctor_m9E2375BAE8DF7374C675BAFA8EE5C72123A07B14 (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ReklamScript/RewardedVideoOdul::Invoke(GoogleMobileAds.Api.Reward)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_inline (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ReklamScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAF1A146E7B33F7680A1A1EE0FB1D343D8175E6CF (U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_internetReachability_m3FECA8BA005340369BB952CE8CDF3E1A53F3BA0E (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void ReklamScript::BannerGizle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerGizle_m426485283F2F059807671EA9694B875730D55D54 (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<WheelManager>()
inline WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean ReklamScript::InterstitialHazirMi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReklamScript_InterstitialHazirMi_m9326D0E1FF4AAC2D36140806BB1A9DE60ACBDB8E (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.RectTransform TMPro.TMP_Text::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* TMP_Text_get_rectTransform_m22DC10116809BEB2C66047A55337A588ED023EBF (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void CheckConnection::Internet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnection_Internet_m9CB8E762E66E9F748D3C2296A073CDCD5F67A42D (const RuntimeMethod* method) ;
// System.Void ReklamScript::InsterstitialGoster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InsterstitialGoster_m0282F83D65A8A1C36E73F25749D38FE79A19A085 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void RewardSceneManager::RevardedVideoButtonStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_RevardedVideoButtonStatus_m77AEDC062A12A88ADA08F4A6F20CA06CEA2ECEC3 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) ;
// System.Boolean ReklamScript::RewardedReklamHazirMi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReklamScript_RewardedReklamHazirMi_m72F56D81C78B5F717D7395DEBFD56450B0DB10AF (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void ReklamScript/RewardedVideoOdul::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoOdul__ctor_mDA1FE8E05EFFECE7E42AFE5F059C7258E631B062 (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ReklamScript::RewardedReklamGoster(ReklamScript/RewardedVideoOdul)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedReklamGoster_m434E3DC66A693658A0D1727778F7E90C291AA5FB (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* ___odulFonksiyonu0, const RuntimeMethod* method) ;
// System.Double GoogleMobileAds.Api.Reward::get_Amount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReklamScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_Awake_m28C5FF1555A134D52C7F2772704878297E291D6F (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mC0094101367FA342F4A73D136FE5EA1F72D6352B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__20_0_mA1A355F7A9E5F2688E9FFDAB2F44AA0EF4F2204C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* V_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B3_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B2_0 = NULL;
	{
		// bannerKimligi = Ads.BannerId;
		il2cpp_codegen_runtime_class_init_inline(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___BannerId_1;
		__this->___bannerKimligi_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerKimligi_5), (void*)L_0);
		// interstitialKimligi = Ads.InterstitialId;
		String_t* L_1 = ((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___InterstitialId_2;
		__this->___interstitialKimligi_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialKimligi_6), (void*)L_1);
		// rewardedVideoKimligi = Ads.RewardedId;
		String_t* L_2 = ((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___RewardedId_3;
		__this->___rewardedVideoKimligi_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoKimligi_7), (void*)L_2);
		// testDeviceID = Ads.TestDeviceId;
		String_t* L_3 = ((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___TestDeviceId_4;
		__this->___testDeviceID_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testDeviceID_9), (void*)L_3);
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0110;
		}
	}
	{
		// instance = this;
		((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// bannerKimligi = bannerKimligi.Trim();
		String_t* L_6 = __this->___bannerKimligi_5;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_6, NULL);
		__this->___bannerKimligi_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerKimligi_5), (void*)L_7);
		// interstitialKimligi = interstitialKimligi.Trim();
		String_t* L_8 = __this->___interstitialKimligi_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_8, NULL);
		__this->___interstitialKimligi_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialKimligi_6), (void*)L_9);
		// rewardedVideoKimligi = rewardedVideoKimligi.Trim();
		String_t* L_10 = __this->___rewardedVideoKimligi_7;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_10, NULL);
		__this->___rewardedVideoKimligi_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoKimligi_7), (void*)L_11);
		// testDeviceID = testDeviceID.Trim();
		String_t* L_12 = __this->___testDeviceID_9;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_12, NULL);
		__this->___testDeviceID_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testDeviceID_9), (void*)L_13);
		// MobileAds.Initialize(reklamDurumu => { });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_14 = ((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_15 = L_14;
		G_B2_0 = L_15;
		if (L_15)
		{
			G_B3_0 = L_15;
			goto IL_00ab;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var);
		U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* L_16 = ((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_17 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__20_0_mA1A355F7A9E5F2688E9FFDAB2F44AA0EF4F2204C_RuntimeMethod_var), NULL);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_18 = L_17;
		((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9__20_0_1), (void*)L_18);
		G_B3_0 = L_18;
	}

IL_00ab:
	{
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(G_B3_0, NULL);
		// RequestConfiguration.Builder reklamKonfigurasyonu = new RequestConfiguration.Builder();
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_19 = (Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45*)il2cpp_codegen_object_new(Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Builder__ctor_m0C1631E6835CC874EFBD2DE2CEA91F7556BC385D(L_19, NULL);
		V_0 = L_19;
		// if (testModu && !string.IsNullOrEmpty(testDeviceID))
		bool L_20 = __this->___testModu_8;
		if (!L_20)
		{
			goto IL_00e3;
		}
	}
	{
		String_t* L_21 = __this->___testDeviceID_9;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		if (L_22)
		{
			goto IL_00e3;
		}
	}
	{
		// reklamKonfigurasyonu.SetTestDeviceIds(new List<string>() { testDeviceID });
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_23 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_24, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = L_24;
		String_t* L_26 = __this->___testDeviceID_9;
		NullCheck(L_25);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_25, L_26, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		NullCheck(L_23);
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_27;
		L_27 = Builder_SetTestDeviceIds_m23097E49B7356B95143DEC3A07F7A62825DAF4DA(L_23, L_25, NULL);
	}

IL_00e3:
	{
		// if (cocuklaraYonelikReklamGoster)
		bool L_28 = __this->___cocuklaraYonelikReklamGoster_10;
		if (!L_28)
		{
			goto IL_00f8;
		}
	}
	{
		// reklamKonfigurasyonu.SetTagForChildDirectedTreatment(TagForChildDirectedTreatment.True);
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_29 = V_0;
		Nullable_1_t5C1ED9E759C25CA8D8C3AD08588837283BCD0ADD L_30;
		memset((&L_30), 0, sizeof(L_30));
		Nullable_1__ctor_mC0094101367FA342F4A73D136FE5EA1F72D6352B((&L_30), 1, /*hidden argument*/Nullable_1__ctor_mC0094101367FA342F4A73D136FE5EA1F72D6352B_RuntimeMethod_var);
		NullCheck(L_29);
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_31;
		L_31 = Builder_SetTagForChildDirectedTreatment_m276B46CB4D38C8036CDA4322A94D3F3248779258(L_29, L_30, NULL);
	}

IL_00f8:
	{
		// MobileAds.SetRequestConfiguration(reklamKonfigurasyonu.build());
		Builder_t8F1DEAFD238B8961C808810DD6AFBED8FF0DCF45* L_32 = V_0;
		NullCheck(L_32);
		RequestConfiguration_tE715340E972C7F6E659FD3ACE136CDDEAD74CCCB* L_33;
		L_33 = Builder_build_m3D063A3B45CE4C9BF32647A023681414A28C51B1(L_32, NULL);
		MobileAds_SetRequestConfiguration_m1F0110671038CF67255ADAA3CFDB4CFC6E1E7AF5(L_33, NULL);
		// BannerReklamYukle();
		ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB(__this, NULL);
		// InterstitialReklamYukle();
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(__this, NULL);
		return;
	}

IL_0110:
	{
		// else if (this != instance)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_34 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, L_34, NULL);
		if (!L_35)
		{
			goto IL_0123;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_Update_mBAFB46CE9877526DCEA2F3627052FB2882C91434 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float zaman = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		// if (zaman >= bannerOtomatikYeniIstekZamani)
		float L_1 = L_0;
		float L_2 = __this->___bannerOtomatikYeniIstekZamani_17;
		G_B1_0 = L_1;
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		// bannerOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___bannerOtomatikYeniIstekZamani_17 = (std::numeric_limits<float>::infinity());
		// BannerReklamYukle();
		ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		// if (zaman >= interstitialOtomatikYeniIstekZamani)
		float L_3 = G_B2_0;
		float L_4 = __this->___interstitialOtomatikYeniIstekZamani_18;
		G_B3_0 = L_3;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			G_B4_0 = L_3;
			goto IL_0039;
		}
	}
	{
		// interstitialOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___interstitialOtomatikYeniIstekZamani_18 = (std::numeric_limits<float>::infinity());
		// InterstitialReklamYukle();
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(__this, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0039:
	{
		// if (zaman >= rewardedVideoOtomatikYeniIstekZamani)
		float L_5 = __this->___rewardedVideoOtomatikYeniIstekZamani_19;
		if ((!(((float)G_B4_0) >= ((float)L_5))))
		{
			goto IL_0052;
		}
	}
	{
		// rewardedVideoOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___rewardedVideoOtomatikYeniIstekZamani_19 = (std::numeric_limits<float>::infinity());
		// RewardedReklamYukle();
		ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C(__this, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::BannerReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_BannerYuklenemedi_mD3D3C2C799C1A6835DD108FB6F5959AAD2F495AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!testModu && string.IsNullOrEmpty(bannerKimligi))
		bool L_0 = __this->___testModu_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___bannerKimligi_5;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (bannerReklam != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_3 = __this->___bannerReklam_12;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// bannerReklam.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_4 = __this->___bannerReklam_12;
		NullCheck(L_4);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_4, NULL);
	}

IL_0029:
	{
		// if (testModu && (string.IsNullOrEmpty(testDeviceID) || string.IsNullOrEmpty(bannerKimligi)))
		bool L_5 = __this->___testModu_8;
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_6 = __this->___testDeviceID_9;
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (L_7)
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_8 = __this->___bannerKimligi_5;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}

IL_004b:
	{
		// bannerReklam = new BannerView("ca-app-pub-3940256099942544/6300978111", AdSize.Banner, bannerPozisyonu);
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_10 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		int32_t L_11 = __this->___bannerPozisyonu_11;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_12 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_12, _stringLiteralE1B77BC58FA1C48C0D7C320A13D9EED379EF317F, L_10, L_11, NULL);
		__this->___bannerReklam_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerReklam_12), (void*)L_12);
		goto IL_0084;
	}

IL_0068:
	{
		// bannerReklam = new BannerView(bannerKimligi, AdSize.Banner, bannerPozisyonu);
		String_t* L_13 = __this->___bannerKimligi_5;
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_14 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		int32_t L_15 = __this->___bannerPozisyonu_11;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_16 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_16, L_13, L_14, L_15, NULL);
		__this->___bannerReklam_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerReklam_12), (void*)L_16);
	}

IL_0084:
	{
		// bannerReklam.OnAdFailedToLoad += BannerYuklenemedi;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_17 = __this->___bannerReklam_12;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_18 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_18, __this, (intptr_t)((void*)ReklamScript_BannerYuklenemedi_mD3D3C2C799C1A6835DD108FB6F5959AAD2F495AE_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		BannerView_add_OnAdFailedToLoad_m92D031919F382DE6C7B6C87F0DAB95AB3B8EDD50(L_17, L_18, NULL);
		// bannerReklam.LoadAd(ReklamIstegiOlustur());
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_19 = __this->___bannerReklam_12;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_20;
		L_20 = ReklamScript_ReklamIstegiOlustur_m589F56BF49BCFB94676C8B732BD026C31CEE822A(__this, NULL);
		NullCheck(L_19);
		BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF(L_19, L_20, NULL);
		// bannerReklam.Hide();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_21 = __this->___bannerReklam_12;
		NullCheck(L_21);
		BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD(L_21, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::InterstitialReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_InterstitialDelegate_m452E29FB78AED631A6F3E11F3C8BC5C5D60ACE2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_InterstitialYuklenemedi_mFFB0DDE338F2DA360456FD365CD5F637B4451AAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!testModu && string.IsNullOrEmpty(interstitialKimligi))
		bool L_0 = __this->___testModu_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___interstitialKimligi_6;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (interstitialReklam != null && interstitialReklam.IsLoaded())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = __this->___interstitialReklam_13;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_4 = __this->___interstitialReklam_13;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (interstitialReklam != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = __this->___interstitialReklam_13;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// interstitialReklam.Destroy();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_7 = __this->___interstitialReklam_13;
		NullCheck(L_7);
		InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778(L_7, NULL);
	}

IL_003f:
	{
		// if (testModu && (string.IsNullOrEmpty(testDeviceID) || string.IsNullOrEmpty(interstitialKimligi)))
		bool L_8 = __this->___testModu_8;
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_9 = __this->___testDeviceID_9;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_11 = __this->___interstitialKimligi_6;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}

IL_0061:
	{
		// interstitialReklam = new InterstitialAd("ca-app-pub-3940256099942544/1033173712");
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_13 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_13, _stringLiteralC6264F3E99DD53581133B065E278BB5734C025F8, NULL);
		__this->___interstitialReklam_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialReklam_13), (void*)L_13);
		goto IL_0084;
	}

IL_0073:
	{
		// interstitialReklam = new InterstitialAd(interstitialKimligi);
		String_t* L_14 = __this->___interstitialKimligi_6;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_15 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)il2cpp_codegen_object_new(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9(L_15, L_14, NULL);
		__this->___interstitialReklam_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialReklam_13), (void*)L_15);
	}

IL_0084:
	{
		// interstitialReklam.OnAdClosed += InterstitialDelegate;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_16 = __this->___interstitialReklam_13;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_17 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_17, __this, (intptr_t)((void*)ReklamScript_InterstitialDelegate_m452E29FB78AED631A6F3E11F3C8BC5C5D60ACE2E_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF(L_16, L_17, NULL);
		// interstitialReklam.OnAdFailedToLoad += InterstitialYuklenemedi;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_18 = __this->___interstitialReklam_13;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_19 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_19, __this, (intptr_t)((void*)ReklamScript_InterstitialYuklenemedi_mFFB0DDE338F2DA360456FD365CD5F637B4451AAE_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525(L_18, L_19, NULL);
		// interstitialReklam.LoadAd(ReklamIstegiOlustur());
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_20 = __this->___interstitialReklam_13;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_21;
		L_21 = ReklamScript_ReklamIstegiOlustur_m589F56BF49BCFB94676C8B732BD026C31CEE822A(__this, NULL);
		NullCheck(L_20);
		InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117(L_20, L_21, NULL);
		// interstitialIstekTimeoutZamani = Time.realtimeSinceStartup + 10f;
		float L_22;
		L_22 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___interstitialIstekTimeoutZamani_15 = ((float)il2cpp_codegen_add(L_22, (10.0f)));
		// }
		return;
	}
}
// System.Void ReklamScript::RewardedReklamYukle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_RewardedVideoDelegate_m797A3C2E82971F2CF101242A62ACFC4A556CC8EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_RewardedVideoOdullendir_m146AA60E6BC7258A1BDAF4CCAA9DFD6AAC470F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_RewardedVideoYuklenemedi_mB5F4185D818455F92EC0E1568E2942DCF8BBA1E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64B56570F4FE3FE45A614B62D66279D934F4AAC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!testModu && string.IsNullOrEmpty(rewardedVideoKimligi))
		bool L_0 = __this->___testModu_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = __this->___rewardedVideoKimligi_7;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (rewardedVideoReklam != null && rewardedVideoReklam.IsLoaded())
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_3 = __this->___rewardedVideoReklam_14;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_4 = __this->___rewardedVideoReklam_14;
		NullCheck(L_4);
		bool L_5;
		L_5 = RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (rewardedVideoReklam != null)
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_6 = __this->___rewardedVideoReklam_14;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// rewardedVideoReklam.Destroy();
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_7 = __this->___rewardedVideoReklam_14;
		NullCheck(L_7);
		RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319(L_7, NULL);
	}

IL_003f:
	{
		// if (testModu && (string.IsNullOrEmpty(testDeviceID) || string.IsNullOrEmpty(rewardedVideoKimligi)))
		bool L_8 = __this->___testModu_8;
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_9 = __this->___testDeviceID_9;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_11 = __this->___rewardedVideoKimligi_7;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0073;
		}
	}

IL_0061:
	{
		// rewardedVideoReklam = new RewardedAd("ca-app-pub-3940256099942544/5224354917");
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_13 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)il2cpp_codegen_object_new(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD(L_13, _stringLiteral64B56570F4FE3FE45A614B62D66279D934F4AAC1, NULL);
		__this->___rewardedVideoReklam_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoReklam_14), (void*)L_13);
		goto IL_0084;
	}

IL_0073:
	{
		// rewardedVideoReklam = new RewardedAd(rewardedVideoKimligi);
		String_t* L_14 = __this->___rewardedVideoKimligi_7;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_15 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)il2cpp_codegen_object_new(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD(L_15, L_14, NULL);
		__this->___rewardedVideoReklam_14 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoReklam_14), (void*)L_15);
	}

IL_0084:
	{
		// rewardedVideoReklam.OnAdClosed += RewardedVideoDelegate;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_16 = __this->___rewardedVideoReklam_14;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_17 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_17, __this, (intptr_t)((void*)ReklamScript_RewardedVideoDelegate_m797A3C2E82971F2CF101242A62ACFC4A556CC8EE_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50(L_16, L_17, NULL);
		// rewardedVideoReklam.OnAdFailedToLoad += RewardedVideoYuklenemedi;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_18 = __this->___rewardedVideoReklam_14;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_19 = (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)il2cpp_codegen_object_new(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_mDDB8F1F971BE51E1F28C8F8319ECE9774C2BF189(L_19, __this, (intptr_t)((void*)ReklamScript_RewardedVideoYuklenemedi_mB5F4185D818455F92EC0E1568E2942DCF8BBA1E4_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B(L_18, L_19, NULL);
		// rewardedVideoReklam.OnUserEarnedReward += RewardedVideoOdullendir;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_20 = __this->___rewardedVideoReklam_14;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_21 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_21, __this, (intptr_t)((void*)ReklamScript_RewardedVideoOdullendir_m146AA60E6BC7258A1BDAF4CCAA9DFD6AAC470F1E_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989(L_20, L_21, NULL);
		// rewardedVideoReklam.LoadAd(ReklamIstegiOlustur());
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_22 = __this->___rewardedVideoReklam_14;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_23;
		L_23 = ReklamScript_ReklamIstegiOlustur_m589F56BF49BCFB94676C8B732BD026C31CEE822A(__this, NULL);
		NullCheck(L_22);
		RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB(L_22, L_23, NULL);
		// rewardedVideoIstekTimeoutZamani = Time.realtimeSinceStartup + 30f;
		float L_24;
		L_24 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___rewardedVideoIstekTimeoutZamani_16 = ((float)il2cpp_codegen_add(L_24, (30.0f)));
		// }
		return;
	}
}
// GoogleMobileAds.Api.AdRequest ReklamScript::ReklamIstegiOlustur()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ReklamScript_ReklamIstegiOlustur_m589F56BF49BCFB94676C8B732BD026C31CEE822A (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_0 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_0, NULL);
		NullCheck(L_0);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_1;
		L_1 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_0, NULL);
		return L_1;
	}
}
// System.Void ReklamScript::InterstitialDelegate(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InterstitialDelegate_m452E29FB78AED631A6F3E11F3C8BC5C5D60ACE2E (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// InterstitialReklamYukle();
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(__this, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::RewardedVideoDelegate(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedVideoDelegate_m797A3C2E82971F2CF101242A62ACFC4A556CC8EE (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		// RewardedReklamYukle();
		ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C(__this, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::BannerYuklenemedi(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerYuklenemedi_mD3D3C2C799C1A6835DD108FB6F5959AAD2F495AE (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(args.LoadAdError.ToString());
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_0 = ___args1;
		NullCheck(L_0);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_1;
		L_1 = AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// bannerOtomatikYeniIstekZamani = Time.realtimeSinceStartup + 30f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___bannerOtomatikYeniIstekZamani_17 = ((float)il2cpp_codegen_add(L_3, (30.0f)));
		// if (bannerReklam != null)
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_4 = __this->___bannerReklam_12;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// bannerReklam.Destroy();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_5 = __this->___bannerReklam_12;
		NullCheck(L_5);
		BannerView_Destroy_mCD660269DF04D3EA92CC22EC1045B00C1E6CDC01(L_5, NULL);
		// bannerReklam = null;
		__this->___bannerReklam_12 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerReklam_12), (void*)(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::InterstitialYuklenemedi(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InterstitialYuklenemedi_mFFB0DDE338F2DA360456FD365CD5F637B4451AAE (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(args.LoadAdError.ToString());
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_0 = ___args1;
		NullCheck(L_0);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_1;
		L_1 = AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// interstitialOtomatikYeniIstekZamani = Time.realtimeSinceStartup + 30f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___interstitialOtomatikYeniIstekZamani_18 = ((float)il2cpp_codegen_add(L_3, (30.0f)));
		// if (interstitialReklam != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_4 = __this->___interstitialReklam_13;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// interstitialReklam.Destroy();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_5 = __this->___interstitialReklam_13;
		NullCheck(L_5);
		InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778(L_5, NULL);
		// interstitialReklam = null;
		__this->___interstitialReklam_13 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialReklam_13), (void*)(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::RewardedVideoYuklenemedi(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedVideoYuklenemedi_mB5F4185D818455F92EC0E1568E2942DCF8BBA1E4 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(args.LoadAdError.ToString());
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_0 = ___args1;
		NullCheck(L_0);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_1;
		L_1 = AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// rewardedVideoOtomatikYeniIstekZamani = Time.realtimeSinceStartup + 30f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___rewardedVideoOtomatikYeniIstekZamani_19 = ((float)il2cpp_codegen_add(L_3, (30.0f)));
		// if (rewardedVideoReklam != null)
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_4 = __this->___rewardedVideoReklam_14;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// rewardedVideoReklam.Destroy();
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_5 = __this->___rewardedVideoReklam_14;
		NullCheck(L_5);
		RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319(L_5, NULL);
		// rewardedVideoReklam = null;
		__this->___rewardedVideoReklam_14 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoReklam_14), (void*)(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::BannerReklamAl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerReklamAl_mBDFEC73B35A931A7B939DADBA7F27540F7FF0D9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// instance.BannerReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB(L_2, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::BannerGoster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerGoster_m533794B171FC539AE17E00C93B625C59DEF525C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (instance.bannerReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_3 = L_2->___bannerReklam_12;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// instance.BannerReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		ReklamScript_BannerReklamYukle_m247974319B869E264F8B41B20FA1C17064676FDB(L_4, NULL);
		// if (instance.bannerReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_5 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_6 = L_5->___bannerReklam_12;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// instance.bannerReklam.Show();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_7 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_7);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_8 = L_7->___bannerReklam_12;
		NullCheck(L_8);
		BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE(L_8, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::BannerGizle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_BannerGizle_m426485283F2F059807671EA9694B875730D55D54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (instance.bannerReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_3 = L_2->___bannerReklam_12;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// instance.bannerReklam.Hide();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_5 = L_4->___bannerReklam_12;
		NullCheck(L_5);
		BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD(L_5, NULL);
		// }
		return;
	}
}
// System.Boolean ReklamScript::InterstitialHazirMi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReklamScript_InterstitialHazirMi_m9326D0E1FF4AAC2D36140806BB1A9DE60ACBDB8E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if (instance.interstitialReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = L_2->___interstitialReklam_13;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return instance.interstitialReklam.IsLoaded();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_5 = L_4->___interstitialReklam_13;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_5, NULL);
		return L_6;
	}
}
// System.Void ReklamScript::InterstitialReklamAl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InterstitialReklamAl_m94705A921D463FCDA41EDD9965F87C0E395FDB5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// instance.InterstitialReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(L_2, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::InsterstitialGoster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_InsterstitialGoster_m0282F83D65A8A1C36E73F25749D38FE79A19A085 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (instance.interstitialReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = L_2->___interstitialReklam_13;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// instance.InterstitialReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(L_4, NULL);
		// if (instance.interstitialReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_5 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = L_5->___interstitialReklam_13;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// if (instance.interstitialGosterCoroutine != null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_7 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___interstitialGosterCoroutine_20;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// instance.StopCoroutine(instance.interstitialGosterCoroutine);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_9 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_10 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___interstitialGosterCoroutine_20;
		NullCheck(L_9);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_9, L_11, NULL);
		// instance.interstitialGosterCoroutine = null;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_12 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_12);
		L_12->___interstitialGosterCoroutine_20 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___interstitialGosterCoroutine_20), (void*)(RuntimeObject*)NULL);
	}

IL_005c:
	{
		// if (instance.interstitialReklam.IsLoaded())
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_13 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_13);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_14 = L_13->___interstitialReklam_13;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// instance.interstitialReklam.Show();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_16 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_16);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_17 = L_16->___interstitialReklam_13;
		NullCheck(L_17);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_17, NULL);
		return;
	}

IL_007d:
	{
		// if (Time.realtimeSinceStartup >= instance.interstitialIstekTimeoutZamani)
		float L_18;
		L_18 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_19 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_19);
		float L_20 = L_19->___interstitialIstekTimeoutZamani_15;
		if ((!(((float)L_18) >= ((float)L_20))))
		{
			goto IL_0098;
		}
	}
	{
		// instance.InterstitialReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_21 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_21);
		ReklamScript_InterstitialReklamYukle_m1EB3772D5ADDED976AE3E6CBD32E002EE37CC053(L_21, NULL);
	}

IL_0098:
	{
		// instance.interstitialGosterCoroutine = instance.InsterstitialGosterCoroutine();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_22 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_23 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = ReklamScript_InsterstitialGosterCoroutine_m431D6783CB96B394B0455E706341C9900EDCB5F2(L_23, NULL);
		NullCheck(L_22);
		L_22->___interstitialGosterCoroutine_20 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->___interstitialGosterCoroutine_20), (void*)L_24);
		// instance.StartCoroutine(instance.interstitialGosterCoroutine);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_25 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_26 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_26);
		RuntimeObject* L_27 = L_26->___interstitialGosterCoroutine_20;
		NullCheck(L_25);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_25, L_27, NULL);
		// }
		return;
	}
}
// System.Boolean ReklamScript::RewardedReklamHazirMi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReklamScript_RewardedReklamHazirMi_m72F56D81C78B5F717D7395DEBFD56450B0DB10AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// if (instance.rewardedVideoReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_3 = L_2->___rewardedVideoReklam_14;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return instance.rewardedVideoReklam.IsLoaded();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_5 = L_4->___rewardedVideoReklam_14;
		NullCheck(L_5);
		bool L_6;
		L_6 = RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline(L_5, NULL);
		return L_6;
	}
}
// System.Void ReklamScript::RewardedReklamAl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedReklamAl_mE3CD69E15D1D234C384D6F60C10D2AD9950142EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// instance.RewardedReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C(L_2, NULL);
		// }
		return;
	}
}
// System.Void ReklamScript::RewardedReklamGoster(ReklamScript/RewardedVideoOdul)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedReklamGoster_m434E3DC66A693658A0D1727778F7E90C291AA5FB (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* ___odulFonksiyonu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_0 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (instance.rewardedVideoReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_2 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_3 = L_2->___rewardedVideoReklam_14;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		// instance.RewardedReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_4 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C(L_4, NULL);
		// if (instance.rewardedVideoReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_5 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_6 = L_5->___rewardedVideoReklam_14;
		if (L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// if (instance.rewardedVideoGosterCoroutine != null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_7 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_7);
		RuntimeObject* L_8 = L_7->___rewardedVideoGosterCoroutine_21;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// instance.StopCoroutine(instance.rewardedVideoGosterCoroutine);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_9 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_10 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___rewardedVideoGosterCoroutine_21;
		NullCheck(L_9);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_9, L_11, NULL);
		// instance.rewardedVideoGosterCoroutine = null;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_12 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_12);
		L_12->___rewardedVideoGosterCoroutine_21 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___rewardedVideoGosterCoroutine_21), (void*)(RuntimeObject*)NULL);
	}

IL_005c:
	{
		// instance.odulDelegate = odulFonksiyonu;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_13 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* L_14 = ___odulFonksiyonu0;
		NullCheck(L_13);
		L_13->___odulDelegate_22 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___odulDelegate_22), (void*)L_14);
		// if (instance.rewardedVideoReklam.IsLoaded())
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_15 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_15);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_16 = L_15->___rewardedVideoReklam_14;
		NullCheck(L_16);
		bool L_17;
		L_17 = RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		// instance.rewardedVideoReklam.Show();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_18 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_18);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_19 = L_18->___rewardedVideoReklam_14;
		NullCheck(L_19);
		RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948(L_19, NULL);
		return;
	}

IL_0088:
	{
		// if (Time.realtimeSinceStartup >= instance.rewardedVideoIstekTimeoutZamani)
		float L_20;
		L_20 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_21 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_21);
		float L_22 = L_21->___rewardedVideoIstekTimeoutZamani_16;
		if ((!(((float)L_20) >= ((float)L_22))))
		{
			goto IL_00a3;
		}
	}
	{
		// instance.RewardedReklamYukle();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_23 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_23);
		ReklamScript_RewardedReklamYukle_m40930E25A809DFFADBA89E2C27D3C3BF3023838C(L_23, NULL);
	}

IL_00a3:
	{
		// instance.rewardedVideoGosterCoroutine = instance.RewardedVideoGosterCoroutine();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_24 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_25 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = ReklamScript_RewardedVideoGosterCoroutine_m841B0684D85F3AB8A0321EF9965D2B3729A6DAB2(L_25, NULL);
		NullCheck(L_24);
		L_24->___rewardedVideoGosterCoroutine_21 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___rewardedVideoGosterCoroutine_21), (void*)L_26);
		// instance.StartCoroutine(instance.rewardedVideoGosterCoroutine);
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_27 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_28 = ((ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_StaticFields*)il2cpp_codegen_static_fields_for(ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_28);
		RuntimeObject* L_29 = L_28->___rewardedVideoGosterCoroutine_21;
		NullCheck(L_27);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_30;
		L_30 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ReklamScript::InsterstitialGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReklamScript_InsterstitialGosterCoroutine_m431D6783CB96B394B0455E706341C9900EDCB5F2 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* L_0 = (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F*)il2cpp_codegen_object_new(U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInsterstitialGosterCoroutineU3Ed__40__ctor_mBEA29BA8BAC16A6A1FCB7922F96A7952A7FE6778(L_0, 0, NULL);
		U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ReklamScript::RewardedVideoGosterCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReklamScript_RewardedVideoGosterCoroutine_m841B0684D85F3AB8A0321EF9965D2B3729A6DAB2 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* L_0 = (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E*)il2cpp_codegen_object_new(U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRewardedVideoGosterCoroutineU3Ed__41__ctor_m9E2375BAE8DF7374C675BAFA8EE5C72123A07B14(L_0, 0, NULL);
		U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ReklamScript::RewardedVideoOdullendir(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript_RewardedVideoOdullendir_m146AA60E6BC7258A1BDAF4CCAA9DFD6AAC470F1E (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul1, const RuntimeMethod* method) 
{
	{
		// if (odulDelegate != null)
		RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* L_0 = __this->___odulDelegate_22;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// odulDelegate(odul);
		RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* L_1 = __this->___odulDelegate_22;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2 = ___odul1;
		NullCheck(L_1);
		RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_inline(L_1, L_2, NULL);
		// odulDelegate = null;
		__this->___odulDelegate_22 = (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___odulDelegate_22), (void*)(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33*)NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void ReklamScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReklamScript__ctor_mF13E3F2EAE748983E137C929752A382827DC7809 (ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string bannerKimligi = "";
		__this->___bannerKimligi_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerKimligi_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string interstitialKimligi = "";
		__this->___interstitialKimligi_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialKimligi_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string rewardedVideoKimligi = "";
		__this->___rewardedVideoKimligi_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoKimligi_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string testDeviceID = "";
		__this->___testDeviceID_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testDeviceID_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private float bannerOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___bannerOtomatikYeniIstekZamani_17 = (std::numeric_limits<float>::infinity());
		// private float interstitialOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___interstitialOtomatikYeniIstekZamani_18 = (std::numeric_limits<float>::infinity());
		// private float rewardedVideoOtomatikYeniIstekZamani = float.PositiveInfinity;
		__this->___rewardedVideoOtomatikYeniIstekZamani_19 = (std::numeric_limits<float>::infinity());
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_Multicast(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* currentDelegate = reinterpret_cast<RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___odul0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenInst(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	NullCheck(___odul0);
	typedef void (*FunctionPointerType) (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___odul0, method);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenStatic(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___odul0, method);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenStaticInvoker(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(__this->___method_ptr_0, method, NULL, ___odul0);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_ClosedStaticInvoker(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___odul0);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenVirtual(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	NullCheck(___odul0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___odul0);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenInterface(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	NullCheck(___odul0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___odul0);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenGenericVirtual(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	NullCheck(___odul0);
	GenericVirtualActionInvoker0::Invoke(method, ___odul0);
}
void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenGenericInterface(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method)
{
	NullCheck(___odul0);
	GenericInterfaceActionInvoker0::Invoke(method, ___odul0);
}
// System.Void ReklamScript/RewardedVideoOdul::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoOdul__ctor_mDA1FE8E05EFFECE7E42AFE5F059C7258E631B062 (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_Multicast;
}
// System.Void ReklamScript/RewardedVideoOdul::Invoke(GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___odul0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ReklamScript/RewardedVideoOdul::BeginInvoke(GoogleMobileAds.Api.Reward,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoOdul_BeginInvoke_mDB7DD4B363937E190AC5FCAA1FC50E4E64FD55CA (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___odul0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ReklamScript/RewardedVideoOdul::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoOdul_EndInvoke_mECCF4C8D8B9CB55A9E13036288296644DCB3A464 (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReklamScript/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m456990DA6A18AB55FF006D3A6829733910906A14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* L_0 = (U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998*)il2cpp_codegen_object_new(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAF1A146E7B33F7680A1A1EE0FB1D343D8175E6CF(L_0, NULL);
		((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ReklamScript/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAF1A146E7B33F7680A1A1EE0FB1D343D8175E6CF (U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ReklamScript/<>c::<Awake>b__20_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__20_0_mA1A355F7A9E5F2688E9FFDAB2F44AA0EF4F2204C (U3CU3Ec_tF6CFCB5B02A857186CEBF0DCF5DD79B771E6D998* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___reklamDurumu0, const RuntimeMethod* method) 
{
	{
		// MobileAds.Initialize(reklamDurumu => { });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReklamScript/<InsterstitialGosterCoroutine>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__40__ctor_mBEA29BA8BAC16A6A1FCB7922F96A7952A7FE6778 (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ReklamScript/<InsterstitialGosterCoroutine>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__40_System_IDisposable_Dispose_m582428300DB11ADD42B0E55D28EAE6CF8B63027C (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ReklamScript/<InsterstitialGosterCoroutine>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInsterstitialGosterCoroutineU3Ed__40_MoveNext_m9336627A32C954CE6093693B1D4BC9F1FF7942E6 (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float istekTimeoutAni = Time.realtimeSinceStartup + 2.5f;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___U3CistekTimeoutAniU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, (2.5f)));
		goto IL_0061;
	}

IL_0031:
	{
		// if (Time.realtimeSinceStartup > istekTimeoutAni)
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_6 = __this->___U3CistekTimeoutAniU3E5__2_3;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0040:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (interstitialReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_7 = V_1;
		NullCheck(L_7);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_8 = L_7->___interstitialReklam_13;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0061:
	{
		// while (!interstitialReklam.IsLoaded())
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_9 = V_1;
		NullCheck(L_9);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_10 = L_9->___interstitialReklam_13;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// interstitialReklam.Show();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_12 = V_1;
		NullCheck(L_12);
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_13 = L_12->___interstitialReklam_13;
		NullCheck(L_13);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ReklamScript/<InsterstitialGosterCoroutine>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInsterstitialGosterCoroutineU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1AAF1A8A81D2196CE0491D4BF57F694A0D9BD837 (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ReklamScript/<InsterstitialGosterCoroutine>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInsterstitialGosterCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_mF4FAE68103D95A6A5698C2ED84FA13EA004E53D8 (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInsterstitialGosterCoroutineU3Ed__40_System_Collections_IEnumerator_Reset_mF4FAE68103D95A6A5698C2ED84FA13EA004E53D8_RuntimeMethod_var)));
	}
}
// System.Object ReklamScript/<InsterstitialGosterCoroutine>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInsterstitialGosterCoroutineU3Ed__40_System_Collections_IEnumerator_get_Current_m7485500738074342B01028140CB3313ADD703F1D (U3CInsterstitialGosterCoroutineU3Ed__40_t5744558FF5B464A699CA80FBDBF8AA8B69554C0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReklamScript/<RewardedVideoGosterCoroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRewardedVideoGosterCoroutineU3Ed__41__ctor_m9E2375BAE8DF7374C675BAFA8EE5C72123A07B14 (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ReklamScript/<RewardedVideoGosterCoroutine>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRewardedVideoGosterCoroutineU3Ed__41_System_IDisposable_Dispose_m9451A281FD0855B7F76D66B09F8F2F53B5414377 (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ReklamScript/<RewardedVideoGosterCoroutine>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRewardedVideoGosterCoroutineU3Ed__41_MoveNext_mCB0886D2E76BBCD8E6CF319029D1AFBDB04CE987 (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float istekTimeoutAni = Time.realtimeSinceStartup + 10f;
		float L_4;
		L_4 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		__this->___U3CistekTimeoutAniU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, (10.0f)));
		goto IL_0061;
	}

IL_0031:
	{
		// if (Time.realtimeSinceStartup > istekTimeoutAni)
		float L_5;
		L_5 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_6 = __this->___U3CistekTimeoutAniU3E5__2_3;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0040;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0040:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0050:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (rewardedVideoReklam == null)
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_7 = V_1;
		NullCheck(L_7);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_8 = L_7->___rewardedVideoReklam_14;
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0061:
	{
		// while (!rewardedVideoReklam.IsLoaded())
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_9 = V_1;
		NullCheck(L_9);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_10 = L_9->___rewardedVideoReklam_14;
		NullCheck(L_10);
		bool L_11;
		L_11 = RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// rewardedVideoReklam.Show();
		ReklamScript_t218030CD4F209539B2F53B72991FF56A787181BD* L_12 = V_1;
		NullCheck(L_12);
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_13 = L_12->___rewardedVideoReklam_14;
		NullCheck(L_13);
		RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948(L_13, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ReklamScript/<RewardedVideoGosterCoroutine>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRewardedVideoGosterCoroutineU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m80DB1111A35E9A42E11D229EA9BB80AACB8F79AC (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ReklamScript/<RewardedVideoGosterCoroutine>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRewardedVideoGosterCoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m7E3B1F66DF1EE011D78D85FC6A603B21A7B14D47 (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRewardedVideoGosterCoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m7E3B1F66DF1EE011D78D85FC6A603B21A7B14D47_RuntimeMethod_var)));
	}
}
// System.Object ReklamScript/<RewardedVideoGosterCoroutine>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRewardedVideoGosterCoroutineU3Ed__41_System_Collections_IEnumerator_get_Current_mCADC97E851D9A213CB1BB28B26B13AF9B84C855F (U3CRewardedVideoGosterCoroutineU3Ed__41_tB295CC5748C67F3AA00483FF7525FA32891E601E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckConnection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnection_Awake_mBE57F06B9A0486940FA2DB7A1BBB5B21EA6BF9BF (CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null)
		CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95* L_0 = ((CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_StaticFields*)il2cpp_codegen_static_fields_for(CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _instance = this;
		((CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_StaticFields*)il2cpp_codegen_static_fields_for(CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_StaticFields*)il2cpp_codegen_static_fields_for(CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		return;
	}

IL_001a:
	{
		// else if (this != _instance)
		CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95* L_2 = ((CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_StaticFields*)il2cpp_codegen_static_fields_for(CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void CheckConnection::Internet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnection_Internet_m9CB8E762E66E9F748D3C2296A073CDCD5F67A42D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF3FF5A8839F7ED5940B7F6FD613B5E25FF70134);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if ((Application.internetReachability == NetworkReachability.NotReachable) && SceneManager.GetActiveScene().name != "Check Connection")
		int32_t L_0;
		L_0 = Application_get_internetReachability_m3FECA8BA005340369BB952CE8CDF3E1A53F3BA0E(NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteralDF3FF5A8839F7ED5940B7F6FD613B5E25FF70134, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// SceneManager.LoadScene("Check Connection");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDF3FF5A8839F7ED5940B7F6FD613B5E25FF70134, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void CheckConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnection__ctor_mDB867DC2CA4577573FD10AF198DD8446B47BA40C (CheckConnection_t51DA5B564B634C247A5085F8FCFBF705E9D1DA95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ads::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ads__cctor_m623D05EA7FD867A3B9984DD22E5BEDE96C8D3D4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4435410EBFA63F78AB2C030AD00D75186663C6CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral468C1F43F0BCD29F7C0500B7F643B09B475B1A64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral730A9E45E394CF5B43EDA0A689174C9323AFD544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC741B20BE9565341C9027ABE3FDD4DA5ED73833);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAB54FA0D68EBA98291C5261C1BC614AC9822D5D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string AppId = "ca-app-pub-8607563118820126~1949603463";
		((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___AppId_0 = _stringLiteral730A9E45E394CF5B43EDA0A689174C9323AFD544;
		Il2CppCodeGenWriteBarrier((void**)(&((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___AppId_0), (void*)_stringLiteral730A9E45E394CF5B43EDA0A689174C9323AFD544);
		// public static string BannerId = "ca-app-pub-8607563118820126/2737394347";
		((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___BannerId_1 = _stringLiteral4435410EBFA63F78AB2C030AD00D75186663C6CA;
		Il2CppCodeGenWriteBarrier((void**)(&((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___BannerId_1), (void*)_stringLiteral4435410EBFA63F78AB2C030AD00D75186663C6CA);
		// public static string InterstitialId = "ca-app-pub-8607563118820126/2541953220";
		((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___InterstitialId_2 = _stringLiteral468C1F43F0BCD29F7C0500B7F643B09B475B1A64;
		Il2CppCodeGenWriteBarrier((void**)(&((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___InterstitialId_2), (void*)_stringLiteral468C1F43F0BCD29F7C0500B7F643B09B475B1A64);
		// public static string RewardedId = "ca-app-pub-8607563118820126/7602708219";
		((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___RewardedId_3 = _stringLiteralFAB54FA0D68EBA98291C5261C1BC614AC9822D5D;
		Il2CppCodeGenWriteBarrier((void**)(&((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___RewardedId_3), (void*)_stringLiteralFAB54FA0D68EBA98291C5261C1BC614AC9822D5D);
		// public static string TestDeviceId = "3b8d5db2-24eb-402c-9942-388f7ce0f639";
		((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___TestDeviceId_4 = _stringLiteralBC741B20BE9565341C9027ABE3FDD4DA5ED73833;
		Il2CppCodeGenWriteBarrier((void**)(&((Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_StaticFields*)il2cpp_codegen_static_fields_for(Ads_t3FD14A2AF9C7FA3B10EF2D4571248E85A695C040_il2cpp_TypeInfo_var))->___TestDeviceId_4), (void*)_stringLiteralBC741B20BE9565341C9027ABE3FDD4DA5ED73833);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rewards::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewards__cctor_mB849EF8F5902200B9954E70266E82CDA9AD8B4ED (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F18E96109098019B1A1C6389CE8520EFF459A6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13587311A842583807BFDCE45EAA841B29066BF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B45D0E2BDA957C0565220FAFBFB6E0B1533D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600ADB1F6C89902F8E385035C72B25C2A4553294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66334937258227FC0AABAF92C3CDDAC8708AACEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761B0900848A3BEC36C33D72E854D9968F060D70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C3A73E94A9BCD28352F3B27306829292859EBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA82CC61A934CA3F63179AE683C3C24296FC3958C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBC8AECE81D9B93F6B47F1105A6273DC763DFC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E2A45A55328680F1D37A474030E3E89BE6CE67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string[] Minute = {
		//     "Hery?ne 250 DK",
		//     "Hery?ne 500 DK",
		//     "Hery?ne 750 DK",
		//     "Hery?ne 1000 DK"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral39B45D0E2BDA957C0565220FAFBFB6E0B1533D44);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral39B45D0E2BDA957C0565220FAFBFB6E0B1533D44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA82CC61A934CA3F63179AE683C3C24296FC3958C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA82CC61A934CA3F63179AE683C3C24296FC3958C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral761B0900848A3BEC36C33D72E854D9968F060D70);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral761B0900848A3BEC36C33D72E854D9968F060D70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralB5E2A45A55328680F1D37A474030E3E89BE6CE67);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB5E2A45A55328680F1D37A474030E3E89BE6CE67);
		((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Minute_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Minute_0), (void*)L_4);
		// public static string[] Internet = {
		//     "1 GB ?nternet",
		//     "2 GB ?nternet",
		//     "4 GB ?nternet",
		//     "8 GB ?nternet",
		//     "16 GB ?nternet",
		//     "50 GB ?nternet"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0F18E96109098019B1A1C6389CE8520EFF459A6E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0F18E96109098019B1A1C6389CE8520EFF459A6E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA0C3A73E94A9BCD28352F3B27306829292859EBA);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA0C3A73E94A9BCD28352F3B27306829292859EBA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral600ADB1F6C89902F8E385035C72B25C2A4553294);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral600ADB1F6C89902F8E385035C72B25C2A4553294);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral13587311A842583807BFDCE45EAA841B29066BF2);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral13587311A842583807BFDCE45EAA841B29066BF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralAFBC8AECE81D9B93F6B47F1105A6273DC763DFC3);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAFBC8AECE81D9B93F6B47F1105A6273DC763DFC3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral66334937258227FC0AABAF92C3CDDAC8708AACEF);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral66334937258227FC0AABAF92C3CDDAC8708AACEF);
		((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Internet_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Internet_1), (void*)L_11);
		// public static string[][] Suprise = { Minute, Internet };
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_12 = (StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)SZArrayNew(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_13 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Minute_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_14);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_15 = L_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Internet_1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_16);
		((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Suprise_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Suprise_2), (void*)L_15);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CheckConnectionSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnectionSceneManager_Start_mCB72245AD63E56E257FC51EF5F3EF6EC891E52A9 (CheckConnectionSceneManager_t0DAF16E598FBA3BDE097C3105F548FDB2A7EE2BF* __this, const RuntimeMethod* method) 
{
	{
		// ReklamScript.BannerGizle();
		ReklamScript_BannerGizle_m426485283F2F059807671EA9694B875730D55D54(NULL);
		// }
		return;
	}
}
// System.Void CheckConnectionSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnectionSceneManager_Update_m5D33016A0114E83C916BCAA29839506ECF244406 (CheckConnectionSceneManager_t0DAF16E598FBA3BDE097C3105F548FDB2A7EE2BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(Application.internetReachability == NetworkReachability.NotReachable))
		int32_t L_0;
		L_0 = Application_get_internetReachability_m3FECA8BA005340369BB952CE8CDF3E1A53F3BA0E(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// SceneManager.LoadScene("Splash");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void CheckConnectionSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckConnectionSceneManager__ctor_mC6E801059DA780A2EA816F28D09CDF66042C9188 (CheckConnectionSceneManager_t0DAF16E598FBA3BDE097C3105F548FDB2A7EE2BF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneManager_Start_m6276D88EF6FCADBFF3E09151F78FC3D5EDE0396C (MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11* __this, const RuntimeMethod* method) 
{
	{
		// _adShowed = false;
		__this->____adShowed_9 = (bool)0;
		// }
		return;
	}
}
// System.Void MainSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneManager_Update_mF218AE07F5563BA7DF273F84E399DF1C4B56CFAA (MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84AC7CD4F053B7B36284E00B7B98F4D129938F7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9715992324C239118698F860C6BC3B4D56C34CF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _spinned = wheel.GetComponent<WheelManager>().spinned;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wheel_6;
		NullCheck(L_0);
		WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* L_1;
		L_1 = GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B(L_0, GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___spinned_10;
		__this->____spinned_7 = L_2;
		// _stopped = wheel.GetComponent<WheelManager>().stopped;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___wheel_6;
		NullCheck(L_3);
		WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* L_4;
		L_4 = GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B(L_3, GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = L_4->___stopped_11;
		__this->____stopped_8 = L_5;
		// if (_spinned && _stopped)
		bool L_6 = __this->____spinned_7;
		if (!L_6)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_7 = __this->____stopped_8;
		if (!L_7)
		{
			goto IL_00a0;
		}
	}
	{
		// if (ReklamScript.InterstitialHazirMi())
		bool L_8;
		L_8 = ReklamScript_InterstitialHazirMi_m9326D0E1FF4AAC2D36140806BB1A9DE60ACBDB8E(NULL);
		if (!L_8)
		{
			goto IL_0090;
		}
	}
	{
		// playArea.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___playArea_5;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// informationText.GetComponent<TextMeshProUGUI>().text = "Reklam y?kleniyor<br>L?tfen bekleyin...";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___informationText_4;
		NullCheck(L_10);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11;
		L_11 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_10, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_11, _stringLiteral84AC7CD4F053B7B36284E00B7B98F4D129938F7B);
		// informationText.GetComponent<TextMeshProUGUI>().rectTransform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___informationText_4;
		NullCheck(L_12);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13;
		L_13 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_12, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = TMP_Text_get_rectTransform_m22DC10116809BEB2C66047A55337A588ED023EBF(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// Invoke("ShowInterstitialAd", 3f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral4CEA8A0063213A8412FA6B1C943CA05E38FD880E, (3.0f), NULL);
		goto IL_00a0;
	}

IL_0090:
	{
		// Invoke("OpenRewardScene", 1f);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral9715992324C239118698F860C6BC3B4D56C34CF3, (1.0f), NULL);
	}

IL_00a0:
	{
		// CheckConnection.Internet();
		CheckConnection_Internet_m9CB8E762E66E9F748D3C2296A073CDCD5F67A42D(NULL);
		// }
		return;
	}
}
// System.Void MainSceneManager::OpenRewardScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneManager_OpenRewardScene_mDD137A52231EE9053A0B3DFBA62C1700D4A79FFC (MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OpenRewardScene() => SceneManager.LoadScene("Reward");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		return;
	}
}
// System.Void MainSceneManager::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneManager_ShowInterstitialAd_m37AE17C456FA3D9F9D422B4F754A93A185E38BFD (MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11* __this, const RuntimeMethod* method) 
{
	{
		// if (!_adShowed)
		bool L_0 = __this->____adShowed_9;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _adShowed = true;
		__this->____adShowed_9 = (bool)1;
		// ReklamScript.InsterstitialGoster();
		ReklamScript_InsterstitialGoster_m0282F83D65A8A1C36E73F25749D38FE79A19A085(NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void MainSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainSceneManager__ctor_m95BCD359BC62C37E439FC08106D732E45CB3ED15 (MainSceneManager_t2F2712E5EB10191218B192CD127BC3D1DE8FDD11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PinManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManager_FixedUpdate_m129FDB66CADD694D843676EA95475F8AE9576011 (PinManager_t92EAAC20D1F726085CEA801003D3D1EB83D4970F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spinning = wheel.GetComponent<WheelManager>().spinning;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___wheel_4;
		NullCheck(L_0);
		WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* L_1;
		L_1 = GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B(L_0, GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___spinning_9;
		__this->___spinning_6 = L_2;
		// stopped = wheel.GetComponent<WheelManager>().stopped;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___wheel_4;
		NullCheck(L_3);
		WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* L_4;
		L_4 = GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B(L_3, GameObject_GetComponent_TisWheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F_m96084D11017F21156233190996716FE47A0A9A2B_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5 = L_4->___stopped_11;
		__this->___stopped_7 = L_5;
		// _animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->____animator_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_5), (void*)L_6);
		// PlayerPrefs.SetString("Reward", reward);
		String_t* L_7 = __this->___reward_8;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, L_7, NULL);
		// }
		return;
	}
}
// System.Void PinManager::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManager_OnTriggerStay2D_m71931823B239611A18F6E7CE78CD326192A74328 (PinManager_t92EAAC20D1F726085CEA801003D3D1EB83D4970F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Reward") reward = collision.name;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (collision.tag == "Reward") reward = collision.name;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___collision0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		__this->___reward_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reward_8), (void*)L_4);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PinManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinManager__ctor_mC735AF0E2FF2DCBB85424CC43C8A2CBEE51FF275 (PinManager_t92EAAC20D1F726085CEA801003D3D1EB83D4970F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RewardSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_Start_m4310DABB0B8A3E227386E2008DA8DA1EEF7502BA (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23944589E023D0A0258E2E545E718AB596D1961C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C9C58DB0129F653114CC5CBB6822BC5B8D684DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36651C8D3EDB278236C4DE93091354F5B7E7D2A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D7688F1B3D586B2CF1F643CCE1C19F100E96C7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral783EBC98D395616FDE498393410E9DCF0DDCCF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81893B86112D00455EFF405FF34F8F7E4946A18C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral924E891A0CCB64C9042885034EBF0FB618475577);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3CC1759A2D681CEDD335DC23B604CDEFC3C4FC);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B11_0 = NULL;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B12_1 = NULL;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B14_0 = NULL;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* G_B15_1 = NULL;
	{
		// Debug.Log(PlayerPrefs.GetString("Reward"));
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// _giftOutlineAnimationLength = giftOutline
		//     .GetComponent<Animator>()
		//     .runtimeAnimatorController.animationClips[0].length;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___giftOutline_5;
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_1, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_3;
		L_3 = Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8(L_2, NULL);
		NullCheck(L_3);
		AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* L_4;
		L_4 = RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		float L_7;
		L_7 = AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41(L_6, NULL);
		__this->____giftOutlineAnimationLength_9 = L_7;
		// switch (PlayerPrefs.GetString("Reward"))
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral783EBC98D395616FDE498393410E9DCF0DDCCF79, NULL);
		if (L_10)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral23944589E023D0A0258E2E545E718AB596D1961C, NULL);
		if (L_12)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral6D7688F1B3D586B2CF1F643CCE1C19F100E96C7E, NULL);
		if (L_14)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral36651C8D3EDB278236C4DE93091354F5B7E7D2A1, NULL);
		if (L_16)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00da;
	}

IL_0072:
	{
		// reward = "Hediye kazanamad?n?z.<br>L?tfen tekrar deneyin.";
		__this->___reward_7 = _stringLiteral81893B86112D00455EFF405FF34F8F7E4946A18C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reward_7), (void*)_stringLiteral81893B86112D00455EFF405FF34F8F7E4946A18C);
		// break;
		goto IL_00da;
	}

IL_007f:
	{
		// reward = Rewards.Minute[Random.Range(0, Rewards.Minute.Length)];
		il2cpp_codegen_runtime_class_init_inline(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Minute_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Minute_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		NullCheck(L_17);
		int32_t L_20 = L_19;
		String_t* L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->___reward_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reward_7), (void*)L_21);
		// break;
		goto IL_00da;
	}

IL_009a:
	{
		// reward = Rewards.Internet[Random.Range(0, Rewards.Internet.Length)];
		il2cpp_codegen_runtime_class_init_inline(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Internet_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Internet_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		NullCheck(L_22);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___reward_7 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reward_7), (void*)L_26);
		// break;
		goto IL_00da;
	}

IL_00b5:
	{
		// string[] _suprise = Rewards.Suprise[Random.Range(0, Rewards.Suprise.Length)];
		il2cpp_codegen_runtime_class_init_inline(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var);
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_27 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Suprise_2;
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_28 = ((Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_StaticFields*)il2cpp_codegen_static_fields_for(Rewards_t0337BD781035E3B826EE5B35CF8B9562C691A5FC_il2cpp_TypeInfo_var))->___Suprise_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_28)->max_length)), NULL);
		NullCheck(L_27);
		int32_t L_30 = L_29;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = L_31;
		// reward = _suprise[Random.Range(0, _suprise.Length)];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_33)->max_length)), NULL);
		NullCheck(L_32);
		int32_t L_35 = L_34;
		String_t* L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		__this->___reward_7 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reward_7), (void*)L_36);
	}

IL_00da:
	{
		// reward = PlayerPrefs.GetString("Reward") != "Bos" ? reward + "<br>Hediye kazand?n?z." : reward;
		String_t* L_37;
		L_37 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		bool L_38;
		L_38 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_37, _stringLiteral783EBC98D395616FDE498393410E9DCF0DDCCF79, NULL);
		G_B10_0 = __this;
		if (L_38)
		{
			G_B11_0 = __this;
			goto IL_00f9;
		}
	}
	{
		String_t* L_39 = __this->___reward_7;
		G_B12_0 = L_39;
		G_B12_1 = G_B10_0;
		goto IL_0109;
	}

IL_00f9:
	{
		String_t* L_40 = __this->___reward_7;
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_40, _stringLiteralCC3CC1759A2D681CEDD335DC23B604CDEFC3C4FC, NULL);
		G_B12_0 = L_41;
		G_B12_1 = G_B11_0;
	}

IL_0109:
	{
		NullCheck(G_B12_1);
		G_B12_1->___reward_7 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___reward_7), (void*)G_B12_0);
		// giftText.GetComponent<TextMeshProUGUI>().text = reward;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___giftText_4;
		NullCheck(L_42);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43;
		L_43 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_42, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		String_t* L_44 = __this->___reward_7;
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_43, L_44);
		// Invoke("ShowGiftText", _giftOutlineAnimationLength + 0.1f);
		float L_45 = __this->____giftOutlineAnimationLength_9;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral924E891A0CCB64C9042885034EBF0FB618475577, ((float)il2cpp_codegen_add(L_45, (0.100000001f))), NULL);
		// Invoke("ShowGiftBox", _giftOutlineAnimationLength + 0.1f);
		float L_46 = __this->____giftOutlineAnimationLength_9;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral2C9C58DB0129F653114CC5CBB6822BC5B8D684DD, ((float)il2cpp_codegen_add(L_46, (0.100000001f))), NULL);
		// adReward = PlayerPrefs.HasKey("AdReward") ? PlayerPrefs.GetInt("AdReward") : 0;
		bool L_47;
		L_47 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, NULL);
		G_B13_0 = __this;
		if (L_47)
		{
			G_B14_0 = __this;
			goto IL_0162;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_016c;
	}

IL_0162:
	{
		int32_t L_48;
		L_48 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, NULL);
		G_B15_0 = L_48;
		G_B15_1 = G_B14_0;
	}

IL_016c:
	{
		NullCheck(G_B15_1);
		G_B15_1->___adReward_11 = G_B15_0;
		// if (!PlayerPrefs.HasKey("AdReward")) PlayerPrefs.SetInt("AdReward", 0);
		bool L_49;
		L_49 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, NULL);
		if (L_49)
		{
			goto IL_0188;
		}
	}
	{
		// if (!PlayerPrefs.HasKey("AdReward")) PlayerPrefs.SetInt("AdReward", 0);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, 0, NULL);
	}

IL_0188:
	{
		// }
		return;
	}
}
// System.Void RewardSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_Update_m5ED37F46B8C1E2F96DC85D02289E31E50C7BF9A7 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	{
		// RevardedVideoButtonStatus();
		RewardSceneManager_RevardedVideoButtonStatus_m77AEDC062A12A88ADA08F4A6F20CA06CEA2ECEC3(__this, NULL);
		// }
		return;
	}
}
// System.Void RewardSceneManager::ShowGiftText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_ShowGiftText_mB514AD4534D09AB222A5E177D6E368D9F3378494 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	{
		// void ShowGiftText() => giftText.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___giftText_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void RewardSceneManager::ShowGiftBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_ShowGiftBox_m47833A61F4E43900D9FE41C28CC6A275353A8A3D (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	{
		// void ShowGiftBox() => giftBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___giftBox_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		return;
	}
}
// System.Void RewardSceneManager::RevardedVideoButtonStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_RevardedVideoButtonStatus_m77AEDC062A12A88ADA08F4A6F20CA06CEA2ECEC3 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* V_0 = NULL;
	int32_t V_1 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_3 = NULL;
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B2_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_3 = NULL;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	float G_B4_3 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_4 = NULL;
	{
		// rewardedVideoButton.interactable = ReklamScript.RewardedReklamHazirMi();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___rewardedVideoButton_8;
		bool L_1;
		L_1 = ReklamScript_RewardedReklamHazirMi_m72F56D81C78B5F717D7395DEBFD56450B0DB10AF(NULL);
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, L_1, NULL);
		// foreach (var rewardedVideoButtonImage in rewardedVideoButtonImages)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_2 = __this->___rewardedVideoButtonImages_10;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0068;
	}

IL_001b:
	{
		// foreach (var rewardedVideoButtonImage in rewardedVideoButtonImages)
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		//  rewardedVideoButtonImage.color = new Color(
		//      rewardedVideoButtonImage.color.r,
		//      rewardedVideoButtonImage.color.g,
		//      rewardedVideoButtonImage.color.b,
		//      rewardedVideoButton.interactable ? 1 : 0.5f
		// );
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = V_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = V_2;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = V_2;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		float L_13 = L_12.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_2;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		float L_16 = L_15.___b_2;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___rewardedVideoButton_8;
		NullCheck(L_17);
		bool L_18;
		L_18 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_17, NULL);
		G_B2_0 = L_16;
		G_B2_1 = L_13;
		G_B2_2 = L_10;
		G_B2_3 = L_7;
		if (L_18)
		{
			G_B3_0 = L_16;
			G_B3_1 = L_13;
			G_B3_2 = L_10;
			G_B3_3 = L_7;
			goto IL_0055;
		}
	}
	{
		G_B4_0 = (0.5f);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		goto IL_005a;
	}

IL_0055:
	{
		G_B4_0 = (1.0f);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
	}

IL_005a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), G_B4_3, G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/NULL);
		NullCheck(G_B4_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B4_4, L_19);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0068:
	{
		// foreach (var rewardedVideoButtonImage in rewardedVideoButtonImages)
		int32_t L_21 = V_1;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RewardSceneManager::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_ShowRewardedAd_mC20001F630B371488CAADCFBD3C867B31F385B35 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardSceneManager_Rewarded_mC00AD812C86EE6F5B70AA514DDD039DA9F7B098D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ReklamScript.RewardedReklamGoster(Rewarded);
		RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* L_0 = (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33*)il2cpp_codegen_object_new(RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RewardedVideoOdul__ctor_mDA1FE8E05EFFECE7E42AFE5F059C7258E631B062(L_0, __this, (intptr_t)((void*)RewardSceneManager_Rewarded_mC00AD812C86EE6F5B70AA514DDD039DA9F7B098D_RuntimeMethod_var), NULL);
		ReklamScript_RewardedReklamGoster_m434E3DC66A693658A0D1727778F7E90C291AA5FB(L_0, NULL);
		// }
		return;
	}
}
// System.Void RewardSceneManager::Rewarded(GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_Rewarded_mC00AD812C86EE6F5B70AA514DDD039DA9F7B098D (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___reward0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("AdReward", PlayerPrefs.GetInt("AdReward") + (int)reward.Amount);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, NULL);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_1 = ___reward0;
		NullCheck(L_1);
		double L_2;
		L_2 = Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline(L_1, NULL);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral88CA4D217AF63133B17B92A468E3DB4584A60321, ((int32_t)il2cpp_codegen_add(L_0, il2cpp_codegen_cast_double_to_int<int32_t>(L_2))), NULL);
		// SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// }
		return;
	}
}
// System.Void RewardSceneManager::ExitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_ExitApp_mA20F9A153A83F7C984F6C966AB0AE26872A95E11 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	{
		// public void ExitApp() => Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		return;
	}
}
// System.Void RewardSceneManager::ShareApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager_ShareApp_mC7A17EC27996B371789FED36A9BC57A465826D25 (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ShareApp() => SceneManager.LoadScene("Splash");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC7E5CB280F46702A2E449EEDB461FDCD37D7C894, NULL);
		return;
	}
}
// System.Void RewardSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardSceneManager__ctor_m920AB7705F8828020DD8E3923E86CCC0120C1CFB (RewardSceneManager_tED2C167AC279B7AC1886D39343CB04DE134C7AA4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SplashSceneManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSceneManager_Start_mD2D1763997B64CCB1AE3AE4F0DBE9CF764F7C08F (SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* __this, const RuntimeMethod* method) 
{
	{
		// slider.maxValue = sliderMaxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___slider_4;
		int32_t L_1 = __this->___sliderMaxValue_6;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, ((float)L_1), NULL);
		// }
		return;
	}
}
// System.Void SplashSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSceneManager_Update_m401DE9AC8DF6319DE7DBE6804033D5803773E743 (SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49E0495FD767F7FAEFC53BF3805DADE1AF914388);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA25D578232E42FE2BC9341568F478588EF38B9E3);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B2_0 = NULL;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B3_1 = NULL;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B5_0 = NULL;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* G_B6_1 = NULL;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B8_0 = NULL;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* G_B9_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B11_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B12_1 = NULL;
	{
		// _sliderValue = _sliderValue < sliderMaxValue ? _sliderValue += Time.deltaTime : sliderMaxValue;
		float L_0 = __this->____sliderValue_7;
		int32_t L_1 = __this->___sliderMaxValue_6;
		G_B1_0 = __this;
		if ((((float)L_0) < ((float)((float)L_1))))
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->___sliderMaxValue_6;
		G_B3_0 = ((float)L_2);
		G_B3_1 = G_B1_0;
		goto IL_002e;
	}

IL_0019:
	{
		float L_3 = __this->____sliderValue_7;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5 = ((float)il2cpp_codegen_add(L_3, L_4));
		V_0 = L_5;
		__this->____sliderValue_7 = L_5;
		float L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_002e:
	{
		NullCheck(G_B3_1);
		G_B3_1->____sliderValue_7 = G_B3_0;
		// _sliderValue = _sliderValue < sliderMaxValue ? _sliderValue += Time.deltaTime : sliderMaxValue;
		float L_7 = __this->____sliderValue_7;
		int32_t L_8 = __this->___sliderMaxValue_6;
		G_B4_0 = __this;
		if ((((float)L_7) < ((float)((float)L_8))))
		{
			G_B5_0 = __this;
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->___sliderMaxValue_6;
		G_B6_0 = ((float)L_9);
		G_B6_1 = G_B4_0;
		goto IL_0061;
	}

IL_004c:
	{
		float L_10 = __this->____sliderValue_7;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = ((float)il2cpp_codegen_add(L_10, L_11));
		V_0 = L_12;
		__this->____sliderValue_7 = L_12;
		float L_13 = V_0;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
	}

IL_0061:
	{
		NullCheck(G_B6_1);
		G_B6_1->____sliderValue_7 = G_B6_0;
		// slider.value = slider.value < sliderMaxValue ? _sliderValue : sliderMaxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___slider_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = __this->___slider_4;
		NullCheck(L_15);
		float L_16;
		L_16 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_15);
		int32_t L_17 = __this->___sliderMaxValue_6;
		G_B7_0 = L_14;
		if ((((float)L_16) < ((float)((float)L_17))))
		{
			G_B8_0 = L_14;
			goto IL_0089;
		}
	}
	{
		int32_t L_18 = __this->___sliderMaxValue_6;
		G_B9_0 = ((float)L_18);
		G_B9_1 = G_B7_0;
		goto IL_008f;
	}

IL_0089:
	{
		float L_19 = __this->____sliderValue_7;
		G_B9_0 = L_19;
		G_B9_1 = G_B8_0;
	}

IL_008f:
	{
		NullCheck(G_B9_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, G_B9_1, G_B9_0);
		// progress = (int)((_sliderValue / sliderMaxValue) * 100);
		float L_20 = __this->____sliderValue_7;
		int32_t L_21 = __this->___sliderMaxValue_6;
		__this->___progress_8 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)(L_20/((float)L_21))), (100.0f))));
		// loading.text = (_sliderValue < (sliderMaxValue / 2)) ? "Ba?lant? kuruluyor" : "Y?kleniyor";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = __this->___loading_5;
		float L_23 = __this->____sliderValue_7;
		int32_t L_24 = __this->___sliderMaxValue_6;
		G_B10_0 = L_22;
		if ((((float)L_23) < ((float)((float)((int32_t)(L_24/2))))))
		{
			G_B11_0 = L_22;
			goto IL_00cd;
		}
	}
	{
		G_B12_0 = _stringLiteralA25D578232E42FE2BC9341568F478588EF38B9E3;
		G_B12_1 = G_B10_0;
		goto IL_00d2;
	}

IL_00cd:
	{
		G_B12_0 = _stringLiteral49E0495FD767F7FAEFC53BF3805DADE1AF914388;
		G_B12_1 = G_B11_0;
	}

IL_00d2:
	{
		NullCheck(G_B12_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B12_1, G_B12_0);
		// if (_sliderValue >= sliderMaxValue) SceneManager.LoadScene("Main");
		float L_25 = __this->____sliderValue_7;
		int32_t L_26 = __this->___sliderMaxValue_6;
		if ((!(((float)L_25) >= ((float)((float)L_26)))))
		{
			goto IL_00f0;
		}
	}
	{
		// if (_sliderValue >= sliderMaxValue) SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
	}

IL_00f0:
	{
		// CheckConnection.Internet();
		CheckConnection_Internet_m9CB8E762E66E9F748D3C2296A073CDCD5F67A42D(NULL);
		// }
		return;
	}
}
// System.Void SplashSceneManager::ChangeScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSceneManager_ChangeScene_m4724183C28EDDBB7A3B6A41E8D37012D8A0FDB88 (SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, NULL);
		// }
		return;
	}
}
// System.Void SplashSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSceneManager__ctor_m02E67EC93FCB7613CB35CDF05B2B800123AD25FE (SplashSceneManager_t4D3B587DFC0728C6186E66EF4925872461FAD572* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WheelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelManager_Start_mDD91EFFC064FCB7A3B43FCA918895749B872BC62 (WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outlineAnimator = outline.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___outline_4;
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->____outlineAnimator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outlineAnimator_6), (void*)L_1);
		// _pinAnimator = pin.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pin_5;
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->____pinAnimator_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinAnimator_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void WheelManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelManager_FixedUpdate_mECFC31827C3CC2BBFD30D3AE1C1E4BEE1EA613D1 (WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D11B266DD59F6153581EB126F6FDA89FB7CA2C5);
		s_Il2CppMethodInitialized = true;
	}
	WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* G_B4_0 = NULL;
	WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* G_B5_1 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B7_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B8_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B14_1 = NULL;
	{
		// if (spinning)
		bool L_0 = __this->___spinning_9;
		if (!L_0)
		{
			goto IL_01a9;
		}
	}
	{
		// _time += Time.deltaTime;
		float L_1 = __this->____time_12;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____time_12 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (_time > 5)
		float L_3 = __this->____time_12;
		if ((!(((float)L_3) > ((float)(5.0f)))))
		{
			goto IL_00af;
		}
	}
	{
		// spinned = true;
		__this->___spinned_10 = (bool)1;
		// stopped = spinningSpeed == 0;
		float L_4 = __this->___spinningSpeed_8;
		__this->___stopped_11 = (bool)((((float)L_4) == ((float)(0.0f)))? 1 : 0);
		// spinningSpeed = spinningSpeed < 0 ? spinningSpeed + (_time / 5) : 0;
		float L_5 = __this->___spinningSpeed_8;
		G_B3_0 = __this;
		if ((((float)L_5) < ((float)(0.0f))))
		{
			G_B4_0 = __this;
			goto IL_005c;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B3_0;
		goto IL_006f;
	}

IL_005c:
	{
		float L_6 = __this->___spinningSpeed_8;
		float L_7 = __this->____time_12;
		G_B5_0 = ((float)il2cpp_codegen_add(L_6, ((float)(L_7/(5.0f)))));
		G_B5_1 = G_B4_0;
	}

IL_006f:
	{
		NullCheck(G_B5_1);
		G_B5_1->___spinningSpeed_8 = G_B5_0;
		// _pinAnimator.speed = _pinAnimator.speed > 0 ? _pinAnimator.speed - (Time.deltaTime / 10) : 0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->____pinAnimator_7;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->____pinAnimator_7;
		NullCheck(L_9);
		float L_10;
		L_10 = Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2(L_9, NULL);
		G_B6_0 = L_8;
		if ((((float)L_10) > ((float)(0.0f))))
		{
			G_B7_0 = L_8;
			goto IL_0093;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		goto IL_00aa;
	}

IL_0093:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->____pinAnimator_7;
		NullCheck(L_11);
		float L_12;
		L_12 = Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2(L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B8_0 = ((float)il2cpp_codegen_subtract(L_12, ((float)(L_13/(10.0f)))));
		G_B8_1 = G_B7_0;
	}

IL_00aa:
	{
		NullCheck(G_B8_1);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(G_B8_1, G_B8_0, NULL);
	}

IL_00af:
	{
		// if (stopped && spinned)
		bool L_14 = __this->___stopped_11;
		if (!L_14)
		{
			goto IL_0178;
		}
	}
	{
		bool L_15 = __this->___spinned_10;
		if (!L_15)
		{
			goto IL_0178;
		}
	}
	{
		// _outlineAnimator.Play("Outline Hide");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->____outlineAnimator_6;
		NullCheck(L_16);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_16, _stringLiteral0D11B266DD59F6153581EB126F6FDA89FB7CA2C5, NULL);
		// _pinAnimator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->____pinAnimator_7;
		NullCheck(L_17);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_17, (bool)0, NULL);
		// pin.transform.eulerAngles = new Vector3(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pin_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_19, L_20, NULL);
		// transform.localEulerAngles = Mathf.Abs(transform.localEulerAngles.z) % 45f < 1 ?
		//     new Vector3(0, 0, transform.localEulerAngles.z + 2) :
		//     new Vector3(0, 0, transform.localEulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_22, NULL);
		float L_24 = L_23.___z_4;
		float L_25;
		L_25 = fabsf(L_24);
		G_B12_0 = L_21;
		if ((((float)(fmodf(L_25, (45.0f)))) < ((float)(1.0f))))
		{
			G_B13_0 = L_21;
			goto IL_014e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_26, NULL);
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (0.0f), (0.0f), L_28, /*hidden argument*/NULL);
		G_B14_0 = L_29;
		G_B14_1 = G_B12_0;
		goto IL_0173;
	}

IL_014e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_30, NULL);
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), (0.0f), (0.0f), ((float)il2cpp_codegen_add(L_32, (2.0f))), /*hidden argument*/NULL);
		G_B14_0 = L_33;
		G_B14_1 = G_B13_0;
	}

IL_0173:
	{
		NullCheck(G_B14_1);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(G_B14_1, G_B14_0, NULL);
	}

IL_0178:
	{
		// transform.eulerAngles += new Vector3(0, 0, spinningSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_35, NULL);
		float L_37 = __this->___spinningSpeed_8;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_37, L_38)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_39, NULL);
		NullCheck(L_35);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_35, L_40, NULL);
	}

IL_01a9:
	{
		// }
		return;
	}
}
// System.Void WheelManager::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelManager_OnMouseDown_m4A0B7B45D820844566BA6339D5747FA15216559C (WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EC5BAC4F6A518ABD4B12E3D172F881253589260);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!spinning)
		bool L_0 = __this->___spinning_9;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		// _outlineAnimator.Play("Outline");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____outlineAnimator_6;
		NullCheck(L_1);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_1, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		// spinningSpeed = Random.Range(-500, -1200);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-500), ((int32_t)-1200), NULL);
		__this->___spinningSpeed_8 = ((float)L_2);
		// _pinAnimator.Play("Pin");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____pinAnimator_7;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteral8EC5BAC4F6A518ABD4B12E3D172F881253589260, NULL);
		// spinning = true;
		__this->___spinning_9 = (bool)1;
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void WheelManager::OpenRewardScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelManager_OpenRewardScene_m969A1BAFB8288DD5C8479EFF1F6B9AC7D80FFA5D (WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OpenRewardScene() => SceneManager.LoadScene("Reward");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA5CB83F9994A54A3151CA945573C89E5D4A8D003, NULL);
		return;
	}
}
// System.Void WheelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelManager__ctor_m0E6C1151FDC50A363CCA1E85844E3EC1E9BF8E3A (WheelManager_t2FAD909DFAC90AC47DF1059D4B864B439043807F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7_inline (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9_inline (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = __this->___U3CLoadAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoOdul_Invoke_mE5AD5C623BF501AA34E2B7FCF042461D54C103AE_inline (RewardedVideoOdul_tB681BBC73D260ABA261CF684CE2F3B72BB93BC33* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___odul0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___odul0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
