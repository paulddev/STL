#include <iostream>
#include <deque>
using namespace std;

// deque(데크, 덱) - sequence 컨테이너
// 벡터와 비슷하게 O(1)으로 임의의 위치에 원소 접근이 가능
// 또한 앞/뒤 원소를 추가, 삭제도 O(1)
// 다만, 임의의 위치에 있는 원소를 제거/추가는 O(N)
// 이런 부분은 벡터보다 빠르지만, 실행 속도를 위해서 메모리를 희생하는 컨테이너

template<typename T>
void Print(const deque<T>& dq)
{
	for (const auto& elem : dq)
		cout << elem << ' ';

	cout << endl;
}

int main()
{
	// 선언
	deque<int> dq;

	// 삽입
	dq.push_back(10);  // 뒤로
	dq.push_front(50); // 앞으로
	dq.push_back(20);
	dq.push_front(30);

	// 출력 
	Print(dq);

	// 검색
	for (int i = 0; i < dq.size(); ++i)
		if (dq[i] == 10)
			cout << "10을 찾았다." << endl;

	// 삭제
	dq.pop_back();    // 뒤로 삭제
	dq.pop_front();   // 앞으로 삭제

	// 출력
	Print(dq);

	// 그 외의 기능들
	// 3의 값으로 4개의 원소 할당 (기존의 원소들은 삭제)
	dq.assign(4, 3);
	// 출력
	Print(dq);
	// 해당 idx 번째 원소 참조
	// 유효 범위를 점검하므로 dq[idx]보다 느림
	cout << "dq.at(3) : " << dq.at(3) << endl;
	// 유효 범위 체크는 안하지만 빠름
	cout << "dq[3] : " << dq[3] << endl;

	dq.push_back(10);
	dq.push_front(20);

	// 첫 번째 원소 참조
	cout << "dq.front() : " << dq.front() << endl;
	// 마지막 원소 참조
	cout << "dq.back() : " << dq.back() << endl << endl;

	// 크기 조절
	// 만약 크기가 더 커질 경우, 비어있는 원소는 0으로 초기화
	// 크기가 더 작아진다면, 잘린부분은 잃는다.
	dq.resize(10);
	cout << "dq.size() : " << dq.size() << endl;
	cout << "dq.front() : " << dq.front() << endl;
	Print(dq);

	deque<int> dq2;
	dq2.swap(dq); // dq와 dq2를 바꾼다.

	Print(dq2);
	cout << "dq.size() : " << dq.size() << endl;
	cout << "dq2.size() : " << dq2.size() << endl;


	return 0;
}