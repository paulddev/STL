// https://modoocode.com/224
#include <iostream>
#include <set>
#include <string>

template<typename T>
void print_set(std::set<T>& s)
{
	for (const auto& elem : s)
	{
		std::cout << elem << ' ' << std::endl;
	}
}

class Todo
{
	int priority; // 중요도
	std::string job_desc;

public:
	Todo(int priority, std::string job_desc)
		:priority(priority), job_desc(job_desc) { }

	bool operator<(const Todo& t) const
	{
		if (priority == t.priority)
		{
			return job_desc < t.job_desc;
		}
		return priority > t.priority;
	}

	friend std::ostream& operator<<(std::ostream& o, const Todo& td);
};

std::ostream& operator<<(std::ostream& o, const Todo& td)
{
	o << "[중요도: " << td.priority << "] " << td.job_desc;
	return o;
}

int main()
{
	std::set<Todo> todos;

	todos.insert(Todo(1, "농구 하기"));
	todos.insert(Todo(2, "수학 숙제 하기"));
	todos.insert(Todo(1, "프로그래밍 프로젝트"));
	todos.insert(Todo(3, "친구 만나기"));
	todos.insert(Todo(2, "영화 보기"));

	print_set(todos);

	std::cout << "--------------------------" << std::endl;
	std::cout << "숙제를 끝냈다면!" << std::endl;
	todos.erase(todos.find(Todo(2, "수학 숙제 하기")));
	print_set(todos);
	return 0;
}