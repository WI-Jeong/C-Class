/*

�÷��̾�� ����, ����, �� ���� �ϳ��� �����Ѵ�.
AI�� ����, ����, �� ���� �ϳ��� �����ϰ� ���´�.
�÷��̾�� AI �� ���� �̰������ �Ǵ��Ѵ�.

������������ �ݺ��ؼ� �ϵ� �����ư�� �߰��ϰ�, 
�� ���� ���ڵ��� �Է��ϸ� �ٽ� ���ڸ� �����ϰ� ����ض�.
�÷��̾�� AI�� ���� �� �� �̰���� ��赵 �Բ� ��µǰ� �ض�. 
���� �÷��̾��� ���� �¸��� 5ȸ�� �Ǹ� �ڵ����� ����ǰ� ������.

*/


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
	int playerwin = 0;
	int aiwin = 0;
	int nobodywin = 0;

	while (true)
	{
		system("cls");

		srand(unsigned int(time(0)));

		int player = 0;
		std::cout << "1. ����\n2. ����\n3. ��\n�߿� �Է��ϼ���.\n0�� �����Դϴ�." << std::endl;
		std::cin >> player;

		int ai = rand() % 3 + 1;


		if (player == SCISSOR)
			std::cout << "�÷��̾�: ����" << std::endl;
		else if (player == ROCK)
			std::cout << "�÷��̾�: ����" << std::endl;
		else if (player == PAPER)
			std::cout << "�÷��̾�: ��" << std::endl;
		else if (player == EXIT)
		{
			std::cout << "�����Ͻðڽ��ϱ�?\n1. Y\n2. N" << std::endl;

			int yn = 0;
			std::cin >> yn;

			if (yn == 1)
			{
				std::cout << "������ �����մϴ�" << std::endl;
				break;
			}

			if (yn == 2)
			{
				std::cout << "������ �ٽ� �����մϴ�." << std::endl;
				system("pause");
				continue;
			}

		}

		else
		{
			std::cout << "�ٽ� �Է����ּ���." << std::endl;
			system("pause");
			continue;
		}


		if (ai == SCISSOR)
			std::cout << "AI: ����" << std::endl;
		else if (ai == ROCK)
			std::cout << "AI: ����" << std::endl;
		else if (ai == PAPER)
			std::cout << "AI: ��" << std::endl;

		int result = player - ai;
		switch (result)
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
			++aiwin;
			break;
		}

		}

		std::cout << std::endl;
		std::cout << "�÷��̾� ���� �¸�: " << playerwin << std::endl;
		std::cout << "AI ���� �¸�: " << aiwin << std::endl;
		std::cout << "���� ���º�: " << nobodywin << std::endl;

		if (playerwin >= 5)
		{
			std::cout << "�÷��̾��� ���� �¸��� 5ȸ�� �Ǿ����ϴ�.\n�ڵ����� �����մϴ�." << std::endl;
			break;
		}

		system("pause");
	}

	return 0;
}








