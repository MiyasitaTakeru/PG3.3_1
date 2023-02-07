#pragma once
class SceneManager final
{
private:
	// �R���X�g���N�^��private��
	SceneManager();
	// �f�X�g���N�^��private��
	~SceneManager();
public:
	// �R�s�[�R���X�g���N�^�𖳌���
	SceneManager(const SceneManager& obj) = delete;
	// ������Z�q�𖳌���
	SceneManager& operator=(const SceneManager& obj) = delete;

	// �V�[��
	int sceneNo = 0;
	void ChangeScene();

	// �C���X�^���X
	static SceneManager* GetInstance();
};

