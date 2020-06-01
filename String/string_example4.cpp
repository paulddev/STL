// 참조:https://blockdmask.tistory.com/338
// C++ String 클래스 예제4
#include <iostream>
#include <string>
using namespace std;

// find의 사용법
// string 인자 접근법
// 맨 앞, 맨 뒤 접근법

int main()
{
	string str1 = "BlockDMask";
	string str2 = "BlogBlogBlogBlog";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	// find
	cout << "str1.find(\"DM\") : " << str1.find("DM") << endl;
	cout << "str2.find(\"Blog\") : " << str2.find("Blog") << endl;
	cout << "str2.find(\"Blog\", 5) : " << str2.find("Blog", 5) << endl;
	cout << endl;

	// operator[], at
	cout << "str1[0] : " << str1[0] << endl;
	cout << "str1[3] : " << str1[3] << endl;
	cout << "str1[str1.size()-1] : " << str1[str1.size() - 1] << endl;
	cout << endl;
	cout << "str1.at(0) : " << str1.at(0) << endl;
	cout << "str1.at(3) : " << str1.at(3) << endl;
	cout << "str1.at(str1.size()-1) : " << str1.at(str1.size() - 1) << endl;
	cout << endl;

	// front, back
	cout << "str1[0] : " << str1[0] << endl;
	cout << "str1.at(0) : " << str1.at(0) << endl;
	cout << "str1.front() : " << str1.front() << endl;
	cout << endl;
	cout << "str1[str1.size()-1] : " << str1[str1.size() - 1] << endl;
	cout << "str1.at(str1.size()-1) : " << str1.at(str1.size() - 1) << endl;
	cout << "str1.back() : " << str1.back() << endl;
	return 0;
}