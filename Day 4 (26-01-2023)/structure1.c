#include <stdio.h>
struct Student {
	char rollnumber[12];
	char name[20];
	int age;
	float cgpa;
};
int main() {
	// declare an student variable
	struct Student s1 = {"22A91A04C6", "Pavan", 18, 10.0};
	struct Student s2 = {"22A91A04D6", "Prasad", 25, 7.5};
	// Access the members of a structure using . operator
	printf("%s\t%s\t%d\t%.2f\n", s1.rollnumber, s1.name, s1.age, s1.cgpa);
	printf("%s\t%s\t%d\t%.2f\n", s2.rollnumber, s2.name, s2.age, s2.cgpa);
	
}