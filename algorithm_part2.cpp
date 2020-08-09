// https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

bool findEven(int x)
{
	return x % 2 == 0 ? true : false;
}

bool findOdd(int x)
{
	return x % 2 == 0 ? false : true;
}

bool cmp(const int& a, const int& b)
{
	// 오름차순
	return a < b;
}

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	vector<int> v = { 6,8,1,2,4,2,4,2,3,4,4 };

	/* count 부분
       count(begin, end, value)
       [begin, end)에 포함되어 있는 원소 중에서 value의 개수를 찾음
       시간 복잡도 O(N)
	   */
	cout << "1의 개수 : " << count(v.begin(), v.end(), 1) << endl;

	/* count_if(begin, end, p)
	   [begin, end)에 포함되어 있는 원소 중에서 조건 p에 해당하는 것의 개수를 찾음
	   */
	int even = count_if(v.begin(), v.end(), findEven);
	int odd = count_if(v.begin(), v.end(), findOdd);
	cout << "짝수의 개수 : " << even << endl;
	cout << "홀수의 개수 : " << odd << endl;

	/* find 부분
	   find(begin, end, value)
	   [begin, end)에 포함되어 있는 원소 중에서 value의 iterator 반환
	   */
	for (int i = 1; i <= 5; ++i)
	{
		auto it = find(v.begin(), v.end(), i);
		cout << i << "의 위치 : ";
		if (it == v.end())
			cout << "모른다" << endl;
		else
			cout << (it - v.begin()) << endl;
	}

	/* find_if(begin, end, value)
	   [begin, end)에 포함되어 있는 원소 중에서 조건 p에 해당하는 것의 iterator 반환
	   */
	auto even_idx = find_if(v.begin(), v.end(), findEven);
	auto odd_idx = find_if(v.begin(), v.end(), findOdd);

	/* 두 함수 모두 못찼았으면 end를 반환
	   시간 복잡도 O(N)
	   */
	cout << "첫 번째 짝수 : " << (even_idx - v.begin()) << endl;
	cout << "첫 번째 홀수 : " << (odd_idx - v.begin()) << endl;
	
	/* sort 부분
	   sort(begin, end)
	   [begin, end)를 < 를 기준으로 정렬

	   sort(begin, end, cmp)
	   [begin, end)를 cmp 기준으로 정렬
	   sort()는 퀵정렬로 평균 O(NlogN)의 시간복잡도
	   cmp의 경우 const와 &를 붙이자.
	   */

	vector<int> a = { 5,3,2,1,4,1 };
	// 역순으로 정렬하기
	sort(a.begin(), a.end(), greater<int>());
	print(a);

	// cmp 사용자 함수 정의
	sort(a.begin(), a.end(), cmp);
	print(a);

	/* stable sort 부분
	   stable_sort(begin, end)
	   [begin, end)를 < 를 기준으로 정렬

	   stable_sort(begin, end, cmp)
	   [begin, end)를 cmp를 기준으로 정렬

	   stable Sorting은 같은 것이 있는 경우 정렬하기 전의 순서가 유지되는 정렬 알고리즘
	   */
	stable_sort(a.begin(), a.end());
	print(a);
	stable_sort(a.begin(), a.end(), cmp);
	print(a);

	/* Binary Search
	   binary_search(begin, end, value)
	   [begin, end)에서 value를 찾으면 true, 못 찾으면 false
	   
	   binary_search(begin, end, value, cmp)
	   [begin, end)에서 value를 cmp를 기준으로 찾으면 true, 못 찾으면 false
	   */
	if (binary_search(a.begin(), a.end(), 5))
		cout << "5를 찾았다." << endl;
	else
		cout << "찾지 못했다." << endl;

	/* 절대값 구하기
	   #include <cmath> 포함
	   abs()를 사용해서 절대값을 구한다.
	   */
	vector<int> b = { -1,2,-10 };
	for (int x : b)
		cout << abs(x) << ' ';
	cout << endl;
	return 0;
}