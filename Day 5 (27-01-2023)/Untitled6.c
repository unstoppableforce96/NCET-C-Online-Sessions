#include <stdio.h>
int main() {
	for (int i = 10; i <= 100; i+=10) { // i = 10
		printf("%d ", i); // 10 20 30 40 50 60 70 80 90 100
		if (i % 18 == 0) { // 90 % 18 == 0
			break;
		}
	}
}