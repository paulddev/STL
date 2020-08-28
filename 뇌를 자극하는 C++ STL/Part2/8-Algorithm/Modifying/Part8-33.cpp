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

template<typename T>
struct Greater
{
	bool operator()(const T& left, const T& right)
	{
		return left > right;
	}
};

int main()
{
	vector<int> v1;
	v1.push_back(80);
	v1.push_back(60);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(10);

	vector<int> v2;
	v2.push_back(70);
	v2.push_back(40);
	v2.push_back(20);

	vector<int> v3(10);
	vector<int>::iterator iter_end;
	// STL greater 사용하면
	// iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), greater<int>());
	iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), Greater<int>());

	Print(v1, 1);
	Print(v2, 2);
	Print(v3, 3);

	cout << "v3(합병 순차열): " << *v3.begin() << "~" << *(iter_end - 1) << endl;
	return 0;
}
