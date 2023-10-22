#include<iostream>
#include <time.h>

int main()
{
	//int number = 0;
	//while (number < 10)
	//{
	//	std::cout << number << std::endl;
	//	++number;

	//	if (number == 7)
	//		break;

	//}

	srand((unsigned int)time(0));

	std::cout << rand() % 10000 / 100.f << std::endl;




	return 0;
}