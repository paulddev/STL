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

	// deque는 배열 기반 컨테이너이므로 임의 접근 반복자를 지원한다.
	// +,-,+=,-=,[] 연산을 지원한다.
	deque<int>::iterator iter;
	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	iter = dq.begin() + 2;
	cout << *iter << endl;

	iter += 2;
	cout << *iter << endl;

	iter -= 3;
	cout << *iter << endl;

	return 0;
}