#include <iostream>
#include <time.h>

int main()
{
	std::cout << "230718 main2\n";

	srand((unsigned int)time(0));

	//��� ��ȭ ����/���� ���ϱ�
	/*
	 ����% �� ������ ���ϰ� �ʹٸ�
	cout<<(rand()%10000/100.f)<<endl;
	�� �����ָ� �ȴ�.
	*/

	
	/*
	��ȭ Ȯ�� :
	���׷��̵尡 0~3�� ��� ��ȭ 100% ����
	���׷��̵尡 4~6�� ��� ��ȭ 40% ����
	���׷��̵尡 7~9�� ��� ��ȭ 10% ����
	���׷��̵尡 10~13�� ��� ��ȭ 1% ����
	���׷��̵尡 14~15�� ��� ��ȭ 0.01% ����

	*/

	int Upgrade = 0;
	float fpercent = rand() % 10000 / 100.f;

	std::cout << "Upgrade �⺻ ��ġ�� �Է��ϼ���: " << std::endl;
	std::cin >> Upgrade;
	std::cout << "Upgrade �⺻��ġ: " << Upgrade << std::endl;
	std::cout << "Percent: " << fpercent << std::endl;

	if (Upgrade <= 3)
		std::cout<< "��ȭ ����" << std::endl;


	else if (Upgrade >= 4 && Upgrade <= 6)
	{
		if (fpercent < 40.f)
			std::cout << "��ȭ ����" << std::endl;

		else
			std::cout << "��ȭ ����" << std::endl;

	}

	else if (Upgrade >= 7 && Upgrade <= 9)
	{
		if (fpercent < 10.f)
			std::cout << "��ȭ ����" << std::endl;

		else
			std::cout << "��ȭ ����" << std::endl;
	}

	else if (Upgrade >= 10 && Upgrade <= 13)
	{
		if (fpercent < 1.f)
			std::cout << "��ȭ ����" << std::endl;

		else
			std::cout << "��ȭ ����" << std::endl;
	}

	else if (Upgrade >= 14 && Upgrade <= 15)
	{
		if (fpercent < 0.01f)
			std::cout << "��ȭ ����" << std::endl;

		else
			std::cout << "��ȭ ����" <<  std::endl;
	}


	return 0;

}