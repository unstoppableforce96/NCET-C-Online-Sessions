#include <stdio.h>
int main() {
	// ind              0   1   2     0   1   2
	// marks obtained by 2 students in CIE 1 in 3 subjects
	// CIE 2 (3 subjects)
	int marks[2][3] = {{34, 57, 43}, {45, 31, 10}};
	// ind                   0             1
	printf("%d", marks[1][1]);
}