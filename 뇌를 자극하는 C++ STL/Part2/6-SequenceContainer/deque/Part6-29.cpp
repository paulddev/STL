#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << ' ';
	cout << endl;

	// vector와 다르게 deque는 앞쪽에서 빼고 넣을 수 있다.
	dq.push_front(100);
	dq.push_front(200);

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << ' ';
	cout << endl;

	return 0;
}