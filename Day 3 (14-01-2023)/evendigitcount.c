// find out the sum of digits
#include <stdio.h>
int main() {
	int n, r, edc = 0;
	scanf("%d", &n);
	while (n > 0) { 
		r = n % 10; 
		if (r % 2 == 0) {
			edc++;
		}
		n = n / 10; 
	}
	printf("%d", edc);
}