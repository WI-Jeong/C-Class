#include <iostream>
#include <time.h>

enum RSP
{
	EXIT,
	SCISSOR,
	ROCK,
	PAPER
};




int main()
{
	srand((unsigned int)time(0));

	int playerwin = 0;//�� ���� 3���� while�� ���������� �����ؾ��ϴ±���.
	int aiwin = 0;
	int nobodywin = 0;

	while (true)
	{
		system("cls");
		

		int player = 0;
		std::cout << "1. ����\n2. ����\n3. ��\n�߿� �����ϼ���\n0�� �����ư�Դϴ�.";
		std::cin >> player;

		int ai = rand() % 3 + 1;

		if (player == SCISSOR)
			std::cout << "�÷��̾�: SCISSOR" << std::endl;

		else if (player == ROCK)
			std::cout << "�÷��̾�: ROCK" << std::endl;

		else if (player == PAPER)
			std::cout << "�÷��̾�: PAPER" << std::endl;

		else if (player == EXIT)
		{
			int yn = 0;

			std::cout << "�����Ͻðڽ��ϱ�?\n1.Y\n2.N." << std::endl;
			std::cin >> yn;
			if (yn == 1)
			{
				std::cout << "�����մϴ�." << std::endl;
				break;
			}
		
			if (yn == 2)
			{
				std::cout << "�ٽ� �����մϴ�." << std::endl;
				system("pause");
				continue;
			}

		}


		else
		{
			std::cout << "�ٽ� �Է��ϼ���." << std::endl;
			system("pause");
			continue;
		}
			

		if (ai == SCISSOR)
			std::cout << "AI: SCISSOR" << std::endl;

		else if (ai == ROCK)
			std::cout << "AI: ROCK" << std::endl;

		else if (ai == PAPER)
			std::cout << "AI: PAPER" << std::endl;

		int result = player - ai;



		switch (result) //case������ break ��������.!!!!
		{

		case -2:
		case 1:
		{
			std::cout << "�÷��̾� �¸�" << std::endl;
			++playerwin;
			break; 
		}

		case 0:
		{
			std::cout << "���º�" << std::endl;
			++nobodywin;
			break;
		}


		default:
		{
			std::cout << "AI �¸�" << std::endl;
			++aiwin; //+�� �ƴ϶� ++��.
			break;

		}

		};

		std::cout << "�÷��̾� ���� �¸�: " << playerwin << std::endl;
		std::cout << "AI ���� �¸�: " << aiwin << std::endl;
		std::cout << "���� ���º�: " << nobodywin << std::endl;

	

		if (playerwin >= 3)
		{
			std::cout << "�÷��̾ ���� 3ȸ �¸��Ͽ����ϴ�.\n�ڵ����� �����մϴ�." << std::endl;
			break;
		}

		system("pause");
	}

	return 0;
	
}