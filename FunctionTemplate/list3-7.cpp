#include <iostream>
#include <string>
using namespace std;

//ID 문자열의 최대 길이(null 문자 포함)
const int MAX_ID_LENGTH = 21;

template<typename T> class Stack {
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

//아래의 코드는 문자열을 저장하기 위해 char* 으로 전문화한 Stack클래스
template<> class Stack<char*> {
public:
	explicit Stack(int size) {
		m_Size = size;

		m_ppData = new char* [m_Size];
		for (int i = 0; i < m_Size; ++i) {
			m_ppData[i] = new char[MAX_ID_LENGTH];
		}

		Clear();
	}

	~Stack() { //소멸자를 이용해 동적할당 해제
		for (int i = 0; i < m_Size; ++i) {
			delete[] m_ppData[i];
		}

		delete[] m_ppData;
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

	bool push(char* pID) {
		if (m_Count >= m_Size) {
			return false;
		}
		//스택에 해당 문자열 pID의 문자개수를 20개까지만 받는다.
		//strncpy_s는 n개의 문자를 복사한 뒤 맨 뒤에 널 문자를 추가하지 않기 때문이다.
		strncpy_s(m_ppData[m_Count], MAX_ID_LENGTH, pID, MAX_ID_LENGTH - 1);
		m_ppData[m_Count][MAX_ID_LENGTH - 1] = '\0';
		++m_Count;
		return true;
	}

	char* pop() {
		if (m_Count < 1) {
			return 0;
		}

		--m_Count;
		return m_ppData[m_Count];
	}

private:
	char** m_ppData;
	int m_Count;

	int m_Size;
};

void main() {
	Stack<int> kStack1(64);
	cout << "스택의 크기는? " << kStack1.GetStackSize() << endl;
	kStack1.push(10);
	kStack1.push(11);
	kStack1.push(12);

	int Count1 = kStack1.Count();
	for (int i = 0; i < Count1; ++i) {
		cout << "유저의 레벨 변화-> " << kStack1.pop() << endl;
	}

	cout << endl;

	char GameID1[MAX_ID_LENGTH] = "NiceChoi";
	char GameID2[MAX_ID_LENGTH] = "SuperMan";
	char GameID3[MAX_ID_LENGTH] = "Attom";

	//Stack 크랠스 템플릿의 char* 전문화 버전을 생성함.
	Stack<char*> kStack2(64);
	kStack2.push(GameID1);
	kStack2.push(GameID2);
	kStack2.push(GameID3);

	int Count2 = kStack2.Count();
	for (int i = 0; i < Count2; ++i) {
		cout << "같이 게임을 한 유저의 ID -> " << kStack2.pop() << endl;
	}
}