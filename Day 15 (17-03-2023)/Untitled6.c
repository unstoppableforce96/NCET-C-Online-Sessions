#include <stdio.h>
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void readArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
}

int main() {
	int A[7];
	int B[12];
	int C[3];
	readArray(A, 7); // call by ref
	readArray(B, 12); // call by ref
	readArray(C, 3); // call by ref
	printArray(A, 7); // call by ref
	printArray(B, 12); // call by ref
	printArray(C, 3); // call by ref
	
}