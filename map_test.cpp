#include <iostream>
#include <map>
using namespace std;

// map은 딕셔너리 자료구조 (연관 컨테이너)
// key 와 value 로 구성 (key는 고유한 값, 중복이 불가능)
// 삽입이 되면서 자동으로 정렬해준다.
// 삽입, 삭제, 검색 등의 연산은 O(logN)

int main()
{
	// 선언
	map<int, int> m;

	// 삽입
	m.insert(make_pair(4, 5));
	m[5] = 6;

	// 출력
	for (auto elem : m)
	{
		cout << elem.first << "," << elem.second << endl;
	}
	// 사이즈
	cout << "m.size() : " << m.size() << endl;

	// 검색
	cout << "m.find(4) : ";
	if (m.find(4) != m.end())
	{
		cout << "검색 성공" << endl;
		cout << "key : " << m.find(4)->first << endl;
		cout << "value : " << m.find(4)->second << endl;
		
		// 또한, 검색을 해서 값을 변경할 수 있다.
		// 변경하기 싫다면 const iterator로 찾자.
	}
	else
		cout << "검색 실패" << endl;

	// 주의할 점
	m[6] = 7;
	m[6] = 8; // (수정)
	// 출력
	for (auto elem : m)
	{
		cout << elem.first << "," << elem.second << endl;
	}
	// 사이즈
	cout << "m.size() : " << m.size() << endl;

	// 해당 key와 연관된 원소의 개수를 리턴
	cout << "m.count(7) : " << m.count(7) << endl;
	cout << "m.count(6) : " << m.count(6) << endl;

	// 모든 원소 삭제
	m.clear();


	return 0;
}