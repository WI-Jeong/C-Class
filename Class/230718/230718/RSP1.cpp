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

	int playerwin = 0;//이 변수 3개는 while문 들어오기전에 선언해야하는구나.
	int aiwin = 0;
	int nobodywin = 0;

	while (true)
	{
		system("cls");
		

		int player = 0;
		std::cout << "1. 가위\n2. 바위\n3. 보\n중에 선택하세요\n0은 종료버튼입니다.";
		std::cin >> player;

		int ai = rand() % 3 + 1;

		if (player == SCISSOR)
			std::cout << "플레이어: SCISSOR" << std::endl;

		else if (player == ROCK)
			std::cout << "플레이어: ROCK" << std::endl;

		else if (player == PAPER)
			std::cout << "플레이어: PAPER" << std::endl;

		else if (player == EXIT)
		{
			int yn = 0;

			std::cout << "종료하시겠습니까?\n1.Y\n2.N." << std::endl;
			std::cin >> yn;
			if (yn == 1)
			{
				std::cout << "종료합니다." << std::endl;
				break;
			}
		
			if (yn == 2)
			{
				std::cout << "다시 시작합니다." << std::endl;
				system("pause");
				continue;
			}

		}


		else
		{
			std::cout << "다시 입력하세요." << std::endl;
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



		switch (result) //case끝나고 break 잊지말것.!!!!
		{

		case -2:
		case 1:
		{
			std::cout << "플레이어 승리" << std::endl;
			++playerwin;
			break; 
		}

		case 0:
		{
			std::cout << "무승부" << std::endl;
			++nobodywin;
			break;
		}


		default:
		{
			std::cout << "AI 승리" << std::endl;
			++aiwin; //+가 아니라 ++임.
			break;

		}

		};

		std::cout << "플레이어 누적 승리: " << playerwin << std::endl;
		std::cout << "AI 누적 승리: " << aiwin << std::endl;
		std::cout << "누적 무승부: " << nobodywin << std::endl;

	

		if (playerwin >= 3)
		{
			std::cout << "플레이어가 누적 3회 승리하였습니다.\n자동으로 종료합니다." << std::endl;
			break;
		}

		system("pause");
	}

	return 0;
	
}