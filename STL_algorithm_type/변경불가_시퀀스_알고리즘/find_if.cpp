#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// find_if
// 저장되는 자료형이 기본이 아닌 struct나 객체인 경우에는 find_if를 사용하자.

// 특정 돈을 가지고 있는 유저 찾기
struct User
{
	int Money;
	int Level;
};

struct FindMoneyUser
{
	// 참조형으로 유저의 데이터를 참조해서 비교한다.
	bool operator() (User& user) const
	{
		return user.Money == CompareMoney;
	}
	int CompareMoney;
};

int main()
{
	vector<User> Users;
	
	User user1; user1.Level = 10; user1.Money = 2000;
	User user2; user2.Level = 5; user2.Money = -10;
	User user3; user3.Level = 20; user3.Money = 35000;

	Users.push_back(user1);
	Users.push_back(user2);
	Users.push_back(user3);

	vector<User>::iterator FindUser;

	FindMoneyUser tFindMoneyUser; // 앞의 t는 구조체를 의미
	tFindMoneyUser.CompareMoney = 2000; // 2000원을 가지고 있는 사람을 찾고 싶다.
	FindUser = find_if(Users.begin(), Users.end(), tFindMoneyUser);
	if (FindUser != Users.end())
		cout << "소지하고 있는 돈은: " << FindUser->Money << "입니다." << endl;
	else
		cout << "유저가 없습니다." << endl;
	return 0;
}