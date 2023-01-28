#include <stdio.h>
struct Student {
	char rollnumber[12];
	char name[20];
	int age;
	float cgpa;
};
int main() {
	// declare a student variable
	struct Student s;
	printf("Roll Number: ");
	scanf("%s", s.rollnumber);
	printf("Name: ");
	scanf("%s", s.name);
	printf("Age: ");
	scanf("%d", &s.age);
	printf("CGPA: ");
	scanf("%f", &s.cgpa);
	printf("%s\t%s\t%d\t%.2f\n", s.rollnumber, s.name, s.age, s.cgpa);
	
}