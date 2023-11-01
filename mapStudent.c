#include <numeric>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

typedef struct {
	char name[20];
	int midScore;
	int finalScore;
}Student;

int main() {
	int studentCnt;
	map<int, Student> map;

	printf("Input Number of Student : ");
	scanf("%d", &studentCnt);

	for (int i = 0; i < studentCnt; i++) {
		Student student;

		printf("Input student`s Info : ");
		scanf("%s %d %d", student.name, &student.midScore, &student.finalScore);

		map.emplace(i, student);
	}

	for (auto i = begin(map); i != end(map); ++i) {
		cout << i->second.name << " " << i->second.midScore << " " << i->second.finalScore << endl;
	}
}
