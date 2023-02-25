// sum of maximums of rows
#include <stdio.h>
#include <limits.h>
int main() {
	// reading dimensions
	int r, c;
	scanf("%d%d", &r, &c);
	int mat[r][c];
	// Reading of a 2d array
	for (int i = 0; i < r; i++) { 
		for (int j = 0; j < c; j++) { 
			scanf("%d", &mat[i][j]); 
		}
	}
	
	// process
	int sum = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (i == j) {
				sum += mat[i][j];
			}
		}
	}
	
	printf("%d", sum);
	
}













