#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
};

int main()
{
	/* 일반 포인터 p1, p2는 가리키는 동적 객체를 delete 연산으로 직접 제거해야
	   메모리 누수가 발생하지 않는다.
	   하지만 사용 중에 함수가 종료하거나 예외 등이 발생하면 동적으로 할당한
	   메모리를 해제하지 못하는 문제가 발생하게 된다.
	   */
	Point* p1 = new Point(2, 3); // 메모리 할당
	Point* p2 = new Point(5, 5); // 메모리 할당

	p1->Print(); // p1의 멤버 함수 호출
	p2->Print();

	delete p1; // 메모리 제거
	delete p2;
	return 0;
}