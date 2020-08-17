#include <iostream>
using namespace std;

// 템플릿도 함수처럼 여러 매개변수를 가질 수 있다.
template<typename T1, typename T2>
void Print(T1 a, T2 b)
{
	cout << a << ", " << b << endl;
}

int main()
{
	Print(10, 1.5);
	Print("Hello", 100);
	Print(1.5, "Hello");
	return 0;
}