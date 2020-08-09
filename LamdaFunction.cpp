// https://hibee.tistory.com/49?category=1012497
#include <iostream>
#include <vector>
using namespace std;

/* Lamda Function
   [변수 캡쳐](받을 parameter)->리턴타입{function}(넘길 parameter)
  
   [변수 캡쳐]
   현재 함수에서 사용할 외부 변수를 뜻함
   만약 main함수에 있는 변수를 사용하고 싶다면 [&var]을 통해 특정 변수만 참조

   캡처에 &를 넣으면 선언하는 시점에서 바깥에 있는 변수를 모두 사용 가능
   &는 참조, =는 복사
   여러 개는 ,를 사용

   (받을 parameter)
   함수에서 받는 인자들

   ->리턴타입
   Return 해주는 타입을 지정
   void의 경우 생략 가능

   {function}
   내용을 정의하는 몸체영역

   (넘길 parameter)
   호출하는 함수에 넘겨주는 값들
*/

int main()
{
	cout << [](int x, int y)
	{
		return x + y;
	}(1, 2) << endl;

	cout << [](int x, int y)->int
	{
		return x + y;
	}(1, 2) << endl;

	auto sum = [](int x, int y)
	{
		return x + y;
	};

	cout << sum(1, 2) << endl;
	return 0;
}