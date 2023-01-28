#include  <stdio.h>

void reverse(int n) {
	int rev = 0, r;
	while (n > 0) {
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	printf("%d ", rev);
}

int main() {
//	int z;
//	scanf("%d", &z);
//	reverse(z);
	for (int i = 100; i <= 200; i++) {
		reverse(i);
	}
}