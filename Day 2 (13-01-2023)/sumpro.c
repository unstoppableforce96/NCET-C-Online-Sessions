#include <stdio.h>
int main() {
	int n, sum = 0, pro = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
		pro *= i;
	}
	int diff = sum - pro;
	printf("%d", diff * diff);
}