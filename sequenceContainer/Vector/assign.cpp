#include <iostream>
#include <vector>
using namespace std;

/* assign : 벡터에 새로운 내용을 넣는데, 원래 벡터에 있었던 원소들은 삭제된다. */

int main()
{
	vector<int> first;
	vector<int> second;
	vector<int> third;

	first.assign(7, 100); // 100을 7번 반복해서 넣기.

	vector<int>::iterator it;
	it = first.begin() + 1;

	second.assign(it, first.end() - 1);

	int myints[] = { 1776, 7,4 };
	third.assign(myints, myints + 3);
        
	// 100 100 100 100 100 100 100
	for (int i = 0; i < first.size(); i++) cout << first[i] << ' ';
	cout << endl;
        // 100 100 100 100 100
	for (int i = 0; i < second.size(); i++) cout << second[i] << ' ';
	cout << endl;
        // 1776 7 4
	for (int i = 0; i < third.size(); i++) cout << third[i] << ' ';
	cout << endl;

	return 0;
}
