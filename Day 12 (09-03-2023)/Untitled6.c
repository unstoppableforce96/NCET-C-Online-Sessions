// string
#include <stdio.h>
int main() {
	// string is nothing but
	// a character array
	char str[101];
	scanf("%s", &str); // %s
	// above syntax is not useful to read
	// a string that cotains spaces
	printf("%s", str);
	// NULL character
	// Strings are NULL terminated in C
}