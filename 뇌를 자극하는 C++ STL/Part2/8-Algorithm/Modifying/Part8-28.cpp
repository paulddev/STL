#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 출력 매개변수로 사용하기 위해 &를 사용
void Func(int& r)
{
	r += 5;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	for_each(v.begin(), v.end(), Func);
	cout << "v : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	return 0;
}