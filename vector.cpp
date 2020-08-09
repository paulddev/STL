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

template<typename T>
void print(const vector<T>& v)
{
	for(const auto elem : v)
		cout << elem << ' ';
	cout << endl;
}

struct Node
{
	int data;
	Node* next;
};

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
	
	// 다양한 선언 부분
	vector<int> vec1;
	vector<double> vec2;
	vector<Node> vec3;
	
	// 벡터의 초기 크기를 5로 설정, 요소들은 0으로 초기화
	vector<int> vec4(5);
	
	// 벡터의 초기 크기를 5로 설정, 요소들은 1으로 초기화
	vector<int> vec5(5, 1);
	
	// n x m 인 2차원 벡터를 선언하고 0으로 초기화
	int n = 5, m = 6;
	vector<vector<int> > vec6(n, vector<int>(m, 0));
	
	// 삽입
	vec1.push_back(10);
	
	// 삭제
	vec1.pop_back();
	
	// 크기
	cout << "vec1.size() : " << vec1.size() << endl;
	
	// 크기 재설정
	vec1.resize(10);
	cout << "vec1.size() : " << vec1.size() << endl;
	
	// [a, b) 주소 구간에 해당하는 원소 삭제
	vec1.erase(vec1.begin(), vec1.end());
	cout << "vec1.size() : " << vec1.size() << endl;
	
	// 이런 것도 가능
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = vector<int>(v1.begin() + 2, v1.end());
	print(v2);
	return 0;
}
