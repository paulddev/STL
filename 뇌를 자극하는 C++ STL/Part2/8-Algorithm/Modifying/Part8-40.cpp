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

int Plus(int left, int right)
{
	return left + right;
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
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	vector<int> v3(5);

	vector<int>::iterator iter_end;
	iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);
	Print(v1, 1);
	Print(v2, 2);
	Print(v3, 3);
	cout << "[v3.begin(), iter_end)의 순차열: ";
	Print(v3, 3);

	return 0;
}
