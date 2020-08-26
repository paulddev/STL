#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st; // stack의 기본 컨테이너는 deque
       
	st.push(10);
	st.push(20);
	st.push(30);

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}
