// string
#include <stdio.h>
int main() {
	char str[101];
	scanf("%[^\n]s", str);
	// hello
	// 01234\\
	// not \0 -->End of the string
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			printf("%c", str[i] - 32);
		else
			printf("%c", str[i]);
	}
}