#pragma once

#include "Vector2D.h"
class InputControl
{
private:
	static bool now_button[16];
	static bool old_button[16];
	static float trigger[2];
	static Vector2D stick[2];

public:
	static void Update();

	//ボタン入力取得処理
	static bool GetButton(int button);
	static bool GetButtonDown(int button);
	static bool GetButtonUp(int button);


	//トリガー入力取得処理
	static float GetLeftTrigger();
	static float GetRightTrigger();

	//スティック入力取得処理
	static Vector2D GetLeftStick();
	static Vector2D GetRightStick();

private:
	//ボタン配列範囲チェック
	static bool CheckButtonRange(int button);
};

