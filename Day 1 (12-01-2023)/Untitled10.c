#include <stdio.h>
int main() {
	int a = 5, b = 3;
	a += b; // a = 8, b = 3
	b += a; // a = 8, b = 11
	a *= b; // a = 88, b = 11 
	b *= a; // a = 88, b = 968 
	b -= a; // a = 88, b = 880
	a -= b; // a = -792, b = 880
	printf("%d %d", b, a); // 880, -792
}