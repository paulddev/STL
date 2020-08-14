#include <iostream>
using namespace std;

// server
// 배열의 모든 원소에 반복적인 작업을 수행하게 추상화됨(구체적인 작업은 없음)
void For_each(int* begin, int* end, void(*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // 클라이언트 함수 호출(callback)
	}
}

// client

// 공백을 이용해 원소 출력
void Print1(int n)
{
	cout << n << ' ';
}

// 각 원소를 제곱해서 출력
void Print2(int n)
{
	cout << n * n << ' ';
}

// 문자열과 endl을 이용해 원소를 출력
void Print3(int n)
{
	cout << "정수 : " << n << endl;
}

int main()
{
	int arr[5] = { 10,20,30,40,50 };

	For_each(arr, arr + 5, Print1); // Print1() 콜백 함수의 주소를 전달
	cout << endl << endl;
	For_each(arr, arr + 5, Print2); // Print2() 콜백 함수의 주소를 전달
	cout << endl << endl;
	For_each(arr, arr + 5, Print3); // Print3() 콜백 함수의 주소를 전달
	return 0;
}