#include <iostream>

int main()
{
	std::cout << "230718\n";

	const int iAttack = 0x00000001; 
	// 2������ 1

	const int iArmor = 0x00000002;
	//2������ 10

	const int iHP = 0x00000004;
	//2������ 100

	const int iMP = 0x00000008;
	//2������ 1000

	const int iCritical = 0x00000010;
	//2������ 10000

	int iBuf = iAttack | iHP | iCritical;
	// 001| 100=> 101
	// 00101|10000=> 10101 
	// ������ �ִ� �κи� 1�� �Ȱ� �� �� �ִ�. ��. ���� �߰��� �� or�� �̿��Ѵ�.

	//������ ���ϴ� ������ �������� �������� Ȯ���غ���.
	std::cout << "Attack=" << (iBuf & iAttack) << std::endl;
	std::cout << "Armor=" << (iBuf & iArmor) << std::endl;
	std::cout << "HP=" << (iBuf & iHP) << std::endl;
	std::cout << "MP=" << (iBuf & iMP) << std::endl;
	std::cout << "Critical=" << (iBuf & iCritical) << std::endl;
	//iAttack, iHP, iCritical�� �����ϰ� ������ 0�� ����. �� 0�� ���� �׸���� ���� off��� ���� �� �� �ִ�.

	//������ �����
	iBuf ^= iHP;
	//10101^00100 -> 10001
	iBuf ^= iHP;
	//10001^00100 -> 10101
	//��, xor�� �̿��ؼ� ������ ���ų� Ű�°��� �����ϴ�. (����ġ ���)

	//����Ʈ������
	std::cout << "216<<3=" << (216 << 3) << std::endl;
	//2�� 3���� ���ѰͰ� ���� ���� ����.
	std::cout << "20>>3=" << (20 >> 3) << std::endl;

	/*
	���������� : ++, --
	++ : ������ ���� 1 ������Ų��.
	-- : ������ ���� 1 ���ҽ�Ų��.
	���������ڴ� ������ ���� Ȥ�� �����ʿ� ���� �� �ִ�.
	���� : ��ġ����
	������ : ��ġ����
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