#include <iostream>
using namespace std;


//함수 템플릿
//const와 참조를 이용해서 템플릿을 개선한다.
template<typename T> const T& Max(const T& a, const T& b) {
	return a > b ? a : b;
}

void main() {
	int Char1_HP = 300;
	int Char2_HP = 400;
	int MaxCharHP = Max(Char1_HP, Char2_HP);
	cout << "HP 중 가장 큰 값은 " << MaxCharHP << "입니다." << endl << endl;

	float Char1_Exp = 250.0f;
	float Char2_Exp = 250.57f;
	float MaxCharExp = Max(Char1_Exp, Char2_Exp);
	cout << "경험치 중 가장 큰 값은 " << MaxCharExp << "입니다." << endl << endl;
}