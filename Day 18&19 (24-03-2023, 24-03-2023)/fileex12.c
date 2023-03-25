#include <stdio.h>
int main() {
	FILE *fptr = fopen("sample.txt", "a");
	fputs("This is appended using append mode.", fptr);
}