// string
#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^a]s", str); // reads a
	// read everything but a
	printf("%s", str);
}