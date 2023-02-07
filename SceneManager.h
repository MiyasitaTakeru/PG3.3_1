#pragma once
class SceneManager final
{
private:
	// コンストラクタをprivateに
	SceneManager();
	// デストラクタをprivateに
	~SceneManager();
public:
	// コピーコンストラクタを無効に
	SceneManager(const SceneManager& obj) = delete;
	// 代入演算子を無効に
	SceneManager& operator=(const SceneManager& obj) = delete;

	// シーン
	int sceneNo = 0;
	void ChangeScene();

	// インスタンス
	static SceneManager* GetInstance();
};

