// https://modoocode.com/174
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
        
	// C++ 11부터
	// range-based for 문
	// for(/* 원소를 받는 변수 정의 */ : /* 컨테이너 */)
	for (int elem : vec)
	{
		std::cout << "원소 : " << elem << std::endl;
	}

	return 0;
}
