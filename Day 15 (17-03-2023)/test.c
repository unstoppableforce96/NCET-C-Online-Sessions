#include <stdio.h>
void change(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] * arr[i];
	}
}

int main() {
	int Z[5] = {1, 2, 3, 4, 5};
	change(Z, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", Z[i]);
	}
	return 0;
}