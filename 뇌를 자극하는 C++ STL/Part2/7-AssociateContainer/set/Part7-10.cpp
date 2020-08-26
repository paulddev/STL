#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	pair<set<int>::iterator, set<int>::iterator> iter_pair;

	iter_pair = s.equal_range(55);
	cout << "lower: " << *iter_pair.first << endl;
	cout << "upper: " << *iter_pair.second << endl << endl;


	iter_pair = s.equal_range(30);
	cout << "lower: " << *iter_pair.first << endl;
	cout << "upper: " << *iter_pair.second << endl << endl;


	if (iter_pair.first != iter_pair.second)
		cout << "55가 set에 존재" << endl;
	else
		cout << "55가 set에 존재하지 않음" << endl;

	return 0;

}
