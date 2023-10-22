#include <iostream>
#include <time.h>

enum RSP
{
	Exit,
	SCISSOR,
	ROCK,
	PAPER

};

int main()
{
	srand((unsigned int)time(0));

	int playerwin = 0;
	int aiwin = 0;
	int nobodywin = 0;

	while (true)
	{
		system("cls");

		std::cout << "1.����\n2.����\n3.��\n0. ����" << std::endl;
		std::cout << "����, ����, �� �� �ϳ��� �Է��ϼ���: " << std::endl;
		int player = 0;
		std::cin >> player;

		if (player == SCISSOR)
			std::cout << "Player: ���� " << std::endl;

		else if (player == ROCK)
			std::cout << "Player: ���� " << std::endl;

		else if (player == PAPER)
			std::cout << "Player: �� " << std::endl;

		else if (player == Exit)
		{
			std::cout << "�����մϴ� " << std::endl;
			break;
		}
		else if(player>3||player<1)
		{
			std::cout << "�ٽ� �Է��ϼ���" << std::endl;
			system("pause");
			continue;
		}

		int ai = rand() % 3 + 1;


		switch (ai)
		{
		case SCISSOR:
			std::cout << "AI: ����" << std::endl;
			break;
		case ROCK:
			std::cout << "AI: ����" << std::endl;
			break;
		default:
			std::cout << "AI: ��" << std::endl;
			break;

		}

		int result = player - ai;

		std::cout << std::endl;

			if (result == -2 || result == 1)
		{
			std::cout << "�÷��̾� �¸�" << std::endl;
			++playerwin;
			
		}
			else if (result == 0)
			{
				std::cout << "���º�" << std::endl;
				++nobodywin;
			}
		else
		{
			std::cout << "AI �¸�" << std::endl;
			++aiwin;
			
		}

			std::cout << std::endl;

		std::cout << "�÷��̾� �¸� Ƚ��: " << playerwin << std::endl;
		std::cout << "AI �¸� Ƚ��: " << aiwin << std::endl;
		std::cout << "���º� Ƚ��: " << nobodywin << std::endl;

		system("pause");

		if (playerwin >= 5)
		{
			std::cout << std::endl;
			std::cout << "�÷��̾ 5ȸ �̻� �̰���ϴ�.\n�ڵ����� �����մϴ�." << std::endl;
			break;
		}
	}

	return 0;
}