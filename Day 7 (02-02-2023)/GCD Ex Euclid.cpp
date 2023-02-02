// Extended Euclid's Algo to find GCD
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	while (a != 0 && b != 0) {
		if (a > b) {
			a %= b;
		} else {
			b %= a;
		}
	}
	int gcd;
	if (a == 0) gcd = b;
	else gcd = a;
	printf("GCD is: %d ", gcd);
}