#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

// 유저 정의형 데이터를 정렬하는 예제

struct USER
{
	int UID;
	int Level;
	int Money;
};

struct USER_MONEY_COMP
{
	bool operator()(const USER& user1, const USER& user2)
	{
		return user1.Money > user2.Money;
	}
};

int main()
{
	USER User1; User1.UID = 1; User1.Money = 2000;
	USER User2; User2.UID = 2; User2.Money = 2050;
	USER User3; User3.UID = 3; User3.Money = 2200;
	USER User4; User4.UID = 4; User4.Money = 1000;
	USER User5; User5.UID = 5; User5.Money = 2030;

	vector<USER> Users;
	Users.push_back(User1); Users.push_back(User2);
	Users.push_back(User3); Users.push_back(User4);
	Users.push_back(User5);

	vector<USER>::iterator Iter;

	cout << "돈을 기준으로 정렬 하기 전" << endl;
	for (Iter = Users.begin(); Iter != Users.end(); ++Iter)
		cout << Iter->UID << " : " << Iter->Money << ", ";
	cout << endl << endl;

	sort(Users.begin(), Users.end(), USER_MONEY_COMP());

	cout << "돈을 기준으로 내림차순으로 정렬" << endl;
	for (Iter = Users.begin(); Iter != Users.end(); ++Iter)
		cout << Iter->UID << " : " << Iter->Money << ", ";
	cout << endl << endl;
	return 0;
}