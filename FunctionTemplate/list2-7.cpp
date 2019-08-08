#include <iostream>
using namespace std;

//함수 템플릿
//반환 값이 T1이라 문제가 생긴다. (double -> int 데이터 손실)
template<typename T1, typename T2> const T1& Max(const T1& a, const T2& b) {
	return a > b ? a : b;
}

void main() {
	int Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP와 SP 중 가장 큰값은 " << MaxValue1 << "입니다." << endl << endl;
	
	double MaxValue2 = Max(Char1_SP, Char1_MP);
	cout << "MP와 SP 중 가장 큰값은 " << MaxValue2 << "입니다." << endl << endl;
}