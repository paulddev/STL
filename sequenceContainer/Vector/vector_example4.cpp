// https://modoocode.com/174
#include <iostream>
#include <vector>

template<typename T>
void print_vector(std::vector<T>& vec)
{
	std::cout << "[ ";
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
	{
		std::cout << *itr << " ";
	}
	std::cout << "]";
}

int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(20);

	std::cout << "처음 벡터 상태" << std::endl;
	print_vector(vec);
        
	// 여기서의 itr는 vec의 첫 번째 원소를 가리키는 중이다. 즉, 유효한 반복자!
	std::vector<int>::iterator itr = vec.begin();
        
	/* vector를 순회할 때 iterator를 사용하는 것이 아닌 배열처럼 접근을 하였는데,
	   만약에 iterator 사용중에 erase나 insert를 사용한다면 그 iterator는 무효화 된다는 것을 알고 있자. */
	for (std::vector<int>::size_type i = 0; i != vec.size(); i++)
	{
		if (vec[i] == 20)
		{
			vec.erase(vec.begin() + i);
			i--;
		}
	}

	std::cout << "값이 20인 원소를 지운다!" << std::endl;
	print_vector(vec);
	return 0;
}
