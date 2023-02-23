// Reversing an array - In Place reverse
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		// Swap of A[i] and A[j]
		int t = A[i];
		A[i] = A[j];
		A[j] = t;
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", A[i]);
	}
	
}