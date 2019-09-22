#include <iostream>
#include <vector>
using namespace std;

// vector는 동적배열이다.
// 임의의 위치에 있는 원소 접근과,
// 뒤에서 원소를 추가하는 연산은 O(1)(분할상환분석)을 보장한다.
// *분할상환분석은?
// (amortized analysis)은 주어진 알고리즘의 시간 복잡도나 
// 프로그램을 수행하는데 소요되는 시간 또는 메모리 같은 자원 사용량
// 을 분석하기 위해서 사용하는 기법이다.
// 알고리즘을 분석할 때에 각각의 연산마다 최악의 경우를 따져본다는 것은
// 굉장히 힘든 일이기 때문에, 이를 쉽게 해결하기 위해 분할상환분석이라는
// 방법론이 나오게 된다.

// 분할상환분석은 알고리즘의 전반적인 연산 집합에 대해 비용이 높은 연산,
// 그리고 비용이 덜한 연산 모두를 함께 고려하는 기법이다.
// 분할상환분석은 최악의 경우에도 각 연산의 평균 수행성능을 보장한다.
// 예를 들어 vector에서는 최초 용량이 4에서 용량이 8인 공간을 확보한 다음
// 기존 배열에 저장되었던 요소들을 새 배열로 옮기는 작업이 필요
// 즉, 고비용 연산이 가끔 발생하지만 전체적으로는 비용이 높지 않다는 것.

int main() {
	// int 자료형을 저장하는 동적배열
	vector<int> vec1;

	// double
	vector<double> vec2;

	// 사용자가 정의한 Node 구조체를 저장하는 동적배열
	vector<Node> vec3;

	// 벡터의 초기 크기를 n으로 설정
	vector<int> vec4(n);

	// 벡터의 초기 크기를 n으로 설정하고 1로 초기화
	vector<int> vec5(n, 1);

	// 크기가 n*m인 2차원 벡터를 선언하고 0으로 초기화
	vector<vector<int> >vec6(n, vector<int>(m, 0));

	// 벡터의 맨 뒤에 원소(5)를 추가
	vec1.push_back(5);

	// 벡터의 맨 뒤 원소 삭제
	vec1.pop_back();

	// 벡터의 크기 출력
	cout << vec1.size() << '\n';

	// 벡터의 크기를 n으로 재설정
	vec1.resize(n);

	// 벡터의 모든 원소를 삭제
	vec1.clear();

	// 벡터의 첫 원소의 주소, 마지막 원소의 다음 주소 리턴
	vec1.begin();
	vec1.end();

	// [a, b) 주소 구간에 해당하는 원소 삭제
	vec1.erase(vec1.begin(), vec1.end()); // 모든 원소 삭제

	// vec7은 vec1의 2번째 원소부터 마지막 원소까지 복사하여 생성
	vector<int> vec7 = vector<int>(vec1.begin() + 2, vec1.end());
	return 0;
}