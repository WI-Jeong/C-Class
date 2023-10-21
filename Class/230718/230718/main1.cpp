#include <iostream>
#include <time.h>

int main()
{
	std::cout << "230718 main1\n";

	/*
	If문
	분기문의 한 종류. IF문은 조건을 체크해주는 기능을 한다.
	
	형태
	if(조건식) { }
	→ 조건식이 true일 때 코드블록 {} 안에있는 코드가 동작되며, 조건식이 false일 경우 동작되지 않는다.
	*/

	if (true)
	{
		std::cout << "If문 조건이 true입니다." << std::endl;
	}

	if (false)
	{
		std::cout << "If문 조건이 false입니다." << std::endl;
	}
	//if문의 조건식이 false이므로 출력되지 않는다.

	//버프가 있는지 확인한다.

	const int iAttack = 0x00000001;
	const int iArmor = 0x00000002;
	const int iHP = 0x00000004;
	const int iMP = 0x00000008;
	const int iCritical = 0x00000010;
	int iBuf = iAttack | iHP | iCritical;

	if ((iBuf & iAttack) !=0)
		std::cout << "Attack 버프가 있습니다." << std::endl;
	if ((iBuf & iArmor) != 0)
		std::cout << "Armor 버프가 있습니다." << std::endl;
	if ((iBuf & iHP) != 0)
		std::cout << "HP 버프가 있습니다." << std::endl;
	if ((iBuf & iMP) != 0)
		std::cout << "MP 버프가 있습니다." << std::endl;
	if ((iBuf & iCritical) != 0)
		std::cout << "Critical 버프가 있습니다." << std::endl;

	//else
	if (false)
		std::cout << "If문 조건이 true입니다." << std::endl;
	else
		std::cout << "If문 조건이 false입니다." << std::endl;


	//if, else, else if
	int number = 0;
	std::cout << "숫자를 입력하세요";
	std::cin >> number;

	if (10 <= number && number <= 20)
		std::cout << "10~20사이의 숫자입니다." << std::endl;
	else if (21 <= number && number <= 30)
		std::cout << "20~30사이의 숫자입니다." << std::endl;
	else if (31 <= number && number <= 40)
		std::cout << "31~40사이의 숫자입니다." << std::endl;
	else
		std::cout << "그 외 숫자입니다." << std::endl;

	//난수
	srand((unsigned int)time(0));

	std::cout << rand() << std::endl;
	std::cout << (rand()%100) << std::endl;
	std::cout << (rand() % 101+100) << std::endl;





	return 0;

}