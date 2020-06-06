// https://modoocode.com/174
#include <iostream>
#include <vector>

// 템플릿 버전
template<typename T>
void print_vector(std::vector<T>& vec)
{
        // typename을 꼭 명시해주자.
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}
}

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	std::cout << "처음 벡터 상태" << std::endl;
	print_vector(vec);
	std::cout << "---------------------------------------" << std::endl;

	// vec[2] 앞에 15 추가
	vec.insert(vec.begin() + 2, 15);
	print_vector(vec);
	std::cout << "---------------------------------------" << std::endl;

	// vec[3] 제거
	vec.erase(vec.begin() + 3);
	print_vector(vec);
	return 0;
}
