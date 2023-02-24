// Use of limits.h headerfile
#include <stdio.h>
#include <limits.h>
int main() {
	//short
	printf("Short:\nLowerbound %hd\nUpperbound %hd\n", SHRT_MIN, SHRT_MAX);
	//int
	printf("Int:\nLowerbound %d\nUpperbound %d\n", INT_MIN, INT_MAX);
	//long --> Use commands LONG_MIN, LONG_MAX and format specifier as %ld
	printf("Long:\nLowerbound %ld\nUpperbound %ld\n", LONG_MIN, LONG_MAX);
	//long long --> Use commands LLONG_MIN, LLONG_MAX and format specifier as %lld
	printf("Long Long:\nLowerbound %lld\nUpperbound %lld\n", LLONG_MIN, LLONG_MAX);
	
}