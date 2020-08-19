#include <iostream>
#include <stack>
using namespace std;

int main()
{
	// stack 컨테이너를 이용한 정수 입출력
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty())
		cout << "stack에 데이터 없음" << endl;

	return 0;
}