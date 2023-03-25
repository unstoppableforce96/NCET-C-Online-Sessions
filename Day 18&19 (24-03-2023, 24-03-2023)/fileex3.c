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
	// fgetc() --> Used to read a single character from the
	// file
	char ch1 = fgetc(fptr);
	printf("%c", ch1);
	char ch2 = fgetc(fptr);
	printf("%c", ch2);
	char ch3 = fgetc(fptr);
	printf("%c", ch3);
}