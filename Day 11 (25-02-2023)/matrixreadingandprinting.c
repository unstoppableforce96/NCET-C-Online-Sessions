#include <stdio.h>
int main() {
	
	// reading dimensions
	int r, c;
	scanf("%d%d", &r, &c);
	int marks[r][c];
	// Reading of a 2d array
	for (int i = 0; i < r; i++) { 
		for (int j = 0; j < c; j++) { 
			scanf("%d", &marks[i][j]); 
		}
	}
	printf("Matrix is: \n");
	for (int i = 0; i < r; i++) { // i  = 0
		for (int j = 0; j < c; j++) { // j = 1
//			printf("%d%d ", i, j);
			printf("%d ", marks[i][j]); // marks[i][j] = marks[0][1]
		}
		printf("\n");
	}
}