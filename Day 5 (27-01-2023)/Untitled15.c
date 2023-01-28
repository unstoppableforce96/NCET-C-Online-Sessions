#include <stdio.h>
int main() {
	int i = 1;
	for (;;) {
		printf("%d ", i);
		if (i == 10) {
			break;
		}
		i++;
	}
}