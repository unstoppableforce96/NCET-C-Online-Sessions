// Reversing an array into another array
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int A[n], B[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	// Accessing the elements from reverse of A
	for (int i = n - 1, j = 0; i >= 0; i--, j++) {
		B[j] = A[i];
	}
	
	// Print B
	for (int i = 0; i < n; i++) {
		printf("%d ", B[i]);
	}
}