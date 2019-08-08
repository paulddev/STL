#include <iostream>
#include <list>
using namespace std;

//함수 객체 정의
template <typename T> struct COMPARE_ITEM {
	bool operator()(const T l, const T r) const {
		return l.ItemCd < r.ItemCd;
	}
};

struct Item {
	Item(int itemCd, int buyMoney) {
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

public:
	int ItemCd; //아이템 코드
	int BuyMoney; //판매 금액
};

void main() {
	list<int> list1;

	list1.push_back(20);
	list1.push_back(10);
	list1.push_back(35);
	list1.push_back(15);
	list1.push_back(12);

	cout << "sort 오름차순" << endl;
	
	list1.sort();

	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "sort 내림차순" << endl;
	
	list1.sort(greater<int>());

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "list1 : " << *iterPos << endl;
	}

	cout << endl << "sort - 사용자가 정의한 방식으로 정렬" << endl;

	list<Item> Itemlist;

	Item item1(20, 100); Itemlist.push_back(item1);
	Item item2(10, 200); Itemlist.push_back(item2);
	Item item3(7, 300); Itemlist.push_back(item3);

	//정렬한다.
	Itemlist.sort(COMPARE_ITEM<Item>());

	list<Item>::iterator iterEnd2 = Itemlist.end();
	for (list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos) {
		cout << "Itemlist : " << iterPos->ItemCd << endl;
	}
}