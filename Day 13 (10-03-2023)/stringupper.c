// string lower
#include <stdio.h>
#include <string.h>
int main() {
	char s1[100] = "PAVAN";
	for (int i = 0; i < strlen(s1); i++) {
		s1[i] += 32;
	}
	printf("%s", s1);
}