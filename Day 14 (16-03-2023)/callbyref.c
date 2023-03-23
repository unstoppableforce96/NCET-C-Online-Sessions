// call by ref
#include <stdio.h>
void swap(int *a, int *b) { // a = 10, b = 20
	int t = *a; // t = 10
	*a = *b; // a = 20
	*b = t; // b = 10
}

int main() {
	int a = 10, b = 20;
	printf("Before swapping: a=%d b=%d\n", a, b);
	swap(&a, &b); // call by ref swap(1000, 1016)
	printf("After swapping: a=%d b=%d", a, b);
	return 0;
}