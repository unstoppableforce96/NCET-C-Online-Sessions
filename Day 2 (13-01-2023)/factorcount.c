// Number of Factors of a given number
#include <stdio.h>
int main() {
	int n, factor_count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			factor_count++;
		}
	}
	printf("%d", factor_count);
}