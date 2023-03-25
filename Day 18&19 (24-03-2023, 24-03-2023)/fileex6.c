#include <stdio.h>
int main() {
	// Opening a file in read mode
	FILE *fptr = fopen("sample.txt", "r");
	
//	if (fptr == NULL) {
//		printf("File Does not exist");
//	}
//	else {
//		printf("File Opened Successfully");
//	}
	// fscanf()
	// helps us read the content in formatted way
	int a;
	fscanf(fptr, "%d", &a);
	printf("%d", a * a);
}