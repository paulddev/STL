// https://modoocode.com/224
#include <iostream>
#include <map>
#include <string>

template<typename K, typename V>
void print_map(const std::map<K, V>& m)
{
	for (const auto& kv : m)
	{
		std::cout << kv.first << " " << kv.second << std::endl;
	}
}

int main()
{
	std::map<std::string, double> pitcher_list;

	// 이미 같은 키가 원소로 들어 있다면 나중에 오는 insert는 무시된다.
	pitcher_list.insert(std::pair<std::string, double>("박세웅", 2.23));
	pitcher_list.insert(std::pair<std::string, double>("박세웅", 2.93));

	print_map(pitcher_list);

	std::cout << "박세웅 방어율은? : " << pitcher_list["박세웅"] << std::endl;
	return 0;
}