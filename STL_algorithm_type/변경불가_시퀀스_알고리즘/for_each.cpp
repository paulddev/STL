#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// for_each
// 순차적으로 컨테이너에 담긴 데이터를 함수의 파라미터로 넘겨서 함수를 실행시키는 알고리즘

// 유저들의 플레이 시간 갱신 예제
struct User
{
	int UID;
	int PlayTime;
};

struct UpdatePlayTime
{
	void operator() (User& user)
	{
		user.PlayTime += PlayTime;
	}
	int PlayTime;
};

int main()
{
	vector<User> Users;

	User user1; user1.UID = 1; user1.PlayTime = 40000;
	User user2; user2.UID = 2; user2.PlayTime = 0;
	User user3; user3.UID = 3; user3.PlayTime = 25000;

	Users.push_back(user1);
	Users.push_back(user2);
	Users.push_back(user3);

	// 현재 플레이 시간
	vector<User>::iterator IterUser;
	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "UID : " << IterUser->UID << "의 총 플레이 시간: " << IterUser->PlayTime << endl;
	}
	cout << endl;

	// 모든 유저들의 현재 플레이 시간을 갱신하자.
	UpdatePlayTime updatePlayTime;
	updatePlayTime.PlayTime = 200;

	// 두 번째 유저부터 갱신
	for_each(Users.begin() + 1, Users.end(), updatePlayTime);

	for (IterUser = Users.begin(); IterUser != Users.end(); ++IterUser)
	{
		cout << "UID : " << IterUser->UID << "의 총 플레이 시간: " << IterUser->PlayTime << endl;
	}
	cout << endl;

	return 0;
}