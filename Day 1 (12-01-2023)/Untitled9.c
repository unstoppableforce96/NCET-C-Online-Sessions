#include <stdio.h>
int main() {
	int a = 10;
	a += 20; // a = 30
	a -= 10; // a = 20
	a *= 3; // a = 60
	a /= 4; // a = 15
	a %= 2; // a = 1
	printf("%d", a);
}