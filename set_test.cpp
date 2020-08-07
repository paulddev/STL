#include <iostream>
#include <set>
using namespace std;

// set - 연관 컨테이너
// key라 불리는 원소들의 집합이며,
// key는 유일하며, 중복을 허용하지 않음
// 삽입할 때 자동으로 정렬해줌(less - 오름차순)

template<typename T>
void Print(const set<T>& s)
{
	for (const auto& elem : s)
		cout << elem << ' ';
	cout << endl;
}

int main()
{
	// 선언
	set<int> s;

	// 삽입
	s.insert(10);
	s.insert(5);
	s.insert(7);
	s.insert(2);
	s.insert(4);

	// 출력
	Print(s);

	// 중복 값 넣어보기
	s.insert(10);

	// 출력
	Print(s);

	// 검색 및 삭제
	if (s.find(10) != s.end())
	{
		cout << "검색된 key : " << *s.find(10) << endl;
		s.erase(s.find(10));
	}

	// 출력
	Print(s);

	// 원소의 개수
	cout << "s.size() : " << s.size() << endl;

	// key에 해당하는 원소의 개수
	cout << "s.count(10) : " << s.count(10) << endl;
	cout << "s.count(5) : " << s.count(5) << endl;

	// 모든 원소 삭제
	s.clear();

	return 0;
}