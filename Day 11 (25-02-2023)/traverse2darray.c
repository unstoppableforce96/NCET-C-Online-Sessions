#include <stdio.h>
int main() {
	
	int marks[3][3] = {{34, 57, 43}, {45, 31, 10}, {32, 61, 75}};
	for (int i = 0; i < 3; i++) { // i  = 0
		for (int j = 0; j < 3; j++) { // j = 1
//			printf("%d%d ", i, j);
			printf("%d ", marks[i][j]); // marks[i][j] = marks[0][1]
		}
		printf("\n");
	}
}