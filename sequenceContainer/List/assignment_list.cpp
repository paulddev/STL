#include <iostream>
#include <list>
using namespace std;

struct Point {
	Point(char tar, int a, int b) {
		target = tar;
		first = a;
		second = b;
	}

	int first;
	int second;
	char target;
};

void main() {
	list<Point> list1;

	//점 5개로 이루어진 도형을 출력해보자.
	Point A('A', 50, 200); list1.push_back(A);
	Point B('B', 20, 80); list1.push_back(B);
	Point C('C', 75, 10); list1.push_back(C);
	Point D('D', 130, 80); list1.push_back(D);
	Point E('E', 100, 200); list1.push_back(E);


	cout << "A, B, C, D, E의 값을 순서대로 출력한다." << endl;
	//A, B, C, D, E의 값을 순서대로 출력한다.
	list<Point>::iterator iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	cout << endl << endl;

	cout << "점 F(180, 150)이 추가되었을 때, 연결해보자." << endl;
	//점 F(180, 150)이 추가되었을 때, 연결해보자.
	Point F('F', 180, 150); list1.push_back(F);

	//A, B, C, D, E, F의 값을 순서대로 출력한다.
	iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	//점 D의 값을 (200, 100)으로 변경한다.
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		if (iterPos->target == 'D') {
			iterPos->first = 200;
			iterPos->second = 100;
			break;
		}
	}

	cout << endl << endl;
	cout << "점 D의 값을 (200, 100)으로 변경한다." << endl;
	//A, B, C, D, E, F의 값을 순서대로 출력한다.
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}

	cout << endl << endl;
	cout << "점 C를 삭제한다." << endl;

	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		if (iterPos->target == 'C') {
			list1.erase(iterPos);
			break;
		}
	}

	iterEnd = list1.end();
	for (list<Point>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos) {
		cout << iterPos->target << "(" << iterPos->first << ", " << iterPos->second << ")" << endl;
	}
}