// Not so optimized approach
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int fc = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			fc++;
		}
	}
	
	if (fc == 2) {
		printf("Prime");
	}
	else {
		printf("Not Prime");
	}
}