#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
	return abs(right - left) < 5;
}

int main()
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(21);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(33);

	cout << "v1: ";
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;

	cout << "v2: ";
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;

	// equal(b,e,b2) => [b, e) 와 [b2, (e-b))의 순차열이 같은지를 판단.
	if (equal(v1.begin(), v1.end(), v2.begin(), Pred))
		cout << "두 순차열은 같다." << endl;

	return 0;
}