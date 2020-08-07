#include <iostream>
#include <vector>
using namespace std;

// vector - sequence 컨테이너
// 자동으로 메모리가 할당되는 배열 (동적 배열)
// 맨 뒤에서 원소 삽입과 삭제 가능 O(1)
// 임의의 원소 접근 O(1) 가능
// 중간에 원소를 삽입, 삭제 시 O(N) - 배열 기반이기 때문

template<typename T>
void Print(const vector<T>& v)
{
	for (const auto elem : v)
	{
		cout << elem << ' ';
	}
	cout << endl;
}


struct Node
{
	int data;
	Node* next;
};

int main()
{
	/* 다양한 선언 부분 */
	vector<int> vec1;
	vector<double> vec2;
	vector<Node> vec3;

	// 벡터의 초기 크기를 5로 설정, 이 때 요소들은 0으로 초기화
	vector<int> vec4(5);
	// 벡터의 초기 크기를 5로 설정, 이 때 요소들은 1으로 초기화
	vector<int> vec5(5, 1);

	// n x m 인 2차원 벡터를 선언하고 0으로 초기화
	int n = 5, m = 6;
	vector<vector<int> > vec6(n, vector<int>(m, 0));

	// 삽입
	vec1.push_back(10);

	// 삭제
	vec1.pop_back();

	cout << "vec1.size() : " << vec1.size() << endl;

	// 크기 재설정
	vec1.resize(10);
	cout << "vec1.size() : " << vec1.size() << endl;

	// [a, b) 주소 구간에 해당하는 원소 삭제
	vec1.erase(vec1.begin(), vec1.end());
	cout << "vec1.size() : " << vec1.size() << endl;

	// 이런 것도 가능
	vector<int> v1 = { 1,2,3,4,5 };
	vector<int> v2 = vector<int>(v1.begin() + 2, v1.end());
	Print(v2);

	return 0;
}
