#include <iostream>
using namespace std;

//돈을 저장할 수 있는 최대 개수
const int MAX_MONEY_COUNT = 100;

//돈 저장 스택 클래스
class MoneyStack {
public:
	MoneyStack() {
		Clear();
	}

	//초기화 한다.
	void Clear() {
		m_Count = 0;
	}

	//스택에 저장된 개수
	int Count() {
		return m_Count;
	}

	//저장된 데이터가 없는가?
	bool IsEmpty() {
		return 0 == m_Count ? true : false;
	}
	//돈을 저장한다.
	bool push(_int64 Money) {
		//저장할 수 있는 개수를 넘는지 조사한다.
		if (m_Count >= MAX_MONEY_COUNT) {
			return false;
		}
		//저장후 개수를 하나 늘린다.
		m_aData[m_Count] = Money;
		++m_Count;
		return true; //성공적으로 저장.
	}
	
	

	//스택에서 돈을 빼낸다.
	_int64 pop() {
		//저장된 것이 없다면 0을 반환한다.
		if (m_Count < 1) {
			return 0;
		}
		//개수를 하나 감소 후 반환한다.
		--m_Count;
		return m_aData[m_Count];
	}

private:
	_int64 m_aData[MAX_MONEY_COUNT];
	int m_Count;
};