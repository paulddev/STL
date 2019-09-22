#include <iostream>
#include <stack>
using namespace std;

// 스택 자료구조

int main() {
	// int 자료형을 저장하는 스택 생성
	stack<int> st;

	// 원소 4를 삽입
	st.push(4);

	// 맨 위 원소를 팝
	st.pop();

	// 맨 위 원소 값을 출력
	cout << st.top() << '\n';

	// 스택이 비어있다면 1, 아니면 0
	cout << st.empty() << '\n';

	// 스택에 저장되어 있는 원소의 수 출력
	cout << st.size();
	return 0;
}