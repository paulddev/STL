// https://modoocode.com/174
#include <iostream>
#include <vector>

template<typename T>
void print_vector(std::vector<T>& vec)
{
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << std::endl;
	}
}

template<typename T>
void print_vector_range_based(std::vector<T>& vec)
{
	// const를 붙이면 이 부분에서는 수정을 하지 않겠다고 단언하는 것과 같다.
	// 추가적으로 auto를 사용하면 알아서 자료형을 알맞게 맞춰준다는 점이다.
	for (const auto& elem : vec)
	{
		std::cout << elem << std::endl;
	}
}

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	std::cout << "print_vector" << std::endl;
	print_vector(vec);
	std::cout << "print_vector_range_based" << std::endl;
	print_vector_range_based(vec);
	return 0;
}
