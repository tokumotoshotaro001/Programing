#pragma once
#include "../Utility/Vector2D.h"

class Enemy
{
private:
	int type;	//�^�C�v
	int image;	//�摜
	float speed;	//����
	Vector2D location;	//�ʒu���
	Vector2D box_size;	//�����蔻��̑傫��

public:
	Enemy(int type, int handle);
	~Enemy();

	void Initialize();
	void Update(float speed);
	void Draw() const;
	void Finalize();

	int GetType() const;
	Vector2D GetLocation() const;
	Vector2D GetBoxSize() const;
};

