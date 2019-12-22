#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/* vector의 선언 */
	vector<int> v;       // 아무것도 없는 vector
	vector<int> a(2);    // 값이 0인 2개 가지는 vector
	vector<int> b(2, 1); // 값이 1을 2개 가지는 vector
	/* vector의 추가 */
	v.push_back(1);

	/* vector의 삭제 */
	v.pop_back();

	/* vector에 1~10을 넣고 출력해보기 */
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);
	for (int i = 0; i < 10; i++)
		cout << v[i] << ' ';
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << v.at(i) << ' ';
	cout << endl;
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	/* 모두 삭제 */
	v.clear();

	/* empty로 확인해보기 */
	if (v.empty())
		cout << "vector가 비어있어요." << endl;
	else
		cout << "vector에 머가 들어있네요." << endl;

	/* size로 알아보기 */
	cout << "vector의 현재 size : " << v.size() << endl;

	/* capacity 알아보기*/
	cout << "vector의 capacity : " << v.capacity() << endl;

	/* capacity 늘려보기 */
	for (int i = 0; i < 20; i++)
		v.push_back(i + 1);

	/* capacity 알아보기*/
	cout << "vector의 capacity : " << v.capacity() << endl;

	vector<int> v2;
	v2.reserve(20); // 프로그래머가 직접 메모리 크기를 할당
	
    /* capacity 알아보기*/
	cout << "vector2의 capacity : " << v2.capacity() << endl;

	/* insert 사용하기 */
	vector<int> v3;
	v3.push_back(10);
	v3.push_back(20);
	v3.insert(v3.begin(), 5);

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* insert 사용하기 (vector 범위로 넣는 방법) */
	vector<int> v4(5, 1);
	vector<int>::iterator iter2 = v3.begin();
	iter2++; iter2++;
	v3.insert(iter2, v4.begin(), v4.end());

	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* insert 사용하기 (횟수만큼 넣는 방법) */
	iter2 = v3.begin();
	v3.insert(iter2, 2, 100); // iter2 위치에 100을 2번 넣는다.
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* erase 사용하기 */
	iter2 = v3.begin();
	v3.erase(iter2); // 첫번째 위치 요소 삭제
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	v3.erase(v3.begin(), v3.end()); // 전 구간 삭제
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	/* assign 알아보기 */
	vector<int> v5;
	v5.assign(7, 4);
	for (int i = 0; i < v5.size(); i++)
		cout << v5[i] << ' ';
	cout << endl;
	cout << v5.size() << ' ' << v5.capacity() << endl;
	return 0;
}