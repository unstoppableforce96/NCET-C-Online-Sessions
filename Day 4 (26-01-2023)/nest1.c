#include <stdio.h>
struct Date {
	int day;
	int month;
	int year;
};
struct Student {
	char rn[12];
	char name[20];
	struct Date dob;
};
int main() {
	struct Student s;
	scanf("%s", s.rn);
	scanf("%s", s.name);
	scanf("%d%d%d", &s.dob.day, &s.dob.month, &s.dob.year);
	printf("%s\n", s.rn);
	printf("%s\n", s.name);
	printf("%d-%d-%d", s.dob.day, s.dob.month, s.dob.year);
}






