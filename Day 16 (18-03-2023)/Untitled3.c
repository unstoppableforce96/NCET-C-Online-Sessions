#include <stdio.h>
struct student {
	char name[20]; // 20 bytes
	int age; // 4 bytes
	float cgpa; // 4 bytes
	// 28 bytes
};

int main() {
	int a;
	struct student s1, s2;
	scanf("%s%d%f", &s1.name, &s1.age, &s1.cgpa);
	scanf("%s%d%f", &s2.name, &s2.age, &s2.cgpa);
	
//	scanf("%s", &s2.name);
//	scanf("%d", &s2.age);
//	scanf("%f", &s2.cgpa);
	
	printf("Name\tAge\tCGPA\n");
	printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.cgpa);
	printf("%s\t%d\t%.2f", s2.name, s2.age, s2.cgpa);
}