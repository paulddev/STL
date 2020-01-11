#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

// remove
// 컨테이너에 있는 특정 값들을 삭제하고 싶을 때 사용
// 삭제 후 크기가 변하지 않는다는 것을 명심하자.
// 하지만 진짜 삭제를 위해서는 erase()를 사용해야 한다.

int main()
{
	vector<int> vec1;
	vec1.push_back(10); vec1.push_back(20); vec1.push_back(20);
	vec1.push_back(40); vec1.push_back(50); vec1.push_back(30);

	vector<int>::iterator iterPos;

	cout << "vec1에 있는 모든 데이터 출력" << endl;
	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	cout << "vec1에서 20 remove" << endl; // 특정 값 20을 제거
	vector<int>::iterator RemovePos = remove(vec1.begin(), vec1.end(), 20);

	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	cout << "vec1에서 20 remove 이후 사용 하지않는 영역 완전 제거" << endl;
	while (RemovePos != vec1.end())
	{
		// 남은 영역의 반복자 위치를 받은 후 완전하게 제거해준다.
		RemovePos = vec1.erase(RemovePos);
	}

	for (iterPos = vec1.begin(); iterPos != vec1.end(); ++iterPos)
		cout << *iterPos << ' ' << endl;
	cout << endl;

	return 0;

}