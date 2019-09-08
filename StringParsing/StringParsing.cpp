#include <iostream>
#include <cstring>
#include <vector>
#include <string>
//참고 https://dpdpwl.tistory.com/65
int main() {
	char str1[] = "a b c d e f";
	char* tok1 = strtok(str1, " ");
	// 공백을 기준으로 파싱해보기
	while (tok1 != NULL) {
		std::cout << tok1 << std::endl;
		tok1 = strtok(NULL, " ");
	}
	
	char str2[] = "가,나,다,라,마,바";
	char* tok2 = strtok(str2, ",");
	// 콤마를 기준으로 파싱해보기
	while (tok2 != NULL) {
		std::cout << tok2 << std::endl;
		tok2 = strtok(NULL, ",");
	}

	char str3[] = "1,2-3;4 5";
	char* tok3 = strtok(str3, ",-; ");
	// , - ; 공백을 기준으로 파싱해보기
	while (tok3 != NULL) {
		std::cout << tok3 << std::endl;
		tok3 = strtok(NULL, ",-; ");
	}

	// 응용해서 파싱한 부분을 백터에 저장해보기
	char str4[] = "a b,c|d+e*f";
	std::vector<std::string> v;
	char* tok4 = std::strtok(str4, " ,|+*");
	while (tok4 != NULL) {
		std::cout << tok4 << std::endl;
		v.push_back(tok4);
		tok4 = std::strtok(NULL, " ,|+*");
	}

	std::cout << "vector에 저장이 잘 되어 있는지 확인!" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << ' ';
	}
	std::cout << std::endl;
	

	return 0;
}