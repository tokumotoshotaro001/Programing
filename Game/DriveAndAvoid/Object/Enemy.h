#pragma once
#include "../Utility/Vector2D.h"

class Enemy
{
private:
	int type;	//タイプ
	int image;	//画像
	float speed;	//速さ
	Vector2D location;	//位置情報
	Vector2D box_size;	//当たり判定の大きさ

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

