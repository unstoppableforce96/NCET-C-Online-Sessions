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
	
	int e_num_count = 0;
	// Accessing an array of integers
	for (int i = 0; i < n; i++) {
		if(a[i]%2 == 0) {
			e_num_count++;
		}
	}
	printf("%d", e_num_count);
}