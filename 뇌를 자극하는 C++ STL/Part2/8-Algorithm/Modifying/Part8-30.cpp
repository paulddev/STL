#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Integer
{
	int data;
public:
	explicit Integer(int d = 0) : data(d) { }
	int operator()()
	{
		return data++;
	}
};

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

	// [v.begin(), v.end())의 원소를 1 ~ 5로 채움
	generate(v.begin(), v.end(), Integer(1));
	cout << "v : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	generate(v.begin(), v.end(), Integer(100));
	cout << "v : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	// [v.begin(), v.begin() + 3)의 원소를 1 ~ 3로 채움
	generate_n(v.begin(), 3, Integer(1));
	cout << "v : ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	return 0;
}