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

bool Pred(int left, int right)
{
	return abs(right - left) < 10;
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(30);
	v1.push_back(32);
	v1.push_back(40);
	v1.push_back(50);

	Print(v1, 1);
	vector<int>::iterator iter_end;
	iter_end = unique(v1.begin(), v1.end(), Pred);

	Print(v1, 1);
	for (vector<int>::iterator iter = v1.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;
	return 0;
}