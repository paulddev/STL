#include <iostream>
#include <list>
using namespace std;

template<typename T> class Stack {
public:
	Stack() { Clear(); }

	//저장 방식을 설정한다.
	void SetInOutType(bool bLIFO) { m_bLIFO = bLIFO; }

	//초기화 한다.
	void Clear() {
		if (false == m_Datas.empty())
			m_Datas.clear();
	}

	//스택에 저장된 개수
	int Count() { return static_cast<int>(m_Datas.size()); }

	//저장된 데이터가 없는가?
	bool IsEmpty() { return m_Datas.empty(); }

	//데이터를 저장한다.
	void push(T data) {
		m_Datas.push_back(data);
	}

	//스택에서 빼낸다.
	bool pop(T* data) {
		if (IsEmpty()) {
			return false;
		}

		if (m_bLIFO) {
			//크기 T만큼 m_Datas.back()의 내용을 data에 복사한다.
			memcpy(data, &m_Datas.back(), sizeof(T));
			m_Datas.pop_back();
		}
		else {
			memcpy(data, &m_Datas.front(), sizeof(T));
			m_Datas.pop_front();
		}
		return true;
	}

private:
	list<T> m_Datas;
	bool m_bLIFO; //true 이면 후입선출, false 이면 선입선출
};

void main() {
	Stack<int> Int_Stack;

	//LIFO로 설정
	Int_Stack.SetInOutType(true);

	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);

	int Value = 0;
	Int_Stack.pop(&Value);
	cout << "LIFO pop : " << Value << endl << endl;

	Int_Stack.Clear();

	//FIFO로 설정
	Int_Stack.SetInOutType(false);

	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);

	Int_Stack.pop(&Value);
	cout << "FIFO pop : " << Value << endl << endl;

	list<int> s;
	s.push_back(10);
	cout << s.back() << endl;
	cout << s.front() << endl;
}