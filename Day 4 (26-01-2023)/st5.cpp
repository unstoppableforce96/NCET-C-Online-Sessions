#include <stdio.h>
struct Student {
	char rollnumber[12];
	char name[20];
	int age;
	float cgpa;
};

int main() {
	// array of structures
	struct Student students[3];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%s", students[i].rollnumber);
		scanf("%s", students[i].name);
		scanf("%d", &students[i].age);
		scanf("%f", &students[i].cgpa);
	}
	
	for (i = 0; i < 3; i++) {
		printf("%s\t%s\t%d\t%.2f\n", students[i].rollnumber, students[i].name, students[i].age, students[i].cgpa);
	}
}



