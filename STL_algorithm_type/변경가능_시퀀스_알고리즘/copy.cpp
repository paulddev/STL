#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

// copy
// 컨테이너에 저장한 것과 같은 자료형을 저장하는 다른 컨테이너에 복사하고 싶을 때

int main()
{
	vector<int> vec1(10);
	generate(vec1.begin(), vec1.end(), rand);

	cout << "vec1의 모든 데이터를 vec2에 copy" << endl;

	vector<int> vec2(10);
	// 첫 번째와 두 번째 파라미터는 복사하려는 시작과 마지막 구간이며,
	// 세 번째 파라미터는 붙여 넣을 출력 구간의 시작 위치를 가리킴
	copy(vec1.begin(), vec1.end(), vec2.begin());
	for (vector<int>::iterator IterPos = vec2.begin(); IterPos != vec2.end(); ++IterPos)
		cout << *IterPos << endl;
	cout << endl;

	cout << "vec1의 모든 데이터를 list1에 copy" << endl;
	list<int> list1(10);
	copy(vec1.begin(), vec1.end(), list1.begin());

	for (list<int>::iterator IterPos2 = list1.begin(); IterPos2 != list1.end(); ++IterPos2)
		cout << *IterPos2 << endl;
	cout << endl;

	return 0;
}