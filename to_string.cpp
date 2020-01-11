// 참조 : https://blockdmask.tistory.com/334
#include <iostream>
#include <string>
using namespace std;


// to_string
// 숫자 타입의 데이터를 안전하게 스트링 타입으로 변경
// 함수 오버로딩으로 구현되어 있음

int main()
{
	int n1 = 10;
	float n2 = 24.5f;
	double n3 = 43.12;

	string str1 = to_string(n1);
	cout << "to_string(n1) : " << str1 << endl;

	string str2 = to_string(n2);
	cout << "to_string(n2) : " << str2 << endl;

	string str3 = to_string(n3);
	cout << "to_string(n3) : " << str3 << endl;
	
	return 0;
}