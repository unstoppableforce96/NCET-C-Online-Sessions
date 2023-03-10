// string
#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^\n]s", str);
	// reading a string that contains spaces;
	printf("%c %c", str[0], str[3]);
}