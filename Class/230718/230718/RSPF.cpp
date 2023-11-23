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

enum  RSP
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

		int AI = rand() % 3 + 1;
		int player = 0;

		std::cout << "1. ���� \n2. ���� \n3. �� \n0. ����\n�� ���ÿ�." << std::endl;
		std::cin >> player;

		if (player == SCISSOR)
		{
			std::cout << "Player=����" << std::endl;
		}
		else if (player == ROCK)
		{
			std::cout << "Player=����" << std::endl;
		}
		else if (player == PAPER)
		{
			std::cout << "Player=��" << std::endl;
		}
		else if (player == EXIT)
		{
			std::cout << "�����Ͻðڽ��ϱ�? 1. Y 2. N" << std::endl;
			int yesorno = 0;
			std::cin >> yesorno;
			if (yesorno == 1)
			{
				std::cout << "�����մϴ�." << std::endl;
				break;
			}
			else if (yesorno == 2)
			{
				std::cout << "������ �簳�մϴ�." << std::endl;
				system("pause");
				continue;
			}
			else
			{
				std::cout << "�ٽ� �Է��ϼ���." << std::endl;
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


		if (AI == SCISSOR)
		{
			std::cout << "AI=����" << std::endl;
		}
		else if (AI == ROCK)
		{
			std::cout << "AI=����" << std::endl;
		}
		else if (AI == PAPER)
		{
			std::cout << "AI=��" << std::endl;
		}
		
		int result = player - AI;

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
		std::cout << "�÷��̾� ���� �¸� ��: " << playerwin << std::endl;
		std::cout << "AI ���� �¸� ��: " << aiwin << std::endl;
		std::cout << "���� ���º�: " << nobodywin << std::endl;

		std::cout << std::endl;
		if (playerwin == 5)
		{
			std::cout << "�÷��̾��� ���� �¸� ���� 5ȸ �Դϴ�.\n������ �����մϴ�." << std::endl;
			break;
		}


		system("pause");
	}
	

	return 0;
}