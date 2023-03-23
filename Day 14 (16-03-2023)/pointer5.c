// call by value
#include <stdio.h>
void swap(int a, int b) { // a = 10, b = 20
	int t = a;
	a = b;
	b = t;
}

int main() {
	int a = 10, b = 20;
	printf("Before swapping: a=%d b=%d\n", a, b);
	swap(a, b); // call by value swap(10, 20)
	printf("After swapping: a=%d b=%d", a, b);
	return 0;
}