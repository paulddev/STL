// 참조:https://blockdmask.tistory.com/338
// C++ String 클래스 예제2
#include <iostream>
#include <string>
using namespace std;

// string에서 size와 length의 차이
// string에서 capacity가 무엇인지
// resize(), shrink_to_fit(), clear() 함수에 대해서

int main()
{
	string str1 = "BlogBlogBlogBlog";

	cout << "생성된 str1의 문자열은" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.resize(4);
	cout << "str1.resize(4)를 한 결과는" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.shrink_to_fit();
	cout << "str1.shrink_to_fit()를 한 결과는" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	cout << endl;

	str1.clear();
	cout << "str1.clear()를 한 결과는" << endl;
	cout << "str1 : " << str1 << endl;
	cout << "str1.size() : " << str1.size() << endl;
	cout << "str1.length() : " << str1.length() << endl;
	cout << "str1.capacity() : " << str1.capacity() << endl;
	return 0;
}