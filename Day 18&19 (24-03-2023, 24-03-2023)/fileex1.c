#include <stdio.h>
int main() {
	// Opening a file in read mode
	FILE *fptr = fopen("sample.txt", "r");
	// opening a non existing in write mode results 
	// in NULL Pointer.
	if (fptr == NULL) {
		printf("File Does not exist");
	}
	else {
		printf("File Opened Successfully");
	}
}