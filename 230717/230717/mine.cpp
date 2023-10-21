#include <iostream> //iostream이라는 헤더를 가져온다.
#include <time.h>

int main() //메인함수. 프로그램의 시작을 의미
{

	std::cout << "Console \"Out\"put\n";
	//" " 출력하고 싶을 땐 \" \" 사용할 것.
	// Console "Out"put 이라는 문자를 출력하고 다음줄로 개행한다.

	std::cout << "Test Output" << std::endl;
	//Test Output이라는 문자를 출력하고 다음줄로 개행한다.

	bool Test = true;
	//bool타입 변수 Test를 선언하고 true로 초기화한다.
	Test = false;
	//변수 Test의 값을 false로 변경한다.
	std::cout << Test << std::endl;
	//뱐수 Test를 출력한다. 
	//Test가 참이면 1, 거짓이면 0이 출력될 것이다.

	char Text = 'C';
	//char타입 변수 Text를 선언하고 초기값을 'C'로 설정한다.
	Text = 66;
	//변수 Text의 값을 66으로 둔다.

	std::cout << Text << std::endl;
	//변수 Text를 출력한다.
	//ASCII 코드에서 66은 대문자 'B'에 해당된다.
	//그러므로 출력하면 B가 출력된다.

	//cout은 소수점 5번째 자리까지 출력을 한다. 
	//6번째 자리까지 넣게 되면 반올림시켜서 5번째 자리까지 출력

	float	Number3 = 3.1415962f;
	//float변수 Number3를 선언하고 3.1415962로 초기값을 설정한다.
	std::cout << Number3 << std::endl;
	//변수 Number3의 값을 출력한다.


	double	Number4 = 3.141596231234;
	//double변수 Number4를 선언하고 3.141596231234로 초기값을 설정한다
	std::cout << Number4 << std::endl; 
	//double변수 Number4를 출력한다.


	




	return 0; // 프로그램이 정상적으로 종료되면 0으로 반환한다.
}//메인함수를 끝낸다.