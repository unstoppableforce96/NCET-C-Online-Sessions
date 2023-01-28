// you can use a break statement to terminate an
// infinite loop
#include <stdio.h>
int main() {
	int i = 1;
	while (1) {
		if (i == 10) {
			break;
		}
		printf("%d ", i);
		i++;
	}
}