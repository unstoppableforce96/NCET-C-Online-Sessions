#include <stdio.h>
int main() {
	// write mode
	FILE *fptr = fopen("test.txt", "w");
	int a, b, c;
	a = 10;
	b = 20;
	c = 30;
	fprintf(fptr, "%d %d %d", a, b, c);
}