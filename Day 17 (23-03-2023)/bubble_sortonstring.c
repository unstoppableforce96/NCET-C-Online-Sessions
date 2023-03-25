// Bubble Sort
#include <stdio.h>
void bubble_sort(char *arr, int n) { // 7
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				char temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	char arr[n];
	scanf("%s", arr);
	// function call to bubble_sort
	bubble_sort(arr, n);
	printf("%s", arr);
	return 0;
}