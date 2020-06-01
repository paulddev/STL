// https://modoocode.com/249
#include <iostream>
#include <string>

/* find_first_of : 주어진 문자열에서 함수의 인자로 전달된 문자열의 문자들 중 첫 번째로 나타나는 문자의 위치를 리턴
   정리하면, 하나라도 문자가 맞는 것이 있다면 그 위치를 반환한다는 점이다. */

int main()
{
	// 검색 대상 문자열
	std::string str = std::string("Hello World!");

	// 어떤 문자들을 찾아볼 것인지?
	std::string search_str = std::string("o");
	const char* search_cstr = "Good Bye!";
	const char* search_cstr2 = "BBBBBBW";

	std::cout << str.find_first_of(search_str) << '\n';
	std::cout << str.find_first_of(search_str, 5) << '\n';
	std::cout << str.find_first_of(search_cstr) << '\n';
	std::cout << str.find_first_of(search_cstr2) << '\n';
	std::cout << str.find_first_of(search_cstr2, 6) << '\n'; // str[6, str.size()) 까지 찾는다.
	std::cout << str.find_first_of(search_cstr, 0, 1) << '\n'; // [0, 0 + 1) 범위 안에서 찾는다. "G" => npos를 반환
	std::cout << str.find_first_of(search_cstr, 0, 2) << '\n'; // [0, 0 + 2) 범위 안에서 찾는다. "Go"
	// 'x' 는 Hello World 에 없으므로 npos 가 리턴된다.
	std::cout << str.find_first_of('x') << '\n';
	return 0;
}