#include <stdio.h>
int main() {
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	int tot = a + b + c + d + e;
	float perc = tot / 5;
	printf("%d\n%.2f", tot, perc);
	// grading
	if (perc >= 90) {
		printf("A");
	}
	else if (perc >= 80) {
		printf("B");
	}
	else if (perc >= 70) {
		printf("C");
	}
	else if (perc >= 60) {
		printf("D");
	}
	else if (perc >= 50) {
		printf("E");
	}
	else {
		printf("F");
	}
}