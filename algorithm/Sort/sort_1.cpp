#include <iostream>
#include <algorithm>
using namespace std;

/*
sort(시작 주소, 시작 주소 + 배열의 길이) default로 오름차순으로 정렬된다.
sort(시작 주소, 시작 주소 + 배열의 길이, compare함수)
*/

int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10); // 정렬할 데이터의 개수 넣어주기
	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';

	return 0;
}
