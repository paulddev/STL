#include <vector>
#include <iostream>
#include <numeric>
using namespace std;
// 유저 정의형을 이용해서 accumulate 사용

struct USER
{
	int UID;
	int Level;
	int Money;
};

struct USER_MONEY_ADD
{
	USER operator()(const USER& user1, const USER& user2)
	{
		USER User;
		User.Money = user1.Money + user2.Money;
		return User;
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
	for (Iter = Users.begin(); Iter != Users.end(); ++Iter)
		cout << Iter->UID << " : " << Iter->Money << ", ";
	cout << endl << endl;

	USER InitUser; InitUser.Money = 0;
	USER Result = accumulate(Users.begin(), Users.end(), InitUser, USER_MONEY_ADD());
	cout << Result.Money << endl;
	return 0;
}
