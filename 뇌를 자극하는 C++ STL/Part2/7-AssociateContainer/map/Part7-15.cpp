#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> m;
	pair<map<int, int>::iterator, bool> pr;

	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(3, 100));
	m.insert(pair<int, int>(8, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 70));
	m.insert(pair<int, int>(7, 100));

	pr = m.insert(pair<int, int>(9, 50));
	if (true == pr.second)
		cout << "key: " << pr.first->first << ", value: " << pr.first->second << " 저장 완료" << endl;
	else
		cout << "key 9가 이미 m에 있다." << endl;

	pr = m.insert(pair<int, int>(9, 50));
	if (true == pr.second)
		cout << "key: " << pr.first->first << ", value: " << pr.first->second << " 저장 완료" << endl;
	else
		cout << "key 9가 이미 m에 있다." << endl;

	return 0;
}