#include <iostream>
using namespace std;


//클래스 템플릿 코딩 스타일 개선방법
template<typename T> class Stack {
public:
	explicit Stack(int size);
	~Stack();
	
	//초기화 한다.
	void Clear();
	//스택에 저장된 개수
	int Count();
	//저장된 데이터가 없는가?
	bool IsEmpty();
	//데이터를 담을 수 있는 최대 개수
	int GetStackSize();
	//데이터를 저장한다.
	bool push(T data);
	//스택에서 빼낸다.
	T pop();

private:
	T* m_aData;
	int m_Count;

	int m_Size;
};

template<typename T> Stack<T>::Stack(int size) {
	m_Size = size;
	m_aData = new T[m_Size];

	Clear();
}

template<typename T> Stack<T>::~Stack() {
	delete[] m_aData;
}

template<typename T> void Stack<T>::Clear() {
	m_Count = 0;
}

template<typename T> int Stack<T>::Count() {
	return m_Count;
}

template<typename T> bool Stack<T>::IsEmpty() {
	return 0 == m_Count ? true : false;
}

template<typename T> int Stack<T>::GetStackSize() {
	return m_Size;
}

template<typename T> bool Stack<T>::push(T data) {
	if (m_Count >= m_Size) {
		return false;
	}

	m_aData[m_Count] = data;
	++m_Count;
	return true;
}

template<typename T> T Stack<T>::pop() {
	if (m_Count < 1) {
		return 0;
	}

	--m_Count;
	return m_aData[m_Count];
}

void main() {
	Stack<int> kStack1(7);
	cout << "스택의 크기는 ? " << kStack1.GetStackSize() << endl;
}