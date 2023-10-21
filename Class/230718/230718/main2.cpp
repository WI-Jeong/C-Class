#include <iostream>
#include <time.h>

int main()
{
	std::cout << "230718 main2\n";

	srand((unsigned int)time(0));

	//장비 강화 성공/실패 구하기
	/*
	 만약% 로 난수를 구하고 싶다면
	cout<<(rand()%10000/100.f)<<endl;
	로 구해주면 된다.
	*/

	
	/*
	강화 확률 :
	업그레이드가 0~3일 경우 강화 100% 성공
	업그레이드가 4~6일 경우 강화 40% 성공
	업그레이드가 7~9일 경우 강화 10% 성공
	업그레이드가 10~13일 경우 강화 1% 성공
	업그레이드가 14~15일 경우 강화 0.01% 성공

	*/

	int Upgrade = 0;
	float fpercent = rand() % 10000 / 100.f;

	std::cout << "Upgrade 기본 수치를 입력하세요: " << std::endl;
	std::cin >> Upgrade;
	std::cout << "Upgrade 기본수치: " << Upgrade << std::endl;
	std::cout << "Percent: " << fpercent << std::endl;

	if (Upgrade <= 3)
		std::cout<< "강화 성공" << std::endl;


	else if (Upgrade >= 4 && Upgrade <= 6)
	{
		if (fpercent < 40.f)
			std::cout << "강화 성공" << std::endl;

		else
			std::cout << "강화 실패" << std::endl;

	}

	else if (Upgrade >= 7 && Upgrade <= 9)
	{
		if (fpercent < 10.f)
			std::cout << "강화 성공" << std::endl;

		else
			std::cout << "강화 실패" << std::endl;
	}

	else if (Upgrade >= 10 && Upgrade <= 13)
	{
		if (fpercent < 1.f)
			std::cout << "강화 성공" << std::endl;

		else
			std::cout << "강화 실패" << std::endl;
	}

	else if (Upgrade >= 14 && Upgrade <= 15)
	{
		if (fpercent < 0.01f)
			std::cout << "강화 성공" << std::endl;

		else
			std::cout << "강화 실패" <<  std::endl;
	}


	return 0;

}