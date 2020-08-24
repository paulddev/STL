#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v(5);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	vector<int>().swap(v);
	// 기본 생성자로 만든 vector 컨테이너와 v 컨테이너를 swap한다.
	// 이로서 capacity를 0으로 만들 수 있다.
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}