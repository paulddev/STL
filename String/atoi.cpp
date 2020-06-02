// 참조 : https://blockdmask.tistory.com/331
#include <iostream>
#include <cstdlib>
using namespace std;

// 문자열을 숫자(정수, 실수)로 변환하는 방법
// atoi = char* -> int
// atof = char* -> double
// atol = char* -> long int

int main()
{
	int num = 0;
	char str1[] = "2020";

	printf("char* = %s, sizeof(char*) = %d\n", str1, sizeof(str1));
	num = atoi(str1);
	printf("int = %d, sizeof(int) = %d\n\n", num, sizeof(num));

	double num2 = 0;
	char str2[] = "10.57";

	printf("char* = %s, sizeof(char*) = %d\n", str2, sizeof(str2));
	num2 = atof(str2);
	printf("int = %f, sizeof(double) = %d\n\n", num2, sizeof(num2));

	// 그냥 문자인 경우는 다음과 같이 판별하자.
	char ch1 = 'A';
	char ch2 = '0';

	if (isdigit(ch1))
		cout << "ch1의 문자는 숫자입니다." << endl;
	else
		cout << "ch1의 문자는 숫자가 아닙니다." << endl;

	if (isdigit(ch2))
		cout << "ch2의 문자는 숫자입니다." << endl;
	else
		cout << "ch2의 문자는 숫자가 아닙니다." << endl;

	// 번외편
	if (isalpha(ch1))
		cout << "ch1의 문자는 알파벳입니다." << endl;
	else
		cout << "ch1의 문자는 알파벳이 아닙니다." << endl;


	return 0;
}
