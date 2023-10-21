#pragma once

enum class emenu
{
	Á·¹ß=1,
	ÃÊ¹ä,
	ÇÇÀÚ,
	»ï°ã»ì,
	ÇÜ¹ö°Å,
	Â«Â¥¸é,
	´ß¹ß,
	º¸½Ó,
	µ¤¹ä,
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

