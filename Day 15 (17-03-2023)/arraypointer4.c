// Sending an array as an argument to the function
void modify(int z[]) {
	z[0] = 147;
}
#include <stdio.h>
int main() {
	int arr[5] = {10, 20, 30, 40, 50};
	printf("Before Modification: %d\n", arr[0]);
	modify(arr); // pointer -> storing the address of arr[0]
	// call by reference
	printf("After Modification: %d", arr[0]);
}