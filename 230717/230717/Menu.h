#pragma once

enum class emenu
{
	����=1,
	�ʹ�,
	����,
	����,
	�ܹ���,
	«¥��,
	�߹�,
	����,
	����,
	END
};

class cmenu
{
public:
	cmenu();
	~cmenu();

public:
	int menucount;
	emenu menutype;
	void Init();



};

