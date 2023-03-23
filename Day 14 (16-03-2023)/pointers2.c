#include <stdio.h>
int main() {
	int a = 10;
	int *ptr = &a;// ptr points to a ptr = 1000
	printf("%d %d", ptr, &a);
}