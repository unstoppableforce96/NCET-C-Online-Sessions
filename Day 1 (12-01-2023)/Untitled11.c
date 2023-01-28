#include <stdio.h>
int main() {
	int x = 2, y = 3, z = 4;
	x += y;
	y += z;
	z += x;
	x *= z;
	x /= y;
	y *= x;
	y %= z;
	printf("%d %d %d", z, y, x);
}