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

		std::cout << "1.가위\n2.바위\n3.보\n0. 종료" << std::endl;
		std::cout << "가위, 바위, 보 중 하나를 입력하세요: " << std::endl;
		int player = 0;
		std::cin >> player;

		if (player == SCISSOR)
			std::cout << "Player: 가위 " << std::endl;

		else if (player == ROCK)
			std::cout << "Player: 바위 " << std::endl;

		else if (player == PAPER)
			std::cout << "Player: 보 " << std::endl;

		else if (player == Exit)
		{
			std::cout << "종료합니다 " << std::endl;
			break;
		}
		else if(player>3||player<1)
		{
			std::cout << "다시 입력하세요" << std::endl;
			system("pause");
			continue;
		}

		int ai = rand() % 3 + 1;


		switch (ai)
		{
		case SCISSOR:
			std::cout << "AI: 가위" << std::endl;
			break;
		case ROCK:
			std::cout << "AI: 바위" << std::endl;
			break;
		default:
			std::cout << "AI: 보" << std::endl;
			break;

		}

		int result = player - ai;

		std::cout << std::endl;

			if (result == -2 || result == 1)
		{
			std::cout << "플레이어 승리" << std::endl;
			++playerwin;
			
		}
			else if (result == 0)
			{
				std::cout << "무승부" << std::endl;
				++nobodywin;
			}
		else
		{
			std::cout << "AI 승리" << std::endl;
			++aiwin;
			
		}

			std::cout << std::endl;

		std::cout << "플레이어 승리 횟수: " << playerwin << std::endl;
		std::cout << "AI 승리 횟수: " << aiwin << std::endl;
		std::cout << "무승부 횟수: " << nobodywin << std::endl;

		system("pause");

		if (playerwin >= 5)
		{
			std::cout << std::endl;
			std::cout << "플레이어가 5회 이상 이겼습니다.\n자동으로 종료합니다." << std::endl;
			break;
		}
	}

	return 0;
}