#include <iostream>
#include <list>
using namespace std;

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

	// unique()는 인접한 같은 원소를 유일하게 만든다.
	// 주의할 점은 인접한 원소를 하나만 남기므로 연속하지 않는 원소는 중복될 수 있다.
	lt.unique();
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}