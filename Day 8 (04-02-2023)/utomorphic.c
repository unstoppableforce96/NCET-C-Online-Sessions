#include <stdio.h>
#include <math.h>
int main() {
	int n, len = 0;
	scanf("%d", &n); // 1234
	int s = n * n;
	int t = n;
	// find out the length of the number (no. of digits)
	while (n) { // 0
		len++; // len = 4
		n = n / 10; // n = 1234 / 10 --> 0
	}
//	printf("%d", len);
	if (t == s % (int)pow(10, len)) { // type conversion
		printf("Automorphic");
	} else {
		printf("Not an Automorphic");
	}
}