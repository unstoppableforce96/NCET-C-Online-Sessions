#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	// Reading an array of integers
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); // a[0]
	}
	
	// reverse access
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
}