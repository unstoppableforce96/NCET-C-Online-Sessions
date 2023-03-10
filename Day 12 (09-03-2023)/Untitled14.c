// string
#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^\n]s", str);
	// hello
	// 01234\\
	// not \0 -->End of the string
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c --> %d\n", str[i], str[i]);
	}
}