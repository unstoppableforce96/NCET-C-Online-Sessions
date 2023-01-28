// function that accepts four integers and prints the product of them
#include <stdio.h>
void pro(int a, int b, int c, int d) {
	printf("%d\n", a * b * c * d);
}

int main() {
	int w, x, y, z;
	scanf("%d%d%d%d", &w, &x, &y, &z);
	pro(w, x, y, z);
}