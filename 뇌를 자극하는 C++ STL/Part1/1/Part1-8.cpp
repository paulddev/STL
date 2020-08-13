#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const { cout << x << ',' << y << endl; }

	const Point& operator++() // 전위 ++
	{
		++x;
		++y;
		return *this;
	}

	const Point operator++(int) // 후위 ++
	{
		/*
		Point pt(x, y);
		++x;
		++y;
		return pt;
		*/

		// 중복 코드를 피하는 방법으로 아래 처럼 사용도 가능
		Point tmp = *this;
		++(*this);
		return tmp;
	}
};

int main()
{
	Point p1(2, 3), p2(2, 3);
	Point result;

	result = ++p1;
	p1.Print();
	result.Print();
	cout << endl;

	result = p2++;
	p2.Print();
	result.Print();
	return 0;
}