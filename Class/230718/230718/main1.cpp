#include <iostream>
#include <time.h>

int main()
{
	std::cout << "230718 main1\n";

	/*
	If��
	�б⹮�� �� ����. IF���� ������ üũ���ִ� ����� �Ѵ�.
	
	����
	if(���ǽ�) { }
	�� ���ǽ��� true�� �� �ڵ��� {} �ȿ��ִ� �ڵ尡 ���۵Ǹ�, ���ǽ��� false�� ��� ���۵��� �ʴ´�.
	*/

	if (true)
	{
		std::cout << "If�� ������ true�Դϴ�." << std::endl;
	}

	if (false)
	{
		std::cout << "If�� ������ false�Դϴ�." << std::endl;
	}
	//if���� ���ǽ��� false�̹Ƿ� ��µ��� �ʴ´�.

	//������ �ִ��� Ȯ���Ѵ�.

	const int iAttack = 0x00000001;
	const int iArmor = 0x00000002;
	const int iHP = 0x00000004;
	const int iMP = 0x00000008;
	const int iCritical = 0x00000010;
	int iBuf = iAttack | iHP | iCritical;

	if ((iBuf & iAttack) !=0)
		std::cout << "Attack ������ �ֽ��ϴ�." << std::endl;
	if ((iBuf & iArmor) != 0)
		std::cout << "Armor ������ �ֽ��ϴ�." << std::endl;
	if ((iBuf & iHP) != 0)
		std::cout << "HP ������ �ֽ��ϴ�." << std::endl;
	if ((iBuf & iMP) != 0)
		std::cout << "MP ������ �ֽ��ϴ�." << std::endl;
	if ((iBuf & iCritical) != 0)
		std::cout << "Critical ������ �ֽ��ϴ�." << std::endl;

	//else
	if (false)
		std::cout << "If�� ������ true�Դϴ�." << std::endl;
	else
		std::cout << "If�� ������ false�Դϴ�." << std::endl;


	//if, else, else if
	int number = 0;
	std::cout << "���ڸ� �Է��ϼ���";
	std::cin >> number;

	if (10 <= number && number <= 20)
		std::cout << "10~20������ �����Դϴ�." << std::endl;
	else if (21 <= number && number <= 30)
		std::cout << "20~30������ �����Դϴ�." << std::endl;
	else if (31 <= number && number <= 40)
		std::cout << "31~40������ �����Դϴ�." << std::endl;
	else
		std::cout << "�� �� �����Դϴ�." << std::endl;

	//����
	srand((unsigned int)time(0));

	std::cout << rand() << std::endl;
	std::cout << (rand()%100) << std::endl;
	std::cout << (rand() % 101+100) << std::endl;





	return 0;

}