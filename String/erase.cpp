// https://modoocode.com/240
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	std::string s = "This is an example";
	std::cout << s << '\n';

	s.erase(0, 5); // erase "This "
	std::cout << s << '\n';

	s.erase(std::find(s.begin(), s.end(), ' ')); // erase ' '
	std::cout << s << '\n';

	s.erase(s.find(' '));
	//s.erase(std::find(s.begin(), s.end(), ' '), s.end());
	std::cout << s << '\n';
	return 0;
}