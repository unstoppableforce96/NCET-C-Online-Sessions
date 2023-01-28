// Bringing digits out of a given number
#include <stdio.h>
int main() {
	int n, r;
	scanf("%d", &n); // 4579
	while (n > 0) { // n > 0 --> 0 > 0
		r = n % 10; // r = 4 % 10 = 4
		printf("%d\n", r); // 9 7 5 4
		n = n / 10; // n = 4 / 10 --> 0
	}
	
	printf("this is n=%d value now", n);
}