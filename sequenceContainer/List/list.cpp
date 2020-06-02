#include <iostream>
#include <list>
#include <functional>
using namespace std;

bool Predicate(int n)
{
	return n >= 100;
}

int main()
{
	list<int> list1;

	for (int i = 1; i <= 10; i++)
		list1.push_back(i);

	cout << "list1 : ";
	list<int>::iterator iter;
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// insert(삽입) : case 1
	iter = list1.begin();
	++iter;
	list1.insert(iter, 100);

	cout << "list1 insert case 1: ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// insert(삽입) : case 2
	iter = list1.begin();
	++iter;
	++iter;
	list<int> list2;
	list2.push_back(10);
	list2.push_back(10);
	list2.push_back(10);
	list1.insert(iter, list2.begin(), list2.end());

	cout << "list1 insert case 2: ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;


	// insert(삽입) : case 3
	iter = list1.end();
	list1.insert(iter, 2, 500);

	cout << "list1 insert case 3: ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// erase(삭제) : case 1
	iter = list1.begin();
	list1.erase(iter);

	cout << "list1 erase case 1: ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// erase(삭제) : case 2
	iter = list1.begin();
	list1.erase(list1.begin(), list1.end());

	cout << "list1 erase case 2: ";
	for (iter = list1.begin(); iter != list1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;


	list<int> list3;
	list3.push_back(10);
	list3.push_back(40);
	list3.push_back(200);
	list3.push_back(50);
	list3.push_back(30);
	list3.push_back(100);
	list3.push_back(38);
	list3.push_back(38);
	list3.push_back(38);
	list3.push_back(99);

	cout << "list3 : ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// remove(값을 삭제)
	list3.remove(38);
	cout << "list3 remove(38): ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// remove_if(범위에 있다면 삭제)
	list3.remove_if(Predicate);
	cout << "list3 remove_if(Predicate): ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// sort(오름차순)
	list3.sort();
	cout << "list3 sort(오름차순): ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// sort(내림차순)
	list3.sort(greater<int>());
	cout << "list3 sort(내림차순): ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	for(int i = 0; i < 5; i++)
		list3.push_back(10);

	cout << "list3 : ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// unique (유일하게 만들기)
	list3.unique();
	cout << "list3 unique: ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	list<int> list4;
	for (int i = 0; i < 10; i++)
		list4.push_back(i);

	// splice (다른 리스트의 원소를 잘라 붙이기)
	cout << "splice test" << endl;
	iter = list3.begin();
	++iter;
	++iter;
	list3.splice(iter, list4);

	cout << "list3.splice(list4): ";
	for (iter = list3.begin(); iter != list3.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	cout << "list4 : ";
	for (iter = list4.begin(); iter != list4.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;
	
	cout << "Merge test" << endl;
	list<int> list5;
	list<int> list6;

	list5.push_back(1);
	list5.push_back(10);
	list5.push_back(3);
	list5.push_back(30);
	list5.push_back(8);

	list6.push_back(2);
	list6.push_back(11);
	list6.push_back(5);
	list6.push_back(58);
	list6.push_back(80);

	list5.sort();
	list6.sort();

	cout << "list5 (오름차순): ";
	for (iter = list5.begin(); iter != list5.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	cout << "list6 (오름차순): ";
	for (iter = list6.begin(); iter != list6.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// merge 사용하기
	// 두 리스트가 서로 정렬되어 있어야 한다.
	list5.merge(list6);

	cout << "list5 : ";
	for (iter = list5.begin(); iter != list5.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	cout << "list6 : ";
	for (iter = list6.begin(); iter != list6.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	return 0;
}