#include <iostream>
#include <string>
using namespace std;

// getline(in, s)는 스트림이 in으로부터 s로 문자열을 한 줄 입력받는다.
// getline(in, s, delim) : 디폴트로 delim은 \n이며, 직접 종료 문자를 지정할 수 있다.

int main()
{
	string s1, s2, s3;

	cout << "두 문자열 입력(공백 문자 가능)" << endl;
	getline(cin, s1);
	getline(cin, s2, '\n');
	getline(cin, s3, 'a');
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;

	return 0;
}