#include <iostream> //iostream�̶�� ����� �����´�. �տ� ��ó���� #�� �پ�����. ���������� ���� ó���Ѵٴ� ��. 
#include <time.h>

int main() //�����Լ�. ���α׷��� ������ �ǹ�
{

	std::cout << "Console OutPut\n";
	std::cout << "Hello World\n"; // ���� �ٿ� ���� ���ؼ��� \n�� ����
	std::cout << "I am happy to learn \"C++\"\n"; //""�� ���� ������ \" �� �̿��ؼ� ����


	std::cout << "Test Output" << std::endl;
	//Test Output�̶�� ���ڸ� ����ϰ� �����ٷ� �����Ѵ�.

	bool Test = true;
	//boolŸ�� ���� Test�� �����ϰ� true�� �ʱ�ȭ�Ѵ�.
	Test = false;
	//���� Test�� ���� false�� �����Ѵ�.
	std::cout << Test << std::endl;
	//���� Test�� ����Ѵ�. 
	//Test�� ���̸� 1, �����̸� 0�� ��µ� ���̴�.

	char Text = 'C';
	//charŸ�� ���� Text�� �����ϰ� �ʱⰪ�� 'C'�� �����Ѵ�.
	Text = 66;
	//���� Text�� ���� 66���� �д�.

	std::cout << Text << std::endl;
	//���� Text�� ����Ѵ�.
	//ASCII �ڵ忡�� 66�� �빮�� 'B'�� �ش�ȴ�.
	//�׷��Ƿ� ����ϸ� B�� ��µȴ�.

	//cout�� �Ҽ��� 5��° �ڸ����� ����� �Ѵ�. 
	//6��° �ڸ����� �ְ� �Ǹ� �ݿø����Ѽ� 5��° �ڸ����� ���

	float	Number3 = 3.1415962f;
	//float���� Number3�� �����ϰ� 3.1415962�� �ʱⰪ�� �����Ѵ�.
	std::cout << Number3 << std::endl;
	//���� Number3�� ���� ����Ѵ�.


	double	Number4 = 3.141596231234;
	//double���� Number4�� �����ϰ� 3.141596231234�� �ʱⰪ�� �����Ѵ�
	std::cout << Number4 << std::endl;
	//double���� Number4�� ����Ѵ�.



	//������
	std::cout << "10/3=" << 10 / 3.0 << std::endl;
	std::cout << "10/3=" << 10 / 3.0f << std::endl;

	std::cout << "((10 + 2) - 5) * 4 =" << ((10 + 2) - 5) * 4<<std::endl;

	//���迬����. ���̸� 1, �����̸� 0
	std::cout << "10<20=" << (10 < 20) << std::endl; 
	std::cout << "10<=20=" << (10 <= 20) << std::endl;
	std::cout << "10>20=" << (10 > 20) << std::endl;
	std::cout << "10>=20=" << (10 >= 20) << std::endl;
	std::cout << "10==20=" << (10 == 20) << std::endl;
	std::cout << "10!=20=" << (10 != 20) << std::endl;

	//��������
	//NOT
	std::cout << "!false=" << !false << std::endl; //true�� �Ǵϱ� 1�� ����.





	return 0; // ���α׷��� ���������� ����Ǹ� 0���� ��ȯ�Ѵ�.
}//�����Լ��� ������.