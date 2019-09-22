#include <iostream>
#include <set>
using namespace std;

// 균형잡힌 이진트리 (AVL 트리)
// 원소 삽입과 삭제, 탐색 등의 연산은 O(logN)을 보장한다.

int main() {
	// int 자료형을 저장하는 균형잡힌 이진트리 생성
	set<int> s;

	// 원소 5를 삽입
	s.insert(5);

	// 원소 6값을 가지는 원소를 찾는다
	// 있다면 해당 원소의 주소값을 리턴
	// 없다면 s.end()를 리턴한다.
	if (s.find(6) != s.end())
		cout << "존재" << '\n';
	else
		cout << "없음" << '\n';

	// 저장된 원소의 수 리턴
	cout << s.size() << '\n';

	// 모든 원소 삭제
	s.clear();

	// 2번째 원소 삭제
	s.erase(++s.begin());
	return 0;
}