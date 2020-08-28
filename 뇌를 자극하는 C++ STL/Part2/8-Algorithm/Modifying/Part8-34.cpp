#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(vector<int>& v, int num)
{
	cout << "v" << num << " : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;
}


int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(30);
	v1.push_back(50);

	Print(v1, 1);

	// 순차열의 원소 30을 모두 0으로 수정하는 알고리즘
	replace(v1.begin(), v1.end(), 30, 0);
	Print(v1, 1);

	return 0;
}