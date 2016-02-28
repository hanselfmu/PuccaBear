struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 49 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//9. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//10. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//11. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//12. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//13. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//14. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//15. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//16. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//17. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//18. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//19. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//20. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//21. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//22. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//23. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//24. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//25. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//26. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//27. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//28. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//29. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//30. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//31. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//32. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//33. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//34. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//35. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//36. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//37. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//38. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//39. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//40. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//41. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//42. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//43. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//44. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//45. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//48. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
