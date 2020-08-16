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

template<typename T>
void Print(T data)
{
	cout << data << ' ';
}

int main()
{
	int arr[5] = { 10,20,30,40,50 };
	For_each(arr, arr + 5, Print<int>); // 이렇게 하면 정수를 출력하도록
	cout << endl;
	
	string sarr[3] = { "abc","def","ghi" };
	For_each(sarr, sarr + 3, Print<string>); // 이렇게 하면 문자열을 출력하도록
	cout << endl;

	return 0;
}
