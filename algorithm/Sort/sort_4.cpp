#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
vector라는 시퀀스 컨테이너를 정렬할 때는
sort(vec.begin(), vec.end()) 를 이용한다.
sort(vec.begin(), vec.end(), compare함수) 를 이용해서 정렬 기준을 내가 만들 수 있다.
*/

int main() {
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "박 한 울"));
	v.push_back(pair<int, string>(85, "이 태 일"));
	v.push_back(pair<int, string>(82, "김 도 현"));
	v.push_back(pair<int, string>(98, "강 종 구"));
	v.push_back(pair<int, string>(79, "이 상 욱"));

	// 오름차순으로 정렬
	sort(v.begin(), v.end());
	// first : int, second : string을 의미
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}
	return 0;
}
