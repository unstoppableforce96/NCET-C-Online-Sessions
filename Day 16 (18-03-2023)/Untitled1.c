#include <stdio.h>
#define min(a, b) (a < b) ? a : b
void printArray(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void merge(int *arr, int L, int M, int R) {
	int i = L, j = M + 1, k = 0;
	int res[R - L + 1];
	while (i <= M && j <= R) {
		if (arr[i] <= arr[j]) {
			res[k++] = arr[i++];
		}
		else {
			res[k++] = arr[j++];
		}
	}
	while (i <= M) {
		res[k++] = arr[i++];
	}
	while (j <= R) {
		res[k++] = arr[j++];
	}
	k = 0;
	for (int z = L; z <= R; z++) {
		arr[z] = res[k++];
	}
}

void merge_sort(int *arr, int n) {
	int L, R, M;
	for (int p = 1; p < n; p *= 2) {
		for (int i = 0; i < n; i += 2 * p) {
			L = i;
			M = L + p - 1;
			R = min(L + 2 * p - 1, n - 1);
			merge(arr, L, M, R);
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	merge_sort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}