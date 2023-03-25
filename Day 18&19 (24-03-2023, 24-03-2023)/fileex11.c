#include <stdio.h>
int main() {
	FILE *fptr1 = fopen("input.txt", "r");
	FILE *fptr2 = fopen("output.txt", "w");
	int n;
	fscanf(fptr1, "%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		fscanf(fptr1, "%d", &arr[i]);
	}
	
	for (int i = 0; i < n; i++) {
		fprintf(fptr2, "%d ", arr[i] * arr[i]);
	}
	return 0;
}