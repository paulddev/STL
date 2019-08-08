#include <iostream>
using namespace std;

//템플릿 파라메터중 int Size가 non-type 파라메터이다.
template<typename T, int Size>
class Stack {
public:
	Stack() {
		Clear();
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

	//데이터를 담을 수 있는 최대 개수
	int GetStackSize() {
		return Size;
	}

	bool push(T data) {
		if (m_Count >= Size) {
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
	T m_aData[Size];
	int m_Count;
};

void main() {
	Stack<int, 100> kStack1;
	cout << "스택의 크기는? " << kStack1.GetStackSize() << endl;

	Stack<double, 60> kStack2;
	cout << "스택의 크기는? " << kStack2.GetStackSize() << endl;
}