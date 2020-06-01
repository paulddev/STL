// https://modoocode.com/307
#include <iostream>
#include <string>

/* append : 문자열 끝에 문자들을 덧붙인다. */

int main()
{
	std::basic_string<char> str = "string";
	const char* cptr = "C-string";     // NULL 문자 포함되어 있다.
	const char carr[] = "Two and one"; // NULL 문자 포함되어 있다.

	std::string output;

	// 1) 문자 '*'를 3번 추가
	output.append(3, '*');
	std::cout << "1) " << output << '\n';

	// 2) 전체 문자열 str 을 추가
	output.append(str);
	std::cout << "2) " << output << '\n';

	// 3) 문자열 str의 일부분을 추가한다.
	output.append(str, 3, 3);
	std::cout << "3) " << output << '\n';

	// 4) 널 종료 문자열의 일부분을 추가한다.
	// append 가 *this를 리턴하기 때문에 append 를 여러번 이어서 호출할 수 있다.
	output.append(1, ' ').append(carr, 4);
	std::cout << "4) " << output << '\n';

	// 5) 널 종료 문자열을 추가한다.
	output.append(cptr);
	std::cout << "5) " << output << '\n';

	// 6) 범위 안의 문자열을 추가한다.
	output.append(&carr[3], std::end(carr));
	std::cout << "6) " << output << '\n';

	// 7) 초기화자 리스트 안의 문자열을 추가한다.
	output.append({ ' ', 'l', 'i','s','t' });
	std::cout << "7) " << output << '\n';
	return 0;
}