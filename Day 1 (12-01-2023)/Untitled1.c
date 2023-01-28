#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	printf("%d", cnt);
}