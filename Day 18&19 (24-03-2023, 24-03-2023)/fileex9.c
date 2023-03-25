#include <stdio.h>
int main() {
	// write mode
	FILE *fptr = fopen("test.txt", "w");
	// 3 functions
	// fputc()
	// fputs()
	// fprintf();
	char string[30];
//	scanf("%s", string);
	scanf("%[^\n]s", string);
	fputs(string, fptr);
}