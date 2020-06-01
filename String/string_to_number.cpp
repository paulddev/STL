//https://modoocode.com/296
#include <iostream>
#include <string>

/* string 혹은 wstring 문자열을 부호 있는 혹은 없는 정수로 변환한 값을 리턴한다. */

int main()
{
	std::string str1 = "45";
	std::string str2 = "3.14159";
	std::string str3 = "31337 with words";
	std::string str4 = "words and 2";

	int myint1 = std::stoi(str1);
	int myint2 = std::stoi(str2);

	// 이 경우 해석할 수 있는 문자 위치까지 읽어들인다.
	int myint3 = std::stoi(str3);

	// 아래의 경우 std::invalid_argument 를 던진다.
	//int myint4 = std::stoi(str4);

	std::cout << "std::stoi(\"" << str1 << "\") is " << myint1 << '\n';
	std::cout << "std::stoi(\"" << str2 << "\") is " << myint2 << '\n';
	std::cout << "std::stoi(\"" << str3 << "\") is " << myint3 << '\n';
	return 0;
}