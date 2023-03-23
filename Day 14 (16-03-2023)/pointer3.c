#include <stdio.h>
int main() {
	int a = 10;
	int *ptr;// ptr points to a ptr = 1000
	ptr = &a;
	// using ptr you can access 10
	// dereference operator (*) or value of operator
	printf("%d", *ptr); // accesses the value that is being
	// pointed by ptr
}