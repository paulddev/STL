// https://blockdmask.tistory.com/76
#include <iostream>
#include <list>
using namespace std;

/* List - 시퀀스 컨테이너
   원소가 상대적인 순서를 유지함.
   list는 노드 기반 컨테이너로 원소가 노드 단위로 저장되며
   list는 이중 연결 리스트로 구현된다.
   
   list.sort() 오름차순
   list.sort(cmp) 사용자 정의 함수 가능
   list.sort(greater<int>()) 내림차순

   remove_if(Predicate)
   predicate에 해당하는 원소를 모두 제거

   remove(data)
   data에 해당하는 모든 원소를 list에서 삭제

   reverse()
   원소들의 순차열을 뒤집음

   lt2.splice(iter2,lt1)
   lt2에서 iter2이 가리키는 곳에 lt1의 모든 원소를 잘라 붙임
   */

bool predicate(int num)
{
	return num >= 10 && num <= 20;
}

template<typename T>
void print(const list<T>& a)
{
	for (auto x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	list<int> lt;

	lt.push_back(10);
	lt.push_back(15);
	lt.push_back(60);
	lt.push_back(16);
	lt.push_back(42);
	lt.push_back(17);
	lt.push_back(5);
	lt.push_back(42); // 삽입
	lt.pop_back();    // 삭제

	cout << "list의 가장 마지막 : " << lt.back() << endl;
	cout << "list : ";
	print(lt);

	// 10이상 20이하 모두 삭제
	lt.remove_if(predicate);
	cout << "list : ";
	print(lt);

	lt.remove(42);
	cout << "list : ";
	print(lt);

	// 역순으로
	lt.reverse();
	cout << "list : ";
	print(lt);

	list<char> lt1;
	lt1.push_back('a');
	lt1.push_back('b');
	lt1.push_back('c');
	lt1.push_back('d');

	list<char> lt2;
	lt2.push_back('A');
	lt2.push_back('B');
	lt2.push_back('C');

	cout << "lt1 : "; print(lt1);
	cout << "lt2 : "; print(lt2);
	cout << "lt1.size() : " << lt1.size() << endl;
	cout << "lt2.size() : " << lt2.size() << endl;

	auto iter = lt1.begin();
	++iter;
	++iter;
	// lt1에 iter 위치에 lt2를 잘라서 붙인다.
	// 따라서 lt2는 비어있게 된다.
	lt1.splice(iter, lt2);

	cout << "lt1 : "; print(lt1);
	cout << "lt2 : "; print(lt2);
	cout << "lt1.size() : " << lt1.size() << endl;
	cout << "lt2.size() : " << lt2.size() << endl;


	return 0;
}