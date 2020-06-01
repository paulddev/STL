// 참조:https://blockdmask.tistory.com/338
// C++ String 클래스 예제1
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// 생성 3가지 방법
	string str1 = "BlockDMask";
	string str2("BlogBlogBlogBlog");
	string str3(str1);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl << endl;

	// 맨 뒤에 문자 추가
	str1.push_back('1');
	cout << "str1.push_back('1') : " << str1 << endl;
	str1.pop_back();
	// 맨 뒤에 문자 빼기
	cout << "str1.pop_back() : " << str1 << endl;
	str1.pop_back();
	cout << "str1.pop_back() : " << str1 << endl << endl;

	// operator+ 연산자 오버로딩 (string끼리 더하는 방법)
	str1 += str2;
	cout << "str1 += str2 :  " << str1 << endl;
	return 0;
}