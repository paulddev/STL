#include <iostream>
using namespace std;

class Equal
{
public:
	bool operator()(int a, int b) const
	{
		return a == b ? true : false;
		// return a == b; 이렇게 해도 된다.
	}
};


int main()
{
	Equal cmp;

	if (cmp(10, 20))
		cout << "같다!" << endl;
	else
		cout << "다르다!" << endl;
	return 0;
}