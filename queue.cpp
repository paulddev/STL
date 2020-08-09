#include <iostream>
#include <queue>
using namespace std;

// queue - 컨테이너 어댑터
// FIFO 방식
// BFS 기법에 사용됨.

int main()
{
	queue<int> q;

	q.push(10);
	q.push(15);
	q.push(30);
	q.push(2);

	cout << "q.size() : " << q.size() << endl;   // 4
	cout << "q.empty() : " << q.empty() << endl; // 0 (false)
	cout << "q.front() : " << q.front() << endl; // 10
	cout << "q.back() :" << q.back() << endl << endl; // 2

	// 자주 사용되는 기법
	// queue에서 하나씩 꺼내 출력하고 팝한다.
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}