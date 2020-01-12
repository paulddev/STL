// 참조:https://blockdmask.tistory.com/338
// C++ String 클래스 예제5
#include <iostream>
#include <string>
using namespace std;

// begin, end 반복자를 이용한 순회
// copy를 했을때는 꼭 맨 뒷자리에 '\0'을 넣어주자.
// 이는, C언어에서 char배열에서 문자열의 끝을 의미하기 때문이다.
// compare은 같으면   0
// 사전순으로 앞이면 -1
// 사전순으로 뒤이면  1

int main()
{
	string str1 = "BlockDMask";
	string str2 = "BlogBlogBlogBlog";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	// begin, end
	string::iterator iter;
	for (iter = str1.begin(); iter != str1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;

	// copy
	char arr[10];
	int arrLen = str1.copy(arr, 3, 5);
	cout << "str1.copy(arr, 3, 5)" << endl;
	cout << "arrLen : " << arrLen << endl;
	arr[arrLen] = '\0'; // 문자열의 끝을 알려주는 널문자 포함시키자.
	cout << arr << endl << endl;

	// compare
	cout << "str1.compare(\"BlockDMask\") : " << str1.compare("BlockDMask") << endl;
	cout << "str1.compare(str2) : " << str1.compare(str2) << endl;
	cout << "str2.compare(str1) : " << str2.compare(str1) << endl;
	cout << endl;
	return 0;
}