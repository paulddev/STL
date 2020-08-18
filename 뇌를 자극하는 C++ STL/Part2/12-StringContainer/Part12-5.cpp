#include <iostream>
#include <string>
using namespace std;

// s1>s2 => 1
// s1<s2 => -1
// s1==s2 => 0
int main()
{
	string s1("ABCDE");
	string s2("AKABC");
	const char* sz = "AKABC";

	// s:string객체, sz:'\0'문자열, off:시작위치, n:길이
	cout << "s1.compare(s): " << s1.compare(s2) << endl;
	cout << "s1.compare(off,n,s): " << s1.compare(2, 3, s2) << endl;
	cout << "s1.compare(off,n,s,off2,n2): " << s1.compare(0, 3, s2, 2, 3) << endl;
	cout << "s1.compare(sz): " << s1.compare(sz) << endl;
	cout << "s1.compare(off,n,sz): " << s1.compare(2, 3, sz) << endl;
	cout << "s1.compare(off,n,sz,n2): " << s1.compare(0, 1, sz, 1) << endl;

	string s3("CDE");
	string s4("AKABC");
	// CDE 문자열이 AKABC 보다 사전순으로 뒤에 있다는 뜻
	cout << "s3.compare(s4): " << s3.compare(s4) << endl;

	return 0;
}