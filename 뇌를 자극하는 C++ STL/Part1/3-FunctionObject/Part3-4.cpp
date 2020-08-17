#include <iostream>
#include <algorithm>
using namespace std;

// client
struct Functor1
{
	void operator()(int n)
	{
		cout << n << ' ';
	}
};

struct Functor2
{
	void operator()(int n)
	{
		cout << n * n << ' ';
	}
};

struct Functor3
{
	void operator()(int n)
	{
		cout << "정수: " << n << endl;
	}
};

int main()
{
	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, Functor1());
	// 임시 함수 객체 (Functor1())를 만들어 함수로 전달
	cout << endl;

	for_each(arr, arr + 5, Functor2());
	cout << endl;

	for_each(arr, arr + 5, Functor3());
	return 0;
}