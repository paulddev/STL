#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
	if (a.second.first == b.second.first) { // 점수가 같다면
		return a.second.second > b.second.second; // 더 어린 학생이 높다.
	}
	else {
		return a.second.first > b.second.first; // 성적이 더 높은 순으로
	}
}

int main() {
	vector<pair<string, pair<int, int>>> v;
	// 보통 이런경우 클래스를 따로 정의해서 정렬하는 것이 더 간편할 수 있다.
	v.push_back(pair<string, pair<int, int>>("김도현", pair<int, int>(90, 19950208)));
	v.push_back(pair<string, pair<int, int>>("이태일", pair<int, int>(97, 19930518)));
	v.push_back(pair<string, pair<int, int>>("박한울", pair<int, int>(95, 19930203)));
	v.push_back(pair<string, pair<int, int>>("이상욱", pair<int, int>(90, 19921207)));
	v.push_back(pair<string, pair<int, int>>("강종구", pair<int, int>(88, 19900302)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
	return 0;
}