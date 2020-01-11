#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// sort
// 컨테이너에 있는 데이터들을 내림차순 또는 오름차순으로 정렬 할 때 사용
// 데이터의 자료형이 기본형이라면 STL에 있는 greater나 less 비교 조건자를 사용
// string의 정렬에도 사용이 가능하며, 이 때는 알파벳 순서로 정렬된다.

int main()
{
	vector<int> vec1(10);
	vector<int> vec2(10);
	vector<int> vec3(10);
	vector<int>::iterator Iter1;

	generate(vec1.begin(), vec1.end(), rand);
	generate(vec2.begin(), vec2.end(), rand);
	generate(vec3.begin(), vec3.end(), rand);

	// 오름차순 정렬
	cout << "vec1 정렬 하기 전" << endl;
	for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec1.begin(), vec1.end());

	cout << "vec1 오름차순 정렬" << endl;
	for (Iter1 = vec1.begin(); Iter1 != vec1.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl << endl;

	// 내림차순 정렬
	cout << "vec2 정렬 하기 전" << endl;
	for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec2.begin(), vec2.end(), greater<int>());

	cout << "vec2 내림차순 정렬" << endl;
	for (Iter1 = vec2.begin(); Iter1 != vec2.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl << endl;

	// 일부만 내림차순 정렬
	cout << "vec3 정렬 하기 전" << endl;
	for (Iter1 = vec3.begin(); Iter1 != vec3.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	sort(vec3.begin() + 5, vec3.end(), greater<int>());
	cout << "vec3 일부만 내림차순 정렬" << endl;
	for (Iter1 = vec3.begin(); Iter1 != vec3.end(); ++Iter1)
		cout << *Iter1 << ", ";
	cout << endl;

	return 0;
}