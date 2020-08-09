#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

// tuple
// pair와 같지만 3개 이상 묶을 때
// 인덱스를 통해 접근 가능
// get<index>(tuple)
// 헤더파일 <tuple> 포함

int main()
{
	tuple<int, int, int> t1 = make_tuple(1, 2, 3);

	cout << get<0>(t1) << ' ';
	cout << get<1>(t1) << ' ';
	cout << get<2>(t1) << endl;

	tuple<char, string, int> t2 = make_tuple('A', "Hello", 10);

	cout << get<0>(t2) << ' ';
	cout << get<1>(t2) << ' ';
	cout << get<2>(t2) << endl;

	vector<tuple<int, int, int>> vec;

	tuple<int, int, int> t3 = { 1,2,3 };
	tuple<int, int, int> t4 = { 4,5,6 };
	tuple<int, int, int> t5 = { 7,8,9 };

	vec.push_back(t3);
	vec.push_back(t4);
	vec.push_back(t5);

	for (int i = 0; i < vec.size(); ++i)
	{
		cout << get<0>(vec[i]) << ' ';
		cout << get<1>(vec[i]) << ' ';
		cout << get<2>(vec[i]) << endl;
	}
	return 0;
}