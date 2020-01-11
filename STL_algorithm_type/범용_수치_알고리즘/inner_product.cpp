#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
// inner_product
// 두 입력 시퀀스의 내적을 계산하는 알고리즘
// 두 입력 시퀀스의 값은 위치의 값을 서로 곱한 값을 모두 더 한 것이 최종값이다.
// 주의할 점은 두 번째 시퀀스는 첫 번째 시퀀스 구간보다 크거나 같아야한다.

int main()
{
	vector<int> vec1;
	for (int i = 1; i < 4; i++)
		vec1.push_back(i);

	vector<int> vec2;
	for (int i = 1; i < 4; i++)
		vec2.push_back(i);

	// 네 번째 파라미터는 추가 값을 의미한다.
	int Result = inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
	// 14 = 0 + (1 * 1) + (2 * 2) + (3 * 3)
	cout << Result << endl;
	return 0;
}