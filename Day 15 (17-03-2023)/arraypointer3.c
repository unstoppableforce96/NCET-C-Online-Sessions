#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n); // 5
	int arr[n];
	for (int i = 0; i < n; i++) { // 10 20 30 40 50
		scanf("%d", arr + i); // &arr[i]
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr + i)); // arr[i]
	}
}