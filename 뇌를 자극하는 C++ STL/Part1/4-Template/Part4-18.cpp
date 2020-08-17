#include <iostream>
#include <string>
using namespace std;

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
	while (begin != end)
	{
		pf(*begin++);
	}
}

void PrintInt(int data)
{
	cout << data << ' ';
}

void PrintString(string data)
{
	cout << data << ' ';
}

int main()
{
	int arr[5] = { 10,20,30,40,50 };
	//For_each(arr, arr + 5, PrintInt);
	For_each<int*, void(*)(int)>(arr, arr + 5, PrintInt); // 명시적으로 함수 템플릿을 호출
	cout << endl;

	string sarr[3] = { "abc","awqe","adwrrtd" };
	//For_each(sarr, sarr + 3, PrintString);
	For_each<string*, void(*)(string)>(sarr, sarr + 3, PrintString);
	cout << endl;

	return 0;
}