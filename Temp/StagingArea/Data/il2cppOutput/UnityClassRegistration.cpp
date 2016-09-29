struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 65 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//11. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//12. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//22. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//23. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//24. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//25. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//26. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//27. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//28. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//29. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//30. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//31. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//32. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//33. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//34. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//35. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//36. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//37. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//38. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//39. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//40. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//41. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//42. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//43. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//44. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//45. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//46. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//47. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//48. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//49. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//50. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//51. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//52. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//53. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//54. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//55. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//56. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//57. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//58. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//59. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//60. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//61. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//62. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//63. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//64. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
