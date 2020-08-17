#include <iostream>
using namespace std;

void Print(int n)
{
	cout << "정수: " << n << endl;
}

int main()
{
	// void Print(int n)의 함수 포인터 선언
	void(*pf)(int);
	pf = Print;

	Print(10); // 함수 호출
	pf(10);    // 포인터를 이용한 함수 호출, 첫 번째 방법
	(*pf)(10); // 포인터를 이용한 함수 호출, 두 번째 방법

	cout << endl;
	// 주소값 알아보기
	cout << Print << endl;
	cout << pf << endl;
	cout << *pf << endl;
	return 0;
}