#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	int s = n * n;
	int len = log10(n) + 1;
	if (n == s % (int)pow(10, len)) { // type conversion
		printf("Automorphic");
	} else {
		printf("Not an Automorphic");
	}
}