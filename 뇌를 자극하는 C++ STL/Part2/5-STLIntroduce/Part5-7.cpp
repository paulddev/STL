#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;

	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);

	// sort 알고리즘에 함수 객체 less와 greater를 적용
	sort(v.begin(), v.end(), less<int>()); // 오름차순
	for (int n : v)
		cout << n << " ";
	cout << endl;

	sort(v.begin(), v.end(), greater<int>()); // 내림차순
	for (int n : v)
		cout << n << " ";
	cout << endl;

	return 0;
}