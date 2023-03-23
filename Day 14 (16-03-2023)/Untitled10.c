// pointer arithmetic
#include <stdio.h>
int main() {
	int a = 10;
	char c = 'z';
	long long x = 1243;
	int *ptr = &a;
	char *ch = &c;
	long long *ll = &x;
//	printf("%d %d", ptr, ptr + 1);
//	printf("%d %d", ch, ch + 1);
	printf("%d %d", ll, ll + 1);
	
}