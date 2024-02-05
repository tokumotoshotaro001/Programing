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

	//�{�^�����͎擾����
	static bool GetButton(int button);
	static bool GetButtonDown(int button);
	static bool GetButtonUp(int button);


	//�g���K�[���͎擾����
	static float GetLeftTrigger();
	static float GetRightTrigger();

	//�X�e�B�b�N���͎擾����
	static Vector2D GetLeftStick();
	static Vector2D GetRightStick();

private:
	//�{�^���z��͈̓`�F�b�N
	static bool CheckButtonRange(int button);
};

