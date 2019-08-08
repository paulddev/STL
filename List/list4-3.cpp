#include <iostream>
#include <list>
using namespace std;

void main() {
	list<int> list1;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	cout << "erase 테스트 1" << endl;

	//첫 번째 데이터 삭제
	list1.erase(list1.begin());

	// 20, 30, 40, 50 출력
	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl << "erase 테스트 2" << endl;

	//두 번째 데이터에서 마지막까지 삭제한다.
	list<int>::iterator iterPos = list1.begin();
	++iterPos;
	list1.erase(iterPos, list1.end());

	// 20 출력
	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list 1 : " << *iterPos << endl;
	}
}