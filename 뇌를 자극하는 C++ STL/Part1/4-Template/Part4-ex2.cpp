#include <iostream>
using namespace std;

template<typename T>
class Stack
{
	T* buf;
	int top;
	int size;
	int capacity;
public:
	Stack(int cap = 100) :buf(0), top(0), size(0), capacity(cap)
	{
		buf = new T[capacity];
	}

	~Stack()
	{
		delete[] buf;
	}

	void Push(T data)
	{
		buf[top++] = data;
		++size;
	}

	T Pop()
	{
		return buf[--top];
		--size;
	}

	bool Empty() const
	{
		return size == 0;
	}
};

int main()
{
	Stack<int> st;

	st.Push(10);
	st.Push(20);
	st.Push(30);

	if (!st.Empty())
		cout << st.Pop() << endl;
	if (!st.Empty())
		cout << st.Pop() << endl;
	if (!st.Empty())
		cout << st.Pop() << endl;

	return 0;
}