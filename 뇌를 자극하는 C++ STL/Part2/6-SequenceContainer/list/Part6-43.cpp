#include <iostream>
#include <list>
#include <functional>
using namespace std;

// sort()는 이항 조건자를 사용
// 참이면 바꾸지 않고, 거짓이면 두 원소를 바꿔가며 정렬
struct Greater
{
	bool operator()(int left, int right) const
	{
		return left > right;
	}
};

int main()
{
	list<int> lt;

	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(greater<int>()); // 조건자 greater를 사용하며 내림차순 정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(less<int>());
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(Greater()); // 사용자 정의 조건자를 사용하여 내림차순 정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}