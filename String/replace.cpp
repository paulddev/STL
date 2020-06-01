// https://modoocode.com/250
#include <iostream>
#include <string>

/* replace : 문자열의 일부를 다른 문자열로 치환한다. */

int main()
{
	std::string base = "this is a test string.";
	std::string str2 = "n example";
	std::string str3 = "sample phrase";
	std::string str4 = "useful.";

	std::string str = base;    // "this is a test string."
	std::cout << "str : " << str << '\n';

	// str에서 index 9부터 5개의 문자열을 str2로 치환한다.
	str.replace(9, 5, str2);   // "this is an example string."
	std::cout << "str : " << str << '\n';

	// str에서 index 19부터 6개의 문자열을 str3에서 index 7부터 6개의 문자열로 치환한다.
	str.replace(19, 6, str3, 7, 6); // "this is an example phrase." 
	std::cout << "str : " << str << '\n';

	// str에서 index 8부터 10개의 문자열을 "just a"로 치환한다.
	str.replace(8, 10, "just a");  // "this is just a phrase."
	std::cout << "str : " << str << '\n';

	// str에서 index 8부터 6개의 문자열을 "a shorty"에서 7개의 길이만큼만 치환한다.
	str.replace(8, 6, "a shorty", 7); // "this is a short phrase."
	std::cout << "str : " << str << '\n';

	// str에서 index 22부터 1개의 문자 '.'를 '!' 3개로 치환한다.
	str.replace(22, 1, 3, '!'); //"this is a short phrase!!!"
	std::cout << "str : " << str << '\n';

	str.replace(str.begin(), str.end() - 3, str3); // "sample phrase!!!"
	std::cout << "str : " << str << '\n';

	str.replace(str.begin(), str.begin() + 6, "replace");
	std::cout << "str : " << str << '\n'; // "replace phrase!!!"

	str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);
	std::cout << "str : " << str << '\n'; // "replace is cool!!!"

	str.replace(str.begin() + 12, str.end() - 4, 4, 'o');
	std::cout << "str : " << str << '\n'; // "replace is cooool!!!"

	str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());
	std::cout << "str : " << str << '\n'; // " replace is useful."
	return 0;
}