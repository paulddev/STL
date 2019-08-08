#include <iostream>
using namespace std;

template<typename T> class TestP {
public:
	void Add() {
		cout << "일반 템플릿을 사용했습니다." << endl;
	}
};

//T를 T*로 부분 전문화
template<typename T> class TestP<T*> {
public:
	void Add() {
		cout << "포인터를 사용한 부분 전문화 템플릿을 사용했습니다." << endl;
	}
};

void main() {
	TestP<int> test1;
	test1.Add();

	TestP<int*> test2;
	test2.Add();
}