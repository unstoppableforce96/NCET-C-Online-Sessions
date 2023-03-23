#include <stdio.h>
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void change(int *A, int *B, int n) {
	for (int i = 0; i < n; i++) {
		int temp = A[i];
		A[i] = B[i];
		B[i] = temp;
	}
}

int main() {
	int X[5] = {1, 2, 3, 4, 5};
	int Y[5] = {10, 20, 30, 40, 50};
	change(X, Y, 5); // call by ref
	printf("Array X: \n");
	printArray(X, 5); // 10 20 30 40 50
	printf("Array Y: \n");
	printArray(Y, 5); // 1 2 3 4 5
	return 0;
}