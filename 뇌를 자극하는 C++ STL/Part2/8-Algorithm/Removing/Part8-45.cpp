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
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	Print(v1, 1);
	vector<int>::iterator iter_end;
	iter_end = unique(v1.begin(), v1.end());

	Print(v1, 1);
	for (vector<int>::iterator iter = v1.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;

	v1.erase(iter_end, v1.end());
	Print(v1, 1);

	// 위의 과정들을 이렇게 한 문장으로 줄일 수 있다.
	// v1.erase(unique(v1.begin(), v1.end()), v1.end());
	return 0;
}