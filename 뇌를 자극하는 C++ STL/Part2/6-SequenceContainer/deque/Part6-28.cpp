#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(4, 100);
	deque<int> dq(4, 100);

	// vector는 메모리 재할당을 한 후, 원소를 복사한다.
	v.push_back(200);
	// deque는 메모리 할당만 해주면 된다.
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
		cout << dq[i] << ' ';
	cout << endl;

	return 0;
}