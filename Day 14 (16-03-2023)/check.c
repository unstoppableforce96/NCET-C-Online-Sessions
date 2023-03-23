#include <stdio.h>
void swap(int a, int b) {
	printf("In swap function\n");
	printf("Address of a = %d\n", &a);
	printf("Address of b = %d", &b);
}

int main() {
	int a = 10, b = 20;
	printf("In main function\n");
	printf("Address of a = %d\n", &a);
	printf("Address of b = %d\n", &b);
	swap(10, 20);
}