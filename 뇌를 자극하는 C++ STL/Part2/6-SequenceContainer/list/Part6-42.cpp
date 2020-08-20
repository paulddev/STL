#include <iostream>
#include <list>
#include <functional>
using namespace std;

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

	// list는 algorithm의 sort를 사용할 수 없다. (vector, deque는 임의 접근 반복자이므로 가능)
	// 그렇기 때문에 자체 정렬 함수 sort()를 사용한다.
	lt.sort(); // 오름차순(less) 정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	lt.sort(greater<int>()); // 내림차순(greater) 정렬
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}