#include <stdio.h>
struct Student {
	char rollnumber[12];
	char name[20];
	int marks[5];
	int tot;
	float per;
	char grade;
};

char set_grade(float per) {
	if (per >= 90) return 'O';
	else if (per >= 80) return 'A';
	else if (per >= 70) return 'B';
	else if (per >= 60) return 'C';
	else if (per >= 50) return 'D';
	else return 'E';
}

int main() {
	struct Student s;
	scanf("%s", s.rollnumber);
	scanf("%s", s.name);
	s.tot = 0;
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &s.marks[i]);
		s.tot += s.marks[i];
	}
	s.per = s.tot/5;
	s.grade = set_grade(s.per);
	printf("%s\t%s\t%d\t%.2f\t%c", s.rollnumber, s.name, s.tot, s.per, s.grade);
}














