#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	// vector 컨테이너를 이용한 stack 컨테이너 생성
	stack<int, vector<int>> st;

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