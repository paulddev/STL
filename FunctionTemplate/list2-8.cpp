#include <iostream>
using namespace std;

//함수 템플릿
//반환 값이 T1이라 문제가 생긴다. (double -> int 데이터 손실)
//템플릿으로 만든 값을 비교하는 Max 함수
template<typename T1, typename T2> const T1& Max(const T1& a, const T2& b) {
	cout << "Max(const T& a, const T& b) 템플릿 버전 사용" << endl;
	return a > b ? a : b;
}

//전문화시킨Max 함수
template <> const double& Max(const double& a, const double& b) {
	cout << "Max(const double& a, const double& b) 전문화 버전 사용" << endl;
	return a > b ? a : b;
}

void main() {
	double Char1_MP = 300;
	double Char1_SP = 400.25;
	double MaxValue1 = Max(Char1_MP, Char1_SP);
	cout << "MP와 SP 중 가장 큰값은 " << MaxValue1 << "입니다." << endl << endl;

	int Char2_MP = 300;
	double Char2_SP = 400.25;
	double MaxValue2 = Max(Char2_MP, Char2_SP);
	cout << "MP와 SP 중 가장 큰값은 " << MaxValue2 << "입니다." << endl << endl;
}