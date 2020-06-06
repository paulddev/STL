// https://modoocode.com/174
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(10); // vec에 맨 뒤에 10을 삽입한다.
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
        
	// size_type 은 부호없는 정수이다.
	for (std::vector<int>::size_type i = 0; i < vec.size(); i++)
	{
		std::cout << "vec 의 " << i + 1 << "  : " << vec[i] << std::endl;
	}

	return 0;
}
