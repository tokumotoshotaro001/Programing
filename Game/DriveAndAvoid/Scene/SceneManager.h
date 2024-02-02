#pragma once

#include "SceneBase.h"

//固定化するフレームレート値
#define TARGET_FREAM_RATE (60)
//1フレーム当たりの時間（マイクロ秒）
#define DELTA_SECOND (1000000/TARGET_FREAM_RATE)
class SceneManager
{
private:
	SceneBase* current_scene;

public:
	SceneManager();
	~SceneManager();

	void Initialize();
	void Update();
	void Finalize();

private:
	void Draw() const;
	void ChangeScene(eSceneType scene_type);
	SceneBase* CreateScene(eSceneType scene_type);
};

