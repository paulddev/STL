// 참조 : https://blockdmask.tistory.com/333
#include <iostream>
#include <string>
using namespace std;
// C++11부터 지원
// string -> 정수, 실수로 변경가능

// stoi   = string -> int
// stof   = string -> float
// stol   = string -> long int
// stoll  = string -> long long
// stod   = string -> double
// stoul  = string -> unsigned int
// stoull = string -> unsigned long long
// stold  = string -> long double

int main()
{
	string str1 = "22";
	string str2 = "2144967290";
	string str3 = "3.4";
	string str4 = "2.11";

	int num1       = stoi(str1);
	long long num2 = stoll(str2);
	float num3     = stof(str3);
	double num4    = stod(str4);

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	cout << "num3 : " << num3 << endl;
	cout << "num4 : " << num4 << endl;
	cout << endl;


	string str5 = "33BlockDMask";

	int num5 = stoi(str5);
	cout << "stoi(str5)" << endl;
	cout << "str5 : " << str1 << endl;
	cout << "num5 : " << num5 << endl;
	cout << endl;

	size_t sz;
	int num6 = stoi(str5, &sz);
	cout << "stoi(str5, &sz)" << endl;
	cout << "str5 : " << str5 << endl;
	cout << "num5 : " << num5 << endl;
	cout << "sz : " << sz << endl;
	cout << "str5[sz] : " << str5[sz] << endl;
	cout << "str5.substr(sz) : " << str5.substr(sz) << endl;
	cout << endl;

	cout << "stoi(str6, nullptr, base)" << endl;

	string str6 = "1110";
	// 2진수 형태의 문자열을 10진수 정수로 변환
	cout << "stoi(str6, nullptr, 2) : " << stoi(str6, nullptr, 2) << endl;

	str6 = "014";
	// 8진수 형태의 문자열을 10진수 정수로 변환
	cout << "stoi(str6, nullptr, 8) : " << stoi(str6, nullptr, 8) << endl;

	str6 = "0x14";
	// 16진수 형태의 문자열을 10진수 정수로 변환
	cout << "stoi(str6, nullptr, 16) : " << stoi(str6, nullptr, 16) << endl;
	return 0;
}