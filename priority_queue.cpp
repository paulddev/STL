#include <iostream>
#include <queue>
using namespace std;

// priority_queue 우선순위 큐 - 컨테이너 어댑터
// queue가 FIFO 방식이면, priority_queue는 min-heap, max-heap으로
// push와 pop이 O(logN)으로 처리
// 최대부터 빠지는 힙을 max-heap
// 최소부터 빠지는 힙을 min-heap
// 응용편으로 다익스트라 알고리즘에서 사용한다.

struct Node
{
	int start;
	int end;
	int value;
};

class A
{
public:
	bool operator()(Node a, Node b)
	{
		// value 내림차순
		return a.value < b.value;
	}
};

int main()
{
	// defalut는 max-heap 구조로 작동
	priority_queue<int> pq;

	pq.push(10);
	pq.push(20);
	pq.push(25);
	pq.push(40);
	pq.push(50);
	pq.push(5);

	cout << "pq.size() : " << pq.size() << endl;
	cout << "pq.empty() : " << pq.empty() << endl;
	cout << "pq.top() : " << pq.top() << endl << endl;

	while (!pq.empty())
	{
		cout << pq.top() << ' ';
		pq.pop();
	}

	cout << endl;

	// 위의 코드와 유사
	priority_queue<int, vector<int>, less<int>> pq2;

	// priority_queue<자료형, 구현체, 비교 연산자>
	// 자료형 (int, double, class 등등..)
	/* 구현체
 	   기본적으로 vector<자료형>으로 정의.
	   priority_queue가 실제로는 vector위에서 돌아가고 있다는 것
	   vector가 아니라도 deque<자료형>등을 넣어도 잘 돌아감.
	   STL에서 힙을 구현하기에 충분한 자료구조면 다 됨.
	*/

	/* 비교 연산자
	   기본적으로 less<자료형>으로 정의.
	   이것은 STL에서 기본으로 제공하는 비교 연산자 클래스이며,
	   이것을 넣으면 큰 것부터 나온다.

	   greater<자료형>을 넣으면 작은 것부터 나온다.
	*/

	pq2.push(3);
	pq2.push(1);
	pq2.push(4);
	pq2.push(1);
	pq2.push(5);
	pq2.push(9);

	while (!pq2.empty())
	{
		cout << pq2.top() << ' ';
		pq2.pop();
	}
	cout << endl;

	// min-heap
	priority_queue<int, vector<int>, greater<int> > pq3;

	pq3.push(3);
	pq3.push(1);
	pq3.push(4);
	pq3.push(1);
	pq3.push(5);
	pq3.push(9);

	while (!pq3.empty())
	{
		cout << pq3.top() << ' ';
		pq3.pop();
	}
	cout << endl;

	// class 나 struct에 응용해보기
	Node n1 = { 1,1,5 };
	Node n2 = { 1,2,7 };
	Node n3 = { 1,2,9 };
	Node n4 = { 1,7,3 };

	priority_queue<Node, vector<Node>, A> pq4;

	pq4.push(n1);
	pq4.push(n2);
	pq4.push(n3);
	pq4.push(n4);

	while (!pq4.empty())
	{
		Node temp = pq4.top();
		pq4.pop();

		cout << "[" << temp.start << "," << temp.end << "," << temp.value << "]" << endl;
	}

	return 0;
}