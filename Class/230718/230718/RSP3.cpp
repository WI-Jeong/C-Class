/*

�÷��̾�� ����, ����, �� ���� �ϳ��� �����Ѵ�.
AI�� ����, ����, �� ���� �ϳ��� �����ϰ� ���´�.
�÷��̾�� AI �� ���� �̰������ �Ǵ��Ѵ�.

������������ �ݺ��ؼ� �ϵ� �����ư�� �߰��ϰ�,
�� ���� ���ڵ��� �Է��ϸ� �ٽ� ���ڸ� �����ϰ� ����ض�.
�����ư �Է� �� ������ ������ ������ �ٽ� �� �� ������� �ڵ� �ۼ��ض�.
�÷��̾�� AI�� ���� �� �� �̰���� ��赵 �Բ� ��µǰ� �ض�.
���� �÷��̾��� ���� �¸��� 5ȸ�� �Ǹ� �ڵ����� ����ǰ� ������.

*/

#include<iostream>
#include<time.h>

enum rsp
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
		int ai = rand() % 3 + 1;

		std::cout << "1. ����\n2. ����\n3. ��\n�߿� ������.\n0�� �����ư�Դϴ�." << std::endl;
		std::cin >> player;

		if (player == SCISSOR)
			std::cout << "�÷��̾�: ����" << std::endl;
		else if (player == ROCK)
			std::cout << "�÷��̾�: ����" << std::endl;
		else if (player == PAPER)
			std::cout << "�÷��̾�: ��" << std::endl;
		else if (player == EXIT)
		{
			std::cout << "���� �����Ͻðڽ��ϱ�?\n1. Y\n2. N" << std::endl;
		

			int yn = 0;
			std::cin >> yn;
			if (yn == 1)
			{
				std::cout << "������ �����մϴ�." << std::endl;
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
		else 
			std::cout << "AI: ��" << std::endl;

		std::cout <<  std::endl;

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
		std::cout << "���� ���º�: " <<nobodywin<< std::endl;

		std::cout << std::endl;
		if (nobodywin >= 3)
		{
			std::cout << "3ȸ ���� ���º��Դϴ�.\n�ڵ� �����մϴ�." << std::endl;
			system("pause");
			break;
		}

		system("pause");
	}
	

	return 0;
}