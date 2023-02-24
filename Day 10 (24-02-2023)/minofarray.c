// Minimum element (integer) in an array
#include <stdio.h>
#include <limits.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	// finding out the maximum
	int min = INT_MAX; // First element in the array
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("%d", min);
}