//https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
using namespace std;

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	/* Rotate
	*  rotate(begin, mid, end)
	*  [begin, end)를 mid 기준으로 왼쪽으로 회전시킨다.
	   
	*  시간 복잡도 : O(N)
	   */
	vector<int> a = { 0,1,2,3,4,5 };

	for (int i = 0; i < a.size(); ++i)
	{
		// 정방향 반복자(Forward Iterator)
		// vector의 요소가 왼쪽으로 한 칸씩 이동한다.
		rotate(a.begin(), a.begin() + 1, a.end());
		print(a);
	}
	/*
	1 2 3 4 5 0
	2 3 4 5 0 1
	3 4 5 0 1 2
	4 5 0 1 2 3
	5 0 1 2 3 4
	0 1 2 3 4 5
	*/

	cout << endl;
	for (int i = 0; i < a.size(); ++i)
	{
		// 역방향 반복자(Reverse Iterator)
		// vector의 요소가 오른쪽으로 한 칸씩 이동한다.
		rotate(a.rbegin(), a.rbegin() + 1, a.rend());
		print(a);
	}
	cout << endl;
	/*
	5 0 1 2 3 4
	4 5 0 1 2 3
	3 4 5 0 1 2
	2 3 4 5 0 1
	1 2 3 4 5 0
	0 1 2 3 4 5
	*/

	/* fill
	*  fill(begin, end, value)
	*  [begin, end)를 value로 채운다.
	*  시간복잡도 : O(N)
	   */
	vector<int> b = { 1,5,6,8,9 };
	print(b);
	fill(b.begin(), b.end(), 7);
	print(b);
	cout << endl;

	/* 타입 확인하기
	   #include <typeinfo>
	   typeid(target).name()으로 확인
	   */

	cout << typeid(int).name() << endl;
	cout << typeid("hello").name() << endl;

	return 0;
}