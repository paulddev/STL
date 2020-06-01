// https://modoocode.com/297
#include <algorithm>
#include <cassert>
#include <cstring>
#include <string>
#include <iostream>

/* 문자열 객체에 저장된 문자열들과 같은 내용을 담고 있는 널 종료 문자 배열을 가리키는 포인터를 리턴한다.*/

int main()
{
	std::string const s("Emplary");
	std::cout << "s : " << s << '\n';
	std::cout << "s.c_str() : " << s.c_str() << '\n';
	std::cout << "s length :  : " << s.length() << '\n';
	std::cout << "s.c_str() length :  : " << strlen(s.c_str()) << '\n';
	assert(s.size() == std::strlen(s.c_str()));
	assert(std::equal(s.begin(), s.end(), s.c_str()));
	assert(std::equal(s.c_str(), s.c_str() + s.size(), s.begin()));
	assert(0 == *(s.c_str() + s.size())); // 시작 주소번지에 s.size()를 해주면 NULL 문자를 가리키는데 그것의 *연산을 하면
	
	return 0;
}