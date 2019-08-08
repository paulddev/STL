#include <iostream>
using namespace std;

const int MAX_COUNT = 100;

//Stack 템플릿 클래스
template<typename T>
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

	bool push(T data) {
		if (m_Count >= MAX_COUNT) {
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
	T m_aData[MAX_COUNT];
	int m_Count;
};

void main() {
	Stack<double> kStackExp;

	cout << "첫번째 게임 종료- 현재 경험치 145.5f" << endl;
	kStackExp.push(145.5f);

	cout << "두번째 게임 종료- 현재 경험치 183.25f" << endl;
	kStackExp.push(183.25f);

	cout << "세번째 게임 종료- 현재 경험치 162.3f" << endl;
	kStackExp.push(162.3f);

	int Count = kStackExp.Count();
	for (int i = 0; i < Count; ++i) {
		cout << "현재 경험치->" << kStackExp.pop() << endl;
	}

	cout << endl << endl;

	Stack<_int64> kStackMoney;

	cout << "첫번째 게임 종료- 현재 돈 1000023" << endl;
	kStackMoney.push(1000023);

	cout << "두번째 게임 종료- 현재 돈 1000234" << endl;
	kStackMoney.push(1000234);

	cout << "세번째 게임 종료- 현재 돈 1000145" << endl;
	kStackMoney.push(1000145);

	Count = kStackMoney.Count();
	for (int i = 0; i < Count; ++i) {
		cout << "현재 돈->" << kStackMoney.pop() << endl;
	}
}