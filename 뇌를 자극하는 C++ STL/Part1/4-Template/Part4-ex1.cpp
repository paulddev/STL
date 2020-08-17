#include <iostream>
using namespace std;

class MyType
{
	string str;
public:
	MyType(const char* s = "") : str(s) {}
	friend ostream& operator<<(ostream&, const MyType&);
};

ostream& operator<<(ostream& os, const MyType& ref)
{
	os << ref.str << ' ';
	return os;
}

template<typename T>
void Copy(T* arr2, T* arr1, int len)
{
	for (int i = 0; i < len; ++i)
		arr2[i] = arr1[i];
}

template<>
void Copy(MyType* arr2, MyType* arr1, int len)
{
	for (int i = 0; i < len; ++i)
		arr2[i] = arr1[i];
}

int main()
{
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5];
	Copy(arr2, arr1, 5);

	for (int i = 0; i < 5; ++i)
		cout << arr2[i] << ' ';
	cout << endl;

	MyType myArr1[5] = {"abc", "bcd", "edg", "Edq", "dqwdq"};
	MyType myArr2[5];
	Copy(myArr2, myArr1, 5);

	for (int i = 0; i < 5; ++i)
		cout << myArr2[i] << ' ';
	cout << endl;
	return 0;
}