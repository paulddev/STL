#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<pair<int, int>> v = { {1,2},{3,4},{5,6} };

	/* Range-based for loop (범위 기반 for문)
	   for( for-range-declaration : expression)
	   {
	      statement
	   }
	*/
	for (auto& elem : v)
	{
		cout << elem.first << ' ' << elem.second << endl;
	}

	string str = "ABCD";
	for (auto x : str)
	{
		cout << x << endl;
	}

	return 0;
}