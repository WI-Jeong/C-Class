#include<iostream>
#include<time.h>
#include "Menu.h"



int main()
{
	srand((unsigned int)time(0));
	rand();


	//menutype
	cmenu* J = new cmenu; 
	cmenu* S = new cmenu;
	//S->Init();

	cmenu* P = new cmenu;
	//J.menucount;

	cmenu* G = new cmenu;
	//J.menucount;

	cmenu* H = new cmenu;
	//J.menucount;



	cmenu* Z = new cmenu;
	//J.menucount;

	std::cout << "1.Á·¹ß" << std::endl;
	std::cout << "2.ÃÊ¹ä" << std::endl;
	std::cout << "3.ÇÇÀÚ" << std::endl;
	std::cout << "4.»ï°ã»ì" << std::endl;
	std::cout << "5.ÇÜ¹ö°Å" << std::endl;
	std::cout << "6.Â«Â¥¸é" << std::endl;
	std::cout <<  std::endl;

	int count = 0;
	std::cout << "µ¹¸± È½¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
	std::cin >> count;


	for(int i=0;i<count;++i)
	{
		int number =rand() % 6 + 1;

	/*	std::cout << number << std::endl;*/

		switch (number)
		{
		case 1:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: Á·¹ß" << std::endl;
			J->menucount++;
			break;
		case 2:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: ÃÊ¹ä" << std::endl;
			S->menucount++;
			break;
		case 3:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: ÇÇÀÚ" << std::endl;
			P->menucount++;
			break;
		case 4:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: »ï°ã»ì" << std::endl;
			G->menucount++;
			break;

		case 5:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: ÇÜ¹ö°Å" << std::endl;
			H->menucount++;
			break;

		case 6:
			std::cout << "¼±ÅÃµÈ ¸Þ´º: Â«Â¥¸é" << std::endl;
			Z->menucount++;
			break;

		}



	}

	std::cout << "Á·¹ß : " << J->menucount << std::endl;
	std::cout << "ÃÊ¹ä : " << S->menucount << std::endl;
	std::cout << "ÇÇÀÚ : " << P->menucount << std::endl;
	std::cout << "»ï°ã»ì : " << G->menucount << std::endl;
	std::cout << "ÇÜ¹ö°Å : " << H->menucount << std::endl;
	std::cout << "Â«Â¥¸é : " << Z->menucount << std::endl;

		return 0;

}