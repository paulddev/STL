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
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(11);
	v2.push_back(22);
	v2.push_back(33);
	v2.push_back(44);
	v2.push_back(55);

	Print(v1, 1);
	Print(v2, 2); cout << endl;

	swap_ranges(v1.begin(), v1.end(), v2.begin());

	Print(v1, 1);
	Print(v2, 2); cout << endl;

	swap(v1, v2);

	Print(v1, 1);
	Print(v2, 2); cout << endl;
	return 0;
}