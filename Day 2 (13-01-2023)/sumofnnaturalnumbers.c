#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n); // 5
	for (int i = 1; i <= n; i++) { // i = 6 <= 5
		sum += i; // sum += i <--> sum = 15;
	}
	printf("%d", sum);
}