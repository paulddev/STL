#include <iostream>
#include <algorithm>
using namespace std;

/*
sort(배열 시작 주소, 배열 시작 주소 + 배열의 길이, 정의한 compare 함수)
compare 함수에 따라서 정렬의 기준이 달라지게 된다.
*/

// 정렬할 기준을 내가 직접 설정할 수 있다.
bool compare(int a, int b) {
	//return a < b; // 오름차순
	return a > b; // 내림차순
}

int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10, compare);
	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';

	return 0;
}
