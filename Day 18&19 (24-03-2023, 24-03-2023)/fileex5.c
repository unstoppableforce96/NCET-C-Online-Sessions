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
	// fgets()
	char s[20];
	fgets(s, 11, fptr);
	printf("%s", s);
}