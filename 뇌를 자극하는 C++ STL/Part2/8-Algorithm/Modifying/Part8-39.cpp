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

int Func(int n)
{
	return n + 5;
}


int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2(10);

	Print(v1, 1);
	Print(v2, 2); cout << endl;

	vector<int>::iterator iter_end;
	// transform 알고리즘도 목적지의 끝 반복자를 반환한다.
	iter_end = transform(v1.begin(), v1.end(), v2.begin(), Func);
	Print(v1, 1);
	Print(v2, 2); cout << endl;

	cout << "[v2.begin(), iter_end) 순차열: " << *v2.begin() << "..." << *(iter_end - 1) << endl;

	return 0;
}