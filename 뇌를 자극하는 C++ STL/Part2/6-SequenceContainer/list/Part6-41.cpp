#include <iostream>
#include <list>
using namespace std;

// first:현재 원소, second:다음 원소
bool Predicate(int first, int second)
{
	return second - first <= 0;
}
int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// unique(Predicate): 이항 조건자가 참이면 원소를 제거
	lt.unique(Predicate);
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}