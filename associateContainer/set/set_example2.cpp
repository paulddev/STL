// https://modoocode.com/224
#include <iostream>
#include <set>

template<typename T>
void print_set(std::set<T>& s)
{
	std::cout << "[ ";
	for (const auto& elem : s)
	{
		std::cout << elem << ' ';
	}
	std::cout << " ]" << std::endl;
}

int main()
{
	// 셋 안에는 중복된 원소들이 없다는 점이다.
	std::set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(20);
	s.insert(10);

	print_set(s);
	return 0;

}