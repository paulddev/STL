#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	list<int> lt;

	for(int i = 10; i > 5; --i)
	{
		v.push_back(i);
		lt.push_back(i);
	}

	// sort 알고리즘은 임의 접근 반복자를 요구하므로
	// list 와 같은 양방향 반복자는 sort 사용불가 
	sort(v.begin(), v.end());
	//sort(lt.begin(), lt.end());
	
	return 0;
}