#include <iostream>
#include <algorithm>
using namespace std;

// 데이터를 묶어서 정렬해보기
// 모든 데이터들이 객체로 정리되어 있기 때문에
class Student {
public:
	string name;
	int score;

	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student& student) {
		// 다른 학생 student와 비교를 할 때,
		// 내 우선순위(this->score)가 student.score보다 작다면
		// 더 높다는 뜻이다.
		return this->score < student.score;
	}
};
int main() {
	Student students[] = {
		Student("김 도 현", 90),
		Student("이 상 욱", 93),
		Student("김 진 솔", 94),
		Student("박 다 솜", 84),
		Student("한 다 은", 74)
	};
	// 기본적으로 Student 클래스 안에서
	// 정렬기준을 따로 정의했기 때문에 정렬이 된다.
	sort(students, students + 5);
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}

	return 0;
}