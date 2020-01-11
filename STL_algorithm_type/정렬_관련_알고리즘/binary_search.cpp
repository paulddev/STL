#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// binary_search
// 이미 정렬 되어 있는 것 중에서 특정 데이터가 지정 구간에 있는지 조사하는 알고리즘
// 이 알고리즘을 사용할 때에는 꼭 먼저 정렬하고 사용하자.

int main()
{
	vector<int> vec1;
	vec1.push_back(10); vec1.push_back(20); vec1.push_back(15);
	vec1.push_back(7); vec1.push_back(100); vec1.push_back(40);
	vec1.push_back(11); vec1.push_back(60); vec1.push_back(140);

	sort(vec1.begin(), vec1.end());

	bool bFind = binary_search(vec1.begin(), vec1.begin() + 5, 15);
	if (false == bFind)
		cout << "15를 찾지 못했습니다." << endl;
	else
		cout << "15를 찾았습니다." << endl;

	return 0;
}