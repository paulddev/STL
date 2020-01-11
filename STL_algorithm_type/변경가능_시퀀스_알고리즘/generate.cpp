#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// generate (변경 가능 시퀀스 알고리즘)
// 컨테이너의 특정 구간을 특정 값으로 채우고 싶을 때

// generate를 사용해서 유저의 기초 데이터를 설정하는 예제
struct User
{
	int UID;
	int RaceType;
	int Sex;
	int Money;
};

struct SetUserInfo
{
	SetUserInfo()
	{
		UserCount = 0;
	}

	User operator() ()
	{
		User user;
		++UserCount;

		user.UID = UserCount;
		user.Money = 2000;
		
		if (0 == (UserCount % 2))
		{
			user.RaceType = 1;
			user.Sex = 1;
			user.Money += 1000;
		}
		else
		{
			user.RaceType = 0;
			user.Sex = 0;
		}
		return user;
	}
	int UserCount;
};

int main()
{
	vector<User> Users(5);

	generate(Users.begin(), Users.end(), SetUserInfo());

	char szUserInfo[256] = { 0, }; // 초기화

	vector<User>::iterator IterUser;
	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		sprintf(szUserInfo, "UID %d, RaceType : %d, Sex : %d, Money : %d",
			IterUser->UID, IterUser->RaceType, IterUser->Sex, IterUser->Money);

		cout << szUserInfo << endl;
	}

	return 0;
}