#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int gcd;
	// factors of a
	for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			gcd = i;
		}
	}
	printf("GCD is: %d", gcd);
}