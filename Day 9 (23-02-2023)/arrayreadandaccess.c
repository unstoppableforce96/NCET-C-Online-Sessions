#include <stdio.h>
int main() {
	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of the the array: ");
	// Reading an array of integers
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]); // a[0]
	}
	
	printf("Enter elements are\n");
	// Accessing an array of integers
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]); // a[2]
	}
}