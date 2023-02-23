#include <stdio.h>
int main() {
	// Initialization
	int a[5] = {9, 8, 7, 6, 10};
	//          0  1  2  3  4
	// accessing the elements of an array using loop
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", a[i]); // a[2]
	}
}