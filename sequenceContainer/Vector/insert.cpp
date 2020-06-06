#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void show(vector<T>& v)
{
	for (const auto& elem : v)
	{
		cout << elem << ' ';
	}
	cout << endl << endl;
}

int main()
{
	vector<int> myvector(3, 100);
	vector<int>::iterator it;

	show(myvector);  // 100 100 100
	it = myvector.begin();
	it = myvector.insert(it, 200);
	show(myvector); // 200 100 100 100

	myvector.insert(it, 2, 300); 
	show(myvector); // 300 300 200 100 100 100

	it = myvector.begin();
	vector<int> anothervector(2, 400);
	myvector.insert(it + 2, anothervector.begin(), anothervector.end());
	show(myvector); // 300 300 400 400 200 100 100 100

	int myarray[] = { 501, 502, 503 };
	myvector.insert(myvector.begin(), myarray, myarray + 3);
	show(myvector); // 501 502 503 300 300 400 400 200 100 100 100
	return 0;
}