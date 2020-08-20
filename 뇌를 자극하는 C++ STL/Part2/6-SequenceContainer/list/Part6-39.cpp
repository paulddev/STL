#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// reverse() 모든 원소를 뒤집는다.
	lt.reverse();
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}