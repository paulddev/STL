#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// merge
// 두 개의 정렬된 구간을 합칠 때 사용한다.
// 두 구간과 겹치지 않은 곳에 합친 결과를 넣어야 한다.
// 합치기 전에 이미 정렬이 되어 있어야 하며, 합친 결과를 넣을 수 있는 공간을 확보

int main()
{
	vector<int>::iterator Iter;
	vector<int> vec1, vec2, vec3(12);
	
	for (int i = 0; i < 6; i++)
		vec1.push_back(i);

	for (int i = 4; i < 10; i++)
		vec2.push_back(i);

	cout << "vec1에 있는 값" << endl;
	for (Iter = vec1.begin(); Iter != vec1.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	cout << "vec2에 있는 값" << endl;
	for (Iter = vec2.begin(); Iter != vec2.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;

	// merge 부분
	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());

	cout << "vec1과 vec2를 merge한 vec3에 있는 값" << endl;
	for (Iter = vec3.begin(); Iter != vec3.end(); ++Iter)
		cout << *Iter << ", ";
	cout << endl;
	return 0;
}
