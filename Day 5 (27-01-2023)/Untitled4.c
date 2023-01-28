#include <stdio.h>
int main() {
	for (int i = 1; i <= 10; i++) { // i = 5
		if (i == 5) { // 5 == 5
			break;
		}
		printf("%d ", i); // 1 2 3 4
	}
}