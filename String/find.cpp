// https://modoocode.com/241
#include <iostream>
#include <string>

void print(std::string::size_type n, std::string const& s)
{
	if (n == std::string::npos) std::cout << "not found\n";
	else std::cout << "found : " << s.substr(n) << '\n';
}

int main()
{
	std::string::size_type n;
	std::string const s = "This is a string";

	// s의 처음부터 찾는다.
	n = s.find("is");
	print(n, s);

	// s의 5번째 문자부터 찾는다.
	n = s.find("is", 5);
	print(n, s);

	// 단일 문자 (a) 를 찾는다.
	n = s.find('a');
	print(n, s);

	// 단일 문자 (q) 를 찾는다.
	n = s.find('q');
	print(n, s);

	return 0;
}