#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	for (int i = 0; i < 10; ++i)
		dq.push_back((i + 1) * 10);

	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// vector와 비슷하게 insert, erase 함수가 있다.
	// vector보다 효율적임
	// dq에 500을 삽입할 때 앞쪽 원소의 개수가 더 적기 때문에 앞쪽으로 밀어낸다.
	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}