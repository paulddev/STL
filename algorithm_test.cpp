#include <iostream>
#include <vector>
#include <algorithm> // 여러가지 알고리즘이 들어있다.
using namespace std;

bool compare(const int a, const int b)
{
	return a > b;
}

int main()
{
	int arr1[100];
	vector<int> arr2(100);
	int n = 100;

	// 정렬하기 (오름차순)
	sort(arr1, arr1 + n);
	sort(arr2.begin(), arr2.end());
	// 사용자 정의 함수 넣을 수도 있음.
	sort(arr1, arr1 + n, compare);

	// 안정적인 정렬은 이렇게
	stable_sort(arr1, arr1 + n);

	// lower_bound
	// 이진 탐색의 기반
	// 찾고자 하는 값 이상이 처음 나타나는 위치
        // 구간 내의 원소들이 오름차순으로 정렬 필요. (배열, 리스트)
	// lower_bound가 찾으려 하는 key값이 "없으면" key값보다 큰 가장 작은 정수를 찾는다.
	// lower_bound가 찾으려 하는 key값이 존재하면 key값
	// 같은 원소가 여러 개 있어도 상관 없으며, 유일한 해를 구한다.
	// 구간이 [start, end]인 배열이 있을 때, 중간 위치의 index를 mid라 하면,
	// arr[mid-1] < key 이면서 arr[mid] >= key 인 최소의 m 값을 찾으면 된다. (m >= 2)
	// 이말은 key가 현재 mid 보다 작다면 [start, mid]로 탐색을 다시하고,
	// key가 arr[mid-1]보다 크면 [mid+1, end]로 탐색을 다시한다는 뜻이다.

	// 반환형이 iterator 또는 주소값이므로
	// v.begin()을 빼주거나 배열의 첫번째 주소를 가리키는 배열의 이름을 빼주면 몇 번째 인자인지
	// 알 수 있다.

	// n개로 이루어진 정수 집합에서 원하는 수 k 이상인 수가 처음으로 등장하는 위치를 찾으시오.
	int arr[10] = { 1,2,4,5,6,6,7,7,7,9 };
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	// std::lower_bound(A, A+n, K)는 어떤 위치,
	// std::lower_bound(A, A+n, K)-A+1은 A배열에서 상대적 위치(인덱스)
	cout << "lower_bound(0) : " << lower_bound(arr, arr + 10, 0) - arr + 1 << endl; // 1
	cout << "lower_bound(1) : " << lower_bound(arr, arr + 10, 1) - arr + 1 << endl; // 1
	cout << "lower_bound(5) : " << lower_bound(arr, arr + 10, 5) - arr + 1 << endl; // 4
	cout << "lower_bound(6) : " << lower_bound(arr, arr + 10, 6) - arr + 1 << endl; // 5
	cout << "lower_bound(7) : " << lower_bound(arr, arr + 10, 7) - arr + 1 << endl; // 7
	cout << "lower_bound(8) : " << lower_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "lower_bound(9) : " << lower_bound(arr, arr + 10, 9) - arr + 1 << endl; // 10
	cout << "lower_bound(20) : " << lower_bound(arr, arr + 10, 20) - arr + 1 << endl; // 11
	cout << "lower_bound(10) : " << lower_bound(arr, arr + 10, 10) - arr + 1 << endl; // 11
	cout << endl;

	int a[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ' ';
	cout << endl;
	// 모든 원소가 k보다 작을 때에는 n + 1을 출력
	cout << "lower_bound(7) : " << lower_bound(a, a + 5, 7) - a + 1 << endl; // 6
	cout << endl;


	// upper_bound
	// 이진 탐색의 기반
	// 구간 내의 원소들이 오름차순으로 정렬 필요.
	// upper_bound는 key 값을 초과하는 가장 첫 번째 원소의 위치를 구한다.
	// 찾고자 하는 값보다 큰 값이 처음으로 나타나는 위치
	// 같은 원소가 여러 개 존재해도 항상 유일한 해를 구할 수 있다.
	// arr[mid-1] <= key 이면서 arr[mid] > key인 최소의 m 값을 찾으면 된다. (m >= 2)
	// (같은 값이 아닌) key 값을 초과하는 가장 첫 번째 원소의 위치라는 것

	// { 1,2,4,5,6,6,7,7,7,9 };
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	cout << "upper_bound(6) : " << upper_bound(arr, arr + 10, 6) - arr + 1 << endl; // 7
	cout << "upper_bound(7) : " << upper_bound(arr, arr + 10, 7) - arr + 1 << endl; // 10
	cout << "upper_bound(8) : " << upper_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "upper_bound(9) : " << upper_bound(arr, arr + 10, 9) - arr + 1 << endl; // 11
	cout << endl;

	// max와 min 찾기
	int b1[10] = { 10,5,2,1,0,9,8,3,4,2 };
	for (int i = 0; i < 10; ++i)
		cout << b1[i] << ' ';
	cout << endl;
	cout << "max : " << *max_element(b1, b1 + 10) << endl;
	cout << "min : " << *min_element(b1, b1 + 10) << endl << endl;

	// unique
	// 첫 원소의 주소와 마지막 원소의 다음 주소를 인자로 넘겨준다.
	// 구간 내의 중복된 원소를 구간의 끝부분으로 밀어주고 마지막 원소의 다음 주소를 리턴
	// 구간 내의 원소들은 정렬되어 있어야 한다.
	// 보통 erase와 함께 중복된 원소를 제거하는 방법으로 사용한다.
	vector<int> vec1 = { 10,10,5,5,6,6,8,8,8,1,1,1 };
	for (const auto elem : vec1)
		cout << elem << ' ';
	cout << endl;

	vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
	for (const auto elem : vec1)
		cout << elem << ' ';
	cout << endl;

	// next_permutation
	// 구간 내의 원소들의 다음 순열을 생성하고 true를 리턴한다.
	// 다음 순열이 없다면 false를 리턴
	// 구간 내의 원소들은 정렬되어 있어야 한다.
	vector<int> vec2 = { 0,1,2,3 };
	do
	{
		for (const auto elem : vec2)
			cout << elem << ' ';
		cout << endl;
	} while (next_permutation(vec2.begin(), vec2.end()));

	return 0;
}
