#include <stdio.h>
struct student {
	char name[20]; // 20 bytes
	int age; // 4 bytes
	float cgpa; // 4 bytes
	// 28 bytes
};

int main() {
	// create a structure variable (structure object/instance)
	int a; // 4 bytes
//	printf("%d bytes %d bytes\n", sizeof(int), sizeof(a));
	struct student s1 = {"pavan", 25, 4.5}; // initialiazing a structure
	struct student s2 = {"kiran", 27, 9.4};
//	printf("%d bytes %d bytes\n", sizeof(struct student), sizeof(s));
	// Accessing the members of structure
	// Structure members can be access using . operator
	printf("Name\tAge\tCGPA\n");
	printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.cgpa);
	printf("%s\t%d\t%.2f", s2.name, s2.age, s2.cgpa);
}