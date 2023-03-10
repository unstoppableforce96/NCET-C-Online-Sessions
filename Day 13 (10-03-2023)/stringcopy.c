// string copy
#include <stdio.h>
#include <string.h>
int main() {
	char s1[100] = "pavan";
	char s2[100];
	// int a = 10;
	// int b = a;
	// strcpy(destn, src)
	// copies the content of src string into
	// destn string
	strcpy(s2, s1);
	printf("%s", s2);
}