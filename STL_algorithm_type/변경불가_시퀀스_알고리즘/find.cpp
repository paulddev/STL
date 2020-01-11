#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
// find (변경 불가 시퀀스 알고리즘)
// 컨테이너에 있는 데이터 중 원하는 것을 찾는 알고리즘

// vector, list, deque도 같은 방식
// 연관 컨테이너의 경우는 멤버로 find()연산을 가지고 있다.

// 캐릭터 아이템 검색 예제
int main()
{
	vector<int> CharItems;
	CharItems.push_back(12);
	CharItems.push_back(100);
	CharItems.push_back(77);

	vector<int>::iterator FindIter;

	// [처음 ~ 끝)에서 12를 찾는다.
	FindIter = find(CharItems.begin(), CharItems.end(), 12);
	if (FindIter != CharItems.end())
		cout << "CharItem 12를 찾았다." << endl;
	else
		cout << "CharItem 12는 없다." << endl;

	// [두 번째 ~ 끝)에서 12를 찾는다.
	FindIter = find(++CharItems.begin(), CharItems.end(), 12);
	if (FindIter != CharItems.end())
		cout << "CharItem 12를 찾았다." << endl;
	else
		cout << "CharItem 12는 없다." << endl;
}