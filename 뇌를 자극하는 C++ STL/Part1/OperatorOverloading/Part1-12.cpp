#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }
	const Point operator-(const Point& arg) const
	{
		return Point(x - arg.x, y - arg.y); 
	}
};

int main()
{
	Point p1(2, 3), p2(5, 5);
	Point p3;

	// 멤버 함수를 이용한 연산자 오버로딩
	p3 = p1 - p2;

	p3.Print();
	return 0;
}