#include <stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b); // 12 18
	// multiples of a
	int i = 1; // i = 1
	while (1) {
		int mul = b * i; // mul = a * i = 12 * 3	
		if (mul % a == 0) {
			printf("LCM is: %d", mul);
			break;
		}
		i++;
	}
}