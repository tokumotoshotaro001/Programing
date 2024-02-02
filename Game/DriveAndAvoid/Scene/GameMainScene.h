#pragma once

#include "SceneBase.h"
#include "../Object/Player.h"
#include "../Object/Enemy.h"

class GameMainScene : public SceneBase
{
private:
	int high_score;
	int back_ground;
	int barrier_image;
	int mileage;
	int enemy_image[3];
	int enemy_count[3];
	Player* player;
	Enemy** enemy;

public:
	GameMainScene();
	virtual~GameMainScene();

	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual void Draw() const override;
	virtual void Finalize()override;

	virtual eSceneType GetNowScene() const override;

private:
	//�n�C�X�R�A�ǂݍ���
	void ReadHighScore();
	//�����蔻��
	bool IsHitCheck(Player* p, Enemy* e);

};

