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

	//SWITCH��
	int number = 0;

	std::cout << "���ڸ� �Է��ϼ���: " << std::endl;
	std::cin >> number;

	switch (number)
	{
	case num0:
		std::cout << "�Է��� ���ڴ� 10�Դϴ�" << std::endl;
		break;
	case num1:
		std::cout << "�Է��� ���ڴ� 11�Դϴ�" << std::endl;
		break;
	case 3:
		std::cout << "�Է��� ���ڴ� 3�Դϴ�" << std::endl;
	case 5:
		std::cout << "�Է��� ���ڴ� 5�Դϴ�" << std::endl;
		break;
	default:
		std::cout << "�� ���� �����Դϴ�" << std::endl;
		break;
	}

	NUM num;
	std::cout << sizeof(NUM) << std::endl;
	////sizeof(Ÿ�� or ����)�� �ϰ� �Ǹ� �ش� Ÿ�� Ȥ�� ������ �޸� ũ�⸦ ���� �� �ִ�.

	NUM numnum;
	std::cout <<  typeid(NUM).name() << std::endl;
	std::cout << typeid(numnum).name() << std::endl;





	return 0;

}