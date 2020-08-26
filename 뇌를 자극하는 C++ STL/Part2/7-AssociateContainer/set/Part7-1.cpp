#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s; // less인 빈 컨테이너

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter; // set의 양방향 반복자
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	s.insert(50); // 중복된 원소(key) 삽입 -> 실패
	s.insert(50);

	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	return 0;

	
}