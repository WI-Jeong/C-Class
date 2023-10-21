#include <iostream>

int main()
{
	std::cout << "230718\n";

	const int iAttack = 0x00000001; 
	// 2진수로 1

	const int iArmor = 0x00000002;
	//2진수로 10

	const int iHP = 0x00000004;
	//2진수로 100

	const int iMP = 0x00000008;
	//2진수로 1000

	const int iCritical = 0x00000010;
	//2진수로 10000

	int iBuf = iAttack | iHP | iCritical;
	// 001| 100=> 101
	// 00101|10000=> 10101 
	// 버프가 있는 부분만 1이 된걸 볼 수 있다. 즉. 버프 추가할 땐 or을 이용한다.

	//이제는 원하는 버프가 켜졌는지 꺼졌는지 확인해보자.
	std::cout << "Attack=" << (iBuf & iAttack) << std::endl;
	std::cout << "Armor=" << (iBuf & iArmor) << std::endl;
	std::cout << "HP=" << (iBuf & iHP) << std::endl;
	std::cout << "MP=" << (iBuf & iMP) << std::endl;
	std::cout << "Critical=" << (iBuf & iCritical) << std::endl;
	//iAttack, iHP, iCritical을 제외하고 나머지 0이 나옴. 즉 0이 나온 항목들은 버프 off라는 것을 알 수 있다.

	//연산자 축약형
	iBuf ^= iHP;
	//10101^00100 -> 10001
	iBuf ^= iHP;
	//10001^00100 -> 10101
	//즉, xor을 이용해서 버프를 끄거나 키는것이 가능하다. (스위치 기능)

	//쉬프트연산자
	std::cout << "216<<3=" << (216 << 3) << std::endl;
	//2의 3승을 곱한것과 같은 값이 나옴.
	std::cout << "20>>3=" << (20 >> 3) << std::endl;

	/*
	증감연산자 : ++, --
	++ : 변수의 값을 1 증가시킨다.
	-- : 변수의 값을 1 감소시킨다.
	증감연산자는 변수의 왼쪽 혹은 오른쪽에 붙일 수 있다.
	왼쪽 : 전치연산
	오른쪽 : 후치연산
	*/
	int	Number = 100;

	std::cout << ++Number << std::endl;
	std::cout << Number++ << std::endl;
	std::cout << Number << std::endl;

	std::cout << --Number << std::endl;
	std::cout << Number-- << std::endl;
	std::cout << Number << std::endl;

	




	return 0;

}