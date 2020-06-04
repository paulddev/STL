// https://modoocode.com/224
#include <iostream>
#include <string>
#include <unordered_set>

template<typename K>
void print_unordered_set(const std::unordered_set<K>& s)
{
	for (const auto& elem : s)
	{
		std::cout << elem << std::endl;
	}
}

template<typename K>
void is_exist(std::unordered_set<K>& s, K key)
{
	auto itr = s.find(key);
	if (itr != s.end())
		std::cout << key << " 가 존재!" << std::endl;
	else
		std::cout << key << " 가 없다" << std::endl;
}

int main()
{
	std::unordered_set<std::string> s;

	s.insert("hi");
	s.insert("my");
	s.insert("name");
	s.insert("is");
	s.insert("psi");
	s.insert("welcome");
	s.insert("to");
	s.insert("C++");

	print_unordered_set(s);
	std::cout << "------------------------" << std::endl;
	is_exist(s, std::string("C++"));
	is_exist(s, std::string("c"));

	std::cout << "--------------------------" << std::endl;
	std::cout << "\'hi\'를 삭제" << std::endl;
	s.erase(s.find("hi")); // s.erase(s.find(std::string("hi"))); 도 가능하다.
	is_exist(s, std::string("hi"));
	return 0;
}