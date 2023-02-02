#include <stdio.h>
int main() {
	long long a, b;
	scanf("%lld%lld", &a, &b); // 12 18
	// multiples of a
	long long max, min;
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}
	long long i = 1; // i = 1
	while (1) {
		long long mul = max * i; // mul = a * i = 12 * 3	
		if (mul % min == 0) {
			printf("LCM is: %lld", mul);
			break;
		}
		i++;
	}
}