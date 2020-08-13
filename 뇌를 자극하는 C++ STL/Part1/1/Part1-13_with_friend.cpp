#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }

	// getter, setter를 사용하지 않고 x, y에 직접 접근이 가능
	// 이는 클래스 Point의 모든 것들을 제한 없이 접근이 가능하게 된다.
	friend const Point operator-(const Point& argL, const Point& argR);
};

// 전역 함수를 이용한 연산자 오버로딩
const Point operator-(const Point& argL, const Point& argR)
{
	return Point(argL.x - argR.x, argL.y - argR.y);
}

int main()
{
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 - p2;

	p3.Print();
	return 0;
}