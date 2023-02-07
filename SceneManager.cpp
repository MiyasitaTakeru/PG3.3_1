#include "SceneManager.h"
#include <stdio.h>
#include <windows.h>


SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

SceneManager* SceneManager::GetInstance() {
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene()
{
	if (sceneNo == 0) {
		printf("Title\n");
		Sleep(1000);
		sceneNo++;
	}
	if (sceneNo == 1) {
		printf("NewGame\n");
		Sleep(1000);
		sceneNo++;
	}
	if (sceneNo == 2) {
		printf("GamePlay\n");
		Sleep(1000);
		sceneNo++;
	}
	if (sceneNo == 3) {
		printf("GameClear\n");
		Sleep(1000);
		sceneNo = 0;
	}
}