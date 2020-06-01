// https://modoocode.com/241
#include <iostream>
#include <string>

/* find : 문자열에서 원하는 문자열의 위치를 찾는다. */

void print(std::string::size_type n, std::string const& s)
{
	if (n == std::string::npos) std::cout << "not found\n";
	else std::cout << "found : " << s.substr(n) << '\n';
}

int main()
{
	std::string::size_type n;
	std::string const s = "This is a string";
	std::cout << "string : " << s << "\n\n";
	
	// s의 처음부터 찾는다.
	n = s.find("is");
	std::cout << "find index : " << n << '\n';
	print(n, s);

	// s의 5번째 문자부터 찾는다.
	n = s.find("is", 5);
	std::cout << "find index : " << n << '\n';
	print(n, s);

	// 단일 문자 (a) 를 찾는다.
	n = s.find('a');
	std::cout << "find index : " << n << '\n';
	print(n, s);

	// 단일 문자 (q) 를 찾는다.
	n = s.find('q');
	std::cout << "find index : " << n << '\n'; // npos 를 받는다. 찾지 못했으므로...
	print(n, s);

	return 0;
}
