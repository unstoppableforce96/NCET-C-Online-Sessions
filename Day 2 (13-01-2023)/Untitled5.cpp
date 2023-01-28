#include <stdio.h>
int main() {
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	for (int i = b; i >= a; i--) {
		printf("%d x %d = %d\n", n, i, n * i);
	}
}