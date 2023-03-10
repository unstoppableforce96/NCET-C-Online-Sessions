#include <stdio.h>
#include <string.h>
int main() {
	char str[1000];
	scanf("%[^\n]s", str);
	int len = strlen(str);
	printf("%d", len);	
}