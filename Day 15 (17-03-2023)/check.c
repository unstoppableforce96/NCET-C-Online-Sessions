#include <stdio.h>
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int A[7] = {1, 2, 3, 4, 5, 6, 7};
	int B[12] = {10, 20, 30, 40, 50, 50, 40, 30, 20, 10, -1, 2};
	int C[3] = {-100, 247, 369};
	printArray(A, 7);
	printArray(B, 12);
	printArray(C, 3);
	
}