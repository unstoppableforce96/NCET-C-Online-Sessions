#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	int pos, neg, zero;
	pos = neg = zero = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 0) neg++;
		else if (arr[i] > 0) pos++;
		else zero++;
	}
	printf("%.6f\n", pos*1.0 / n);
	printf("%.6f\n", neg*1.0 / n);
	printf("%.6f", zero*1.0 / n);
}