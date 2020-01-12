// 참조:https://blockdmask.tistory.com/338
// C++ String 클래스 예제3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "BlockDMask";
	string str2 = "BlogBlogBlogBlog";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	// index가 5번째인 값부터 끝까지 문자열을 반환
	cout << "str1.substr(5) : " << str1.substr(5) << endl;
	// index가 5번째인 값부터 1 길이의 문자열을 반환
	cout << "str1.substr(5,1) : " << str1.substr(5, 1) << endl;
	// str1의 5번째인 자리부터 2개의 문자열을 str2문자열 전체로 대체
	cout << "str1.replace(5, 2, str2) : " << str1.replace(5, 2, str2) << endl;
	cout << endl;

	string str3 = "C++ example";
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << endl;

	// str2와 str3의 참조를 서로 바꿈 (참조 교환이므로 복사 성능저하 x)
	cout << "swap(str2, str3)" << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	return 0;
}