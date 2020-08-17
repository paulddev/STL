#include <iostream>
using namespace std;

class Array
{
	int* arr;
	int size;
	int capacity;

	// 복사 함수 생략(복사 생성자, 복사 대입 연산자)
public:
	Array(int cap = 100) : arr(0), size(0), capacity(cap)
	{
		arr = new int[capacity];
	}

	~Array()
	{
		delete[] arr;
	}

	void Add(int data)
	{
		if (size < capacity)
			arr[size++] = data;
	}

	int Size() const
	{
		return size;
	}

	// 읽기 연산만 가능
	int operator[](int idx) const
	{
		cout << "ar.operator[](int) const" << endl;
		return arr[idx];
	}

	// 읽기, 쓰기 연산이 모두 가능
	int& operator[](int idx)
	{
		cout << "ar.operator[](int)" << endl;
		return arr[idx];
	}
};

int main()
{
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	cout << ar[0] << endl;  // ar.operator[](int)를 호출
	cout << endl;

	const Array& ar2 = ar;
	cout << ar2[0] << endl; // ar.operator[](int) const를 호출
	cout << endl;

	ar[0] = 100; // ar.operator[](int)를 호출
	cout << ar[0] << endl;
	//ar2[0] = 100;
	return 0;

}