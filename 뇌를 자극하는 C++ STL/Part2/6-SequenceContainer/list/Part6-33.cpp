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

	list<int>::iterator iter = lt.begin();
	list<int>::iterator iter2;
	++iter;
	++iter;

	iter2 = lt.erase(iter);

	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// 노드 기반 컨테이너인 삽입과 삭제 동작은
	// 반복자를 무효화시키지 않는다는 것을 보여준다.
	// 반복자는 가리키는 원소 자체가 제거되지 않는 한 반복자가 가리키는 원소는
	// 그대로 존재하게 된다.
	cout << "iter2: " << *iter2 << endl;

	iter = iter2;
	iter2 = lt.insert(iter, 300);
	for (iter = lt.begin(); iter != lt.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	cout << "iter2: " << *iter2 << endl;

	return 0;
}