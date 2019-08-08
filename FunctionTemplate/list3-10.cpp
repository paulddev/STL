#include <iostream>
using namespace std;

//싱글톤 패턴
//파라메터 T를 싱글톤이 되도록 정의한다.
template <typename T> class MySingleton {
public:
	MySingleton() {}
	virtual ~MySingleton() {}

	//이 멤버를 통해서만 생성이 가능하다.
	static T* GetSingleton() {
		if (NULL == _Singleton) {
			_Singleton = new T;
		}
		return (_Singleton);
	}

	static void Release() {
		delete _Singleton;
		_Singleton = NULL;
	}

private:
	static T* _Singleton;
};

template <typename T> T* MySingleton<T> ::_Singleton = NULL;

//싱글톤 클래스 템플릿을 상속 받으면서 파라메터에 본 클래스를 넘긴다.
class MyObject : public MySingleton<MyObject> {
public:
	MyObject() : _nValue(10) {}

	void SetValue(int value) { _nValue = value; }
	int GetValue() { return _nValue; }

private:
	int _nValue;
};

void main() {
	MyObject* MyObj1 = MyObject::GetSingleton();

	cout << MyObj1->GetValue() << endl;

	//MyObj2는 MyObj1과 동일한 객체이다.
	MyObject* MyObj2 = MyObject::GetSingleton();
	MyObj2->SetValue(20);

	cout << MyObj1->GetValue() << endl;
	cout << MyObj2->GetValue() << endl;
}