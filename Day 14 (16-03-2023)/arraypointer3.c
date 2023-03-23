#include <stdio.h>
int main() {
	// add    1000  1004 1008 1012 1016
	int arr[5] = {10, 20, 30, 40, 50};
	
	printf("%d %d %d %d\n", arr, arr+1, arr+2, arr+3);
	
	printf("%d %d %d %d", *arr, *(arr+1), *(arr+2), *(arr+3));
	// an array name itself is a pointer.
	// it stores address of first element
	// in the array
}