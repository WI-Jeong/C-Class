#include <iostream>
#include <time.h>

enum NUM
{
	num0 = 10,
	num1,
	num2,
	num3
};

int main()
{
	std::cout << num0 << std::endl;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	std::cout << num3 << std::endl;


	std::cout << "230718 main3\n";

	//SWITCH문
	int number = 0;

	std::cout << "숫자를 입력하세요: " << std::endl;
	std::cin >> number;

	switch (number)
	{
	case num0:
		std::cout << "입력한 숫자는 10입니다" << std::endl;
		break;
	case num1:
		std::cout << "입력한 숫자는 11입니다" << std::endl;
		break;
	case 3:
		std::cout << "입력한 숫자는 3입니다" << std::endl;
	case 5:
		std::cout << "입력한 숫자는 5입니다" << std::endl;
		break;
	default:
		std::cout << "그 외의 숫자입니다" << std::endl;
		break;
	}

	NUM num;
	std::cout << sizeof(NUM) << std::endl;
	////sizeof(타입 or 변수)를 하게 되면 해당 타입 혹은 변수의 메모리 크기를 구할 수 있다.

	NUM numnum;
	std::cout <<  typeid(NUM).name() << std::endl;
	std::cout << typeid(numnum).name() << std::endl;





	return 0;

}