// infinite looping
// if it never ends
#include <stdio.h>
int main() {
	int i = 1;
	while (i <= 10) { // 1 <= 10
		printf("%d ", i); // it will fall into an infinite loop
	}
}