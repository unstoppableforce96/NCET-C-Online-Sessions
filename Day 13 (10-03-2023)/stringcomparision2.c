// string cmp
#include <stdio.h>
#include <string.h>
int main() {
	char s1[100] = "Thor"; // T, t
	char s2[100] = "thor";
	printf("%d", strcmp(s1, s2));
	// pos s1 > s2
	// neg s1 < s2
	// 0 s1 == s2
}
