#include <iostream>
#include <vector>
#include <algorithm> // 여러가지 알고리즘이 들어있다.
using namespace std;

bool compare(const int a, const int b)
{
	return a > b;
}

void print(const vector<int>& a)
{
	for (int x : a)
		cout << x << ' ';
	cout << endl;
}

void print(const int a[], int len)
{
	for (int i = 0; i < len; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

int main()
{
	/* lower_bound
	*  lower_bound(begin, end, value, [cmp])
	*  [begin, end)에서 value보다 작지 않은 첫 번째 iterator 반환
	 
	   찾고자 하는 값 이상이 처음 나타나는 위치
       구간 내의 원소들이 오름차순으로 정렬 필요. (배열, 리스트)
	   lower_bound가 찾으려 하는 key값이 "없으면" key값보다 큰 가장 작은 정수를 찾는다.
	   lower_bound가 찾으려 하는 key값이 존재하면 key값
	   같은 원소가 여러 개 있어도 상관 없으며, 유일한 해를 구한다.
	   구간이 [start, end]인 배열이 있을 때, 중간 위치의 index를 mid라 하면,
	   arr[mid-1] < key 이면서 arr[mid] >= key 인 최소의 m 값을 찾으면 된다. (m >= 2)
	   이말은 key가 현재 mid 보다 작다면 [start, mid]로 탐색을 다시하고,
	   key가 arr[mid-1]보다 크면 [mid+1, end]로 탐색을 다시한다는 뜻이다.

	   반환형이 iterator 또는 주소값이므로
	   v.begin()을 빼주거나 배열의 첫번째 주소를 가리키는 배열의 이름을 빼주면 몇 번째 인자인지
	   알 수 있다.
	   */

	// n개로 이루어진 정수 집합에서 원하는 수 k 이상인 수가 처음으로 등장하는 위치를 찾으시오.
	int arr[10] = { 1,2,4,5,6,6,7,7,7,9 };
	print(arr, 10);
	

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
	print(a, 5);
	// 모든 원소가 k보다 작을 때에는 n + 1을 출력
	cout << "lower_bound(7) : " << lower_bound(a, a + 5, 7) - a + 1 << endl; // 6
	cout << endl;

	/* upper_bound
	*  upper_bound(begin, end, value, [cmp])
	*  [begin, end)에서 value보다 큰 첫 번째 iterator 반환
	
	   이진 탐색의 기반
	   구간 내의 원소들이 오름차순으로 정렬 필요.
	   upper_bound는 key 값을 초과하는 가장 첫 번째 원소의 위치를 구한다.
	   찾고자 하는 값보다 큰 값이 처음으로 나타나는 위치
	   같은 원소가 여러 개 존재해도 항상 유일한 해를 구할 수 있다.
	   arr[mid-1] <= key 이면서 arr[mid] > key인 최소의 m 값을 찾으면 된다. (m >= 2)
	   (같은 값이 아닌) key 값을 초과하는 가장 첫 번째 원소의 위치라는 것
	   */

	// { 1,2,4,5,6,6,7,7,7,9 };
	print(arr, 10);
	cout << endl;
	cout << "upper_bound(6) : " << upper_bound(arr, arr + 10, 6) - arr + 1 << endl; // 7
	cout << "upper_bound(7) : " << upper_bound(arr, arr + 10, 7) - arr + 1 << endl; // 10
	cout << "upper_bound(8) : " << upper_bound(arr, arr + 10, 8) - arr + 1 << endl; // 10
	cout << "upper_bound(9) : " << upper_bound(arr, arr + 10, 9) - arr + 1 << endl; // 11
	cout << endl;

	/* Min_element / Max_element
	*  min_element/max_element(begin, end)
	*  min_element/max_element(begin, end, cmp)
	*  [begin, end)에서 최소/최대값의 iterator를 구한다.
	* 
	*  minmax_element
	*  min과 max의 iterator를 동시에 구한다.
	*  minmax_element(begin, end)
	*  minmax_element(begin, end, cmp)
	*/
	int b1[10] = { 10,5,2,1,0,9,8,3,4,2 };
	print(b1, 10);
	cout << endl;
	cout << "max : " << *max_element(b1, b1 + 10) << endl;
	cout << "min : " << *min_element(b1, b1 + 10) << endl;
	auto iter = minmax_element(b1, b1 + 10);
	cout << "max : " << *iter.second << endl;
	cout << "min : " << *iter.first << endl << endl;

	/* unique
	*  unique(begin, end)
	*  [begin, end) 구간에서 연속되는 값을 하나를 제외하고 제거
	* 
	*  실제로 컨테이너의 크기를 줄이거나 제거하지 않는다.
	*  중복을 덮어씌우거나 시프트 시키는 방식으로 작동한다.
	*  중복을 제거한 후의 End Iterator를 리턴한다.
	*  연속적인 값에서 중복을 제거할 때 사용
	* 
	   첫 원소의 주소와 마지막 원소의 다음 주소를 인자로 넘겨준다.
	   구간 내의 중복된 원소를 구간의 끝부분으로 밀어주고 마지막 원소의 다음 주소를 리턴
	   구간 내의 원소들은 정렬되어 있어야 한다.
	   보통 erase와 함께 중복된 원소를 제거하는 방법으로 사용한다.
	   */
	vector<int> vec1 = { 10,10,5,5,6,6,8,8,8,1,1,1 };
	print(vec1);

	// 해당 vector의 중복을 제거하고 싶을 때는 이렇게 많이 사용한다.
	vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
	print(vec1);
	cout << endl;

	/* next_permutation / prev_permutation
	
	   next_permutation(begin, end)
	   next_permutation(begin, end, cmp)
	   prev_permutation(begin, end)
	   prev_permutation(begin, end, cmp)

	   [begin, end)를 순열이라고 생각했을 때, 사전 순으로 다음에 오는 순열을 만든다.
	   마지막 순열이면 false를 리턴

	   구간 내의 원소들의 다음 순열을 생성하고 true를 리턴한다.
	   다음 순열이 없다면 false를 리턴
	   구간 내의 원소들은 정렬되어 있어야 한다.
	   */
	vector<int> vec2 = { 0,1,2,3 };
	do
	{
		print(vec2);
	} while (next_permutation(vec2.begin(), vec2.end()));

	return 0;
}