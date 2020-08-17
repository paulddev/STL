#include <iostream>
#include <functional>
using namespace std;

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

struct Minus
{
	int operator()(int a, int b)
	{
		return a - b;
	}
};

int main()
{
	cout << Plus()(10, 20) << endl;
	cout << Plus()(20, 10) << endl;
	cout << Minus()(10, 20) << endl;
	cout << Minus()(20, 10) << endl;
	cout << endl;
	
	cout << plus<int>()(10, 20) << endl;
	cout << plus<int>()(20, 10) << endl;
	cout << minus<int>()(10, 20) << endl;
	cout << minus<int>()(20, 10) << endl;
	return 0;
}