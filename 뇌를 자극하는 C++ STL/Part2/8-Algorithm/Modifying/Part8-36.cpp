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

bool Pred(int n)
{
	return n <= 30;
}


int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	vector<int> v2(6);
	vector<int> v3(6);

	Print(v1, 1);
	Print(v2, 2);
	Print(v3, 3); cout << endl;

	vector<int>::iterator iter_end;
	// 30인 원소를 모두 0으로 변환하고 [v2.begin(), iter_end) 순차열에 저장
	iter_end = replace_copy(v1.begin(), v1.end(), v2.begin(), 30, 0);
	// 30이하인 원소를 모두 0으로 변환하고 [v3.begin(), iter_end) 순차열에 저장
	iter_end = replace_copy_if(v1.begin(), v1.end(), v3.begin(), Pred, 0);

	Print(v1, 1);
	Print(v2, 2);
	Print(v3, 3);
	return 0;
}