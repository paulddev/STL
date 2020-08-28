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
	return 30 <= n && n <= 40;
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
	// 순차열의 원소를 논리적으로 제거할 뿐, 실제 제거하지 않는다. (덮어쓰기)
	iter_end = remove_if(v1.begin(), v1.end(), Pred);

	Print(v1, 1);

	// 실제로 제거하는 함수는 erase()
	v1.erase(iter_end, v1.end());
	Print(v1, 1);

	return 0;
}