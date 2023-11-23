/*

플레이어는 가위, 바위, 보 셋중 하나를 선택한다.
AI는 가위, 바위, 보 셋중 하나를 랜덤하게 얻어온다.
플레이어와 AI 중 누가 이겼는지를 판단한다.

가위바위보를 반복해서 하되 종료버튼을 추가하고,
그 외의 숫자들을 입력하면 다시 숫자를 선택하게 출력해라.
종료버튼 입력 시 게임을 종료할 것인지 다시 한 번 물어보도록 코드 작성해라.
플레이어와 AI가 각각 몇 번 이겼는지 통계도 함께 출력되게 해라.
만약 플레이어의 누적 승리가 5회가 되면 자동으로 종료되게 만들어라.

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

		std::cout << "1. 가위 \n2. 바위 \n3. 보 \n0. 종료\n중 고르시오." << std::endl;
		std::cin >> player;

		if (player == SCISSOR)
		{
			std::cout << "Player=가위" << std::endl;
		}
		else if (player == ROCK)
		{
			std::cout << "Player=바위" << std::endl;
		}
		else if (player == PAPER)
		{
			std::cout << "Player=보" << std::endl;
		}
		else if (player == EXIT)
		{
			std::cout << "종료하시겠습니까? 1. Y 2. N" << std::endl;
			int yesorno = 0;
			std::cin >> yesorno;
			if (yesorno == 1)
			{
				std::cout << "종료합니다." << std::endl;
				break;
			}
			else if (yesorno == 2)
			{
				std::cout << "게임을 재개합니다." << std::endl;
				system("pause");
				continue;
			}
			else
			{
				std::cout << "다시 입력하세요." << std::endl;
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


		if (AI == SCISSOR)
		{
			std::cout << "AI=가위" << std::endl;
		}
		else if (AI == ROCK)
		{
			std::cout << "AI=바위" << std::endl;
		}
		else if (AI == PAPER)
		{
			std::cout << "AI=보" << std::endl;
		}
		
		int result = player - AI;

		switch (result)
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
			++aiwin;
			break;
		}

		}

		std::cout << std::endl;
		std::cout << "플레이어 누적 승리 수: " << playerwin << std::endl;
		std::cout << "AI 누적 승리 수: " << aiwin << std::endl;
		std::cout << "누적 무승부: " << nobodywin << std::endl;

		std::cout << std::endl;
		if (playerwin == 5)
		{
			std::cout << "플레이어의 누적 승리 수는 5회 입니다.\n게임을 종료합니다." << std::endl;
			break;
		}


		system("pause");
	}
	

	return 0;
}