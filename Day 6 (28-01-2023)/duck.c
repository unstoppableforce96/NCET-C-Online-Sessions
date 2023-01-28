#include <stdio.h>
int main() {
	int n, is_duck = 0; // is_duck being 0 --> indicates the number is not a duck number
	// is_duck being 1 --> indicates the number is a duck number
	scanf("%d", &n);
	int r;
	while (n) {
		r = n % 10;
		if (r == 0) {
			is_duck = 1; // is_duck being 1 --> indicates given number is a duck number
			break;
		}
		n = n / 10;
	}
	
	if (is_duck == 1) {
		printf("Duck Number");
	}
	else {
		printf("Not a Duck Number");
	}
}