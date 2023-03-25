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
	// EOF
	char ch;
	while (1) {
		ch = fgetc(fptr);
		if (ch == EOF) {
			break;
		}
		else {
			printf("%c --> %d\n", ch, ch);
		}
	}
}