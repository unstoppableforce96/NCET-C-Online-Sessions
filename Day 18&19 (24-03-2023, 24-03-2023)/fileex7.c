
#include <stdio.h>
int main() {
	// File Opening
	FILE *fptr = fopen("input.txt", "r");
	
	// size of array
	int n;
	fscanf(fptr, "%d", &n);
	// create the array of size n
	int arr[n];
	for (int i = 0; i < n; i++) {
		fscanf(fptr, "%d", &arr[i]);
	}
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += arr[i];
	}
	printf("Sum is: %d", s);
}