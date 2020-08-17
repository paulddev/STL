#include <iostream>
using namespace std;

class Adder
{
	int total;
public:
	explicit Adder(int n = 0) : total(0){}
	int operator()(int n)
	{
		return total += n;
	}
};

int main()
{
	Adder add(0);

	cout << add(10) << endl;
	cout << add(20) << endl;
	cout << add(30) << endl;
	return 0;
}