// Sum of all elements of the array
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	// Reading an array of integers
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); // a[0]
	}
	
	int count = 0;
	// Accessing an array of integers
	for (int i = 0; i < n; i++) {
		if(a[i]%2 == 0 && i%2 == 0) {
			count++;
		}
	}
	printf("%d", count);
}