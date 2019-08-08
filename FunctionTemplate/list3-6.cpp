#include <iostream>
using namespace std;

//스택 클래스의 크기를 클래스 생성자에서 지정
template<typename T, int Size = 100>
class Stack {
public:
	explicit Stack(int size) {
		m_Size = size;
		m_aData = new T[m_Size];

		Clear();
	}
	

	~Stack() {
		delete[] m_aData;
	}

	void Clear() {
		m_Count = 0;
	}

	int Count() {
		return m_Count;
	}

	bool IsEmpty() {
		return 0 == m_Count ? true : false;
	}

	int GetStackSize() {
		return m_Size;
	}

	bool push(T data) {
		if (m_Count >= m_Size) {
			return false;
		}

		m_aData[m_Count] = data;
		++m_Count;
		return true;
	}

	T pop() {
		if (m_Count < 1) {
			return 0;
		}

		--m_Count;
		return m_aData[m_Count];
	}

private:
	T* m_aData;
	int m_Count;

	int m_Size;
};

void main() {
	Stack<int> kStack1(64);
	cout << "스택의 크기는? " << kStack1.GetStackSize() << endl;
}