#include <iostream>
#include <vector>
using namespace std;

// vector
// 동적 배열, 길이를 변경할 수 있는 배열
/*
vector<vector<int>> v; 2차원 벡터
v.push_back(n);        data 추가
v.pop_back():          data 삭제
v.clear();             벡터 초기화
v.size();              벡터의 크기
v.empty();             비어있다면 true
v.front();             벡터의 첫 번째 원소
v.back();              벡터의 마지막 원소
v.insert(v.begin(), 5, 0);  벡터의 첫 번째 원소 앞에 0을 5개 삽입
v.erase(v.begin() + 2);     벡터의 첫 번째 원소에서 2만큼 옆으로 떨어진 원소 삭제
*/

int main()
{
	vector<int> v = { 1,2,3,4,5 };

	// range-based for statement 범위 기반 for문
	for (int elem : v)
	{
		cout << elem << ' ';
	}
	cout << endl;

	// iterator 사용
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}