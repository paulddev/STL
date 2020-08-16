#include <iostream>
using namespace std;

template<typename T>
void Print(T a, T b)
{
	cout << a << ", " << b << endl;
}

int main()
{
	// 클라이언트가 함수 템플릿의 타입을 명시적으로 지정할 수 있다.
	Print<int>(10, 20);
	Print<double>(0.123, 0.1234567);
	Print<const char*>("ABC", "Abcdde");
	return 0;
}