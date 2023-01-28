#include <stdio.h>
int main() {
	for (int i = 99; i >= 1; i--) {
		printf("%d ", i);
		// 99 98 97 96 95 94 93 .... 1
		if (i % 2 == 0 && i % 3 == 0) {
			break;
		}
	}
}