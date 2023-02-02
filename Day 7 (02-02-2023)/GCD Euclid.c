// Euclid's Algo to find GCD
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	while (a != b) {
		if (a > b) {
			a -= b;
		} else {
			b -= a;
		}
	}
	printf("GCD is: %d", a);
}