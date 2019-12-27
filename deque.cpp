#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	deque<int> dq;

	for (int i = 0; i < 5; i++)
		dq.push_back(i + 1);

	// 앞에 추가해보기
	dq.push_front(100);
	dq.push_front(200);

	// 뒤에 추가해보기
	dq.push_back(50);
	dq.push_back(60);

	// 전체적으로 출력해보기
	deque<int>::iterator iter;
	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// insert case 1:
	iter = dq.begin();
	dq.insert(iter, 1000);
	// 반복문 다음 형태도 가능하다.
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq[i] << ' ';
	cout << endl << endl;

	// insert case 2:
	iter = dq.begin() + 3;
	dq.insert(iter, 2000);

	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// insert case 3:
	deque<int> dq2;
	dq2.push_back(11);
	dq2.push_back(22);
	dq2.push_back(33);

	iter = dq.begin();
	dq.insert(iter, dq2.begin(), dq2.end());
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// erase case 1:
	iter = dq.begin();
	dq.erase(iter);
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// erase case 2:
	iter = dq.begin() + 3;
	dq.erase(iter, dq.end());
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// 정렬하기 전에 데이터 넣고,
	for (int i = 10; i > 0; i--)
		dq.push_back(i);

	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// sort (오름차순)
	sort(dq.begin(), dq.end());
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq.at(i) << ' ';
	cout << endl << endl;

	// 역순으로 출력해보기
	deque<int>::reverse_iterator rIter;
	for (rIter = dq.rbegin(); rIter != dq.rend(); ++rIter)
		cout << *rIter << ' ';
	cout << endl;
	return 0;
}