#include <stdio.h>
// function definition (outside the main())
void add(int a, int b) { // a=10		b=20
	int c = a + b; // c= a + b = 10 + 20 = 30
	printf("%d\n", c); // 30
}


int main() {
	// function call
	add(10, 20); // valid function call
	add(100, 200);
	add(1000, 2000);
}