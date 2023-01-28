#include <stdio.h>
int add(int a, int b) {
	int c = a + b;
	return c;
}

int main() {
//	printf("%d", add(10, 20));	
	int res = add(10, 20);
	printf("%d", res);
}