#include  <stdio.h>
int reverse(int n) {
	int rev = 0, r;
	while (n > 0) {
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	return rev;
}

int main() {
	int start, stop;
	scanf("%d%d", &start, &stop);
	for (int i = start; i <= stop; i++) {
		if (i == reverse(i)) {
			printf("%d ", i);
		}
	}
}