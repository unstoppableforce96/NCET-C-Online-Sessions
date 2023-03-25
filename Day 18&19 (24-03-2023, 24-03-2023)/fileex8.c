#include <stdio.h>
int main() {
	// write mode
	FILE *fptr = fopen("test.txt", "w");
	// 3 functions
	// fputc()
	// fputs()
	// fprintf();
	int n = 11;
	for (int i = 0; i < n; i++) {
		char ch;
		scanf("%c ", &ch);
		fputc(ch, fptr);
	}
}