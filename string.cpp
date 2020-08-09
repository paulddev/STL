//https://hibee.tistory.com/48?category=1012497
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	// 선언
	string str = "";
	char cstr[] = "";

	// 문자열의 길이
	cout << "문자열의 길이" << endl;
	str = "abcde";
	cout << "str.size() : " << str.size() << endl;
	cout << "str.length() : " << str.length() << endl;
	cout << "str.empty() : " << str.empty() << endl << endl;

	// 문자열 비교
	cout << "문자열의 비교" << endl;
	string str1 = "string";
	string str2 = "string";
	if (str1 == str2)
		cout << "같음" << endl;
	else
		cout << "다름" << endl;

	string str3 = "strinf";
	// 문자열이 같으면 1, 아니면 0
	if (str1 == str3)
		cout << "같음" << endl;
	else
		cout << "다름" << endl;

	// str3가 더 크면 1, 아니면 0
	if (str1 < str3)
		cout << "str1이 str3보다 사전순으로 앞" << endl;
	else
		cout << "str1이 str3보다 사전순으로 뒤" << endl;

	cout << "(str1 < str3) => " << (str1 < str3) << endl << endl;

	// 문자열 삽입
	cout << "문자열의 삽입" << endl;
	string str4 = "Hello";
	cout << "str4 : " << str4 << endl;

	str4.push_back('!'); // string이 아닌 char형이다.
	cout << "str4 : " << str4 << endl;

	string str5 = "e";
	str5.insert(0, "H");
	cout << "str5 -> " << str5 << endl;
	str5.insert(2, "o");
	cout << "str5 -> " << str5 << endl;
	str5.insert(2, 2, 'l').append("!");
	cout << "str5 -> " << str5 << endl << endl;

	// 형변환
	cout << "문자열의 형변환" << endl;
	// 문자 -> 숫자
	string str6 = "15 moneys";
	int num = stoi(str6);
	cout << "num : " << num << endl;

	// 이건 안됨.
	string str7 = "number of 15";
	//num = stoi(str7);

	// 숫자 -> 문자열
	str6 = to_string(num);
	cout << "str6 : " << str6 << endl << endl;

	// sstream
	// istringstream
	// char의 경우에는 strtok을 사용할 수 있으나,
	// string을 사용하는 경우, const char* 를 반환하므로 복사가 필요
	cout << "sstream 사용 예시" << endl;
	string inputStr;
	getline(cin, inputStr, '\n');

	istringstream iss(inputStr);
	string token;

	// Hello World!를 입력하면
    // Hello
    // World!
	while (getline(iss, token, ' '))
	{
		cout << "token : " << token << endl;
	}
	cout << endl;

	// 문자열 쪼개기
	// https://word.tistory.com/24
	/*
	* vector<string>으로 input으로 아래와 같이 들어온다면
	[0] "1 Kim 89"
	[1] "2 Park 52"
	[2] "3 Moon 100"
	[3] "4 Jun 95"

	이러한 input에서 각 번호/이름/점수를 각각 나누어 저장해야할 때 어떻게?
	*/
	cout << "문자열을 쪼개보자" << endl;
	vector<string> input;
	input.push_back("1 Kim 89");
	input.push_back("2 Park 52");
	input.push_back("1 Moon 100");
	input.push_back("1 Jun 95");

	for (int i = 0; i < input.size(); ++i)
	{
		int num, score;
		string name;

		stringstream ss;
		ss.str(input[i]); // 복사
		
		ss >> num;
		ss >> name;
		ss >> score;

		cout << num << " " << name << " " << score << endl;
		// 이후 필요한 자료구조에 저장하여 활용한다.
	}

	cout << "stringstream 의 추가 예시" << endl;
	// stringstream은 주어진 문자열에서 필요한 정보를 빼낼 때 유용하게 사용
	float number;
	stringstream stream;
	
	string str8 = "25 1 3 .235 \n1111111\n222222";
	stream.str(str8);
	// 더 이상 number의 자료형에 맞는 정보가 없을 때까지
	// 계속 스트림에서 number으로 자료를 추출/복사하는 것
	while (stream >> number)
		cout << "number : " << number << endl;

	cout << endl;
	// 다시 응용해보자.
	string str9 = "23 259 .326 22 a 15";
	string str10 = "1 263avj 3135 baij af9i39a fklk30";

	stringstream ss(str9);
	string k;
	while (ss >> k)
		cout << k << endl;

	cout << endl;

	ss.clear(); // flag bit들을 초기화

	ss.str(str10);
	while (ss >> k)
		cout << k << endl;

	return 0;
}