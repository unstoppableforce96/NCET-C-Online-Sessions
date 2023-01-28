#include <stdio.h>
// break is used to terminate the loop conditionally or
// unconditionally
int main() {
	for (int i = 1; i <= 10; i++) { // i = 1; 1 <= 10
		printf("%d ", i); // 1
		break; // termiated
	}
}