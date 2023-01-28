// Reverse of a given number
#include <stdio.h>
int main() {
	int n, r, rev = 0;
	scanf("%d", &n); // 1729
	while (n > 0) { // n > 0 --> 0 > 0
		r = n % 10; // r = 1 % 10 --> 1
		rev = rev * 10 + r; // rev = 9271
		n = n / 10; // n = n / 10 --> 1/ 10 --> 0
	}
	printf("%d", rev);
}