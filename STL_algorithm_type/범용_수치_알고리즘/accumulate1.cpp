#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
// accumulate
// 범용 수치 알고리즘
// 지정한 구간에 속한 값들을 모두 더한 값을 계산한다.
// 기본적으로 더하기 연산만 하지만 조건자를 사용하면 더하기 이외의 연산도 가능하다.

int main()
{
	vector<int>::iterator Iter;
	vector<int> vec1;

	for (int i = 1; i < 5; i++)
		vec1.push_back(i);

	// vec1에 있는 값
	for (Iter = vec1.begin(); Iter != vec1.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	// vec1에 있는 값들을 더한다.
	int Result1 = accumulate(vec1.begin(), vec1.end(), 0);
	// vec1에 있는 값들을 더한 후 10을 더한다.
	int Result2 = accumulate(vec1.begin(), vec1.end(), 10);

	cout << Result1 << ", " << Result2 << endl;
	return 0;
}