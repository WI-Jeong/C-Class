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

	std::cout << "1.����" << std::endl;
	std::cout << "2.�ʹ�" << std::endl;
	std::cout << "3.����" << std::endl;
	std::cout << "4.����" << std::endl;
	std::cout << "5.�ܹ���" << std::endl;
	std::cout << "6.«¥��" << std::endl;
	std::cout <<  std::endl;

	int count = 0;
	std::cout << "���� Ƚ���� �Է��ϼ���: ";
	std::cin >> count;


	for(int i=0;i<count;++i)
	{
		int number =rand() % 6 + 1;

	/*	std::cout << number << std::endl;*/

		switch (number)
		{
		case 1:
			std::cout << "���õ� �޴�: ����" << std::endl;
			J->menucount++;
			break;
		case 2:
			std::cout << "���õ� �޴�: �ʹ�" << std::endl;
			S->menucount++;
			break;
		case 3:
			std::cout << "���õ� �޴�: ����" << std::endl;
			P->menucount++;
			break;
		case 4:
			std::cout << "���õ� �޴�: ����" << std::endl;
			G->menucount++;
			break;

		case 5:
			std::cout << "���õ� �޴�: �ܹ���" << std::endl;
			H->menucount++;
			break;

		case 6:
			std::cout << "���õ� �޴�: «¥��" << std::endl;
			Z->menucount++;
			break;

		}



	}

	std::cout << "���� : " << J->menucount << std::endl;
	std::cout << "�ʹ� : " << S->menucount << std::endl;
	std::cout << "���� : " << P->menucount << std::endl;
	std::cout << "���� : " << G->menucount << std::endl;
	std::cout << "�ܹ��� : " << H->menucount << std::endl;
	std::cout << "«¥�� : " << Z->menucount << std::endl;

		return 0;

}