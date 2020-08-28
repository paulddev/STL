#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	fill(v.begin(), v.end(), 0);
	cout << "v: ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	fill_n(v.begin(), 3, 55);
	cout << "v: ";
	for (const auto& n : v)
		cout << n << " ";
	cout << endl;

	return 0;
}