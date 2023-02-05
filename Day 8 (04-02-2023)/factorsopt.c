#include <stdio.h>
#include <math.h>
int main() {
	int n, fc = 0;
	scanf("%d", &n);
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) { // n / i is also a factor
			if (i != n/i) fc += 2;
			else fc++;
		}
	}
	printf("%d", fc);
}