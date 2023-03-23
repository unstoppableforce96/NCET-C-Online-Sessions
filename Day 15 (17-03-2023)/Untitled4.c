#include <stdio.h>
int main() {
	int n = 5;
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr; // 1000 + 4
	
	for (; ptr <= arr + (n-1); ptr++) {
		printf("%d ", *ptr);
	}
//	ptr++; // 1004
//	ptr++; // 1008
//	ptr++; // 1012
//	ptr++; // 1016
//	printf("%d", *ptr);
}