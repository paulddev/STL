// https://modoocode.com/174
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	// 반복자 사용해서 vector 컨테이너 요소를 순회할 수 있다.
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}
        
	// 반복자를 사용해서 vector 컨테이너에 접근할 수 있다.
	std::vector<int>::iterator itr = vec.begin() + 2;
	std::cout << "3 번째  : " << *itr << std::endl;
	return 0;
}
