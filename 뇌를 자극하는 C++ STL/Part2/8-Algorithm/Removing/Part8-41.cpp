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
	v1.push_back(40);
	v1.push_back(50);

	Print(v1, 1);

	vector<int>::iterator iter_end;
	iter_end = remove(v1.begin(), v1.end(), 30);

	Print(v1, 1);

	cout << "remove 후 [v.begin(), iter_end) 순차열: ";
	for (vector<int>::iterator iter = v1.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;

	return 0;
}
