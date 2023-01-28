#include <stdio.h>
int main() {
	int n, l, u;
	scanf("%d%d%d", &n, &l, &u);
	for (int i = l; i <= u; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}