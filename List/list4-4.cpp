#include <iostream>
#include <list>
using namespace std;

struct Item {
	Item(int itemCd, int buyMoney) {
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

	int ItemCd; //아이템 코드
	int BuyMoney; //판매 금액
};

//remove의 사용법
void main() {

	list<int> list1;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(20);
	list1.push_back(30);

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "remove 테스트 1" << endl;

	//20을 삭제한다.
	list1.remove(20);

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "remove 테스트 2 - 구조체를 삭제" << endl;

	//Item 포인터를 담아야한다.
	//사용자 정의 타입이라도 포인터로 담으면 해당 포인터로 삭제가 가능하다.
	list<Item*> Itemlist;

	Item* pitem1 = new Item(10, 100); Itemlist.push_back(pitem1);
	Item* pitem2 = new Item(20, 200); Itemlist.push_back(pitem2);
	Item* pitem3 = new Item(30, 300); Itemlist.push_back(pitem3);

	//pitem2를 삭제한다.
	Itemlist.remove(pitem2);

	list<Item*>::iterator iterEnd2 = Itemlist.end();
	for (list<Item*>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd2; ++iterPos) {
		cout << "Itemlist: " << (*iterPos)->ItemCd << endl;
	}
}