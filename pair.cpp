#include <iostream>
#include <algorithm>
using namespace std;

// pair를 사용하면 두 자료형 T1과 T2로 묶을 수 있다.
// 첫 번째 자료 : first, 두 번째 자료 : second 접근
// make_pair( ), { } 로 insert 가능
// 헤더 파일은
// <algorithm>, <vector>

int main()
{
	pair<int, int> p1 = make_pair(1, 2);
	cout << p1.first << ' ' << p1.second << endl;

	p1 = pair<int, int>(3, 4);
	cout << p1.first << ' ' << p1.second << endl;
	return 0;
}