#include <iostream>
using namespace std;

//함수 템플릿
//const와 참조를 이용해서 템플릿을 개선한다.
template<typename T> const T& Max(const T& a, const T& b) {
	return a > b ? a : b;
}

//서로 다른 타입의 인자가 들어오면 템플릿의 파라미터 T를
//사용한 함수의 인자 a와 b의 타입을 판단할 수 없다.
void main() {
	int Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP와 SP 중 가장 큰값은 " << MaxValue1 << "입니다." << endl << endl;
}