#include <stdio.h>
int main() {
	int a, b, c;
	a = 12;
	b = 10;
	c = 5;
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &c;
	printf("%d", *ptr1 + *ptr2 + *(&b)); // 12+5+10 = 27
}