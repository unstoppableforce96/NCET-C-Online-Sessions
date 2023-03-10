#include <stdio.h>
#include <string.h>
int main() {
	char s1[100] = "abhishek";
	char s2[100] = "abhiram";
	printf("%d", strcmp(s1, s2));
	// strcmp compares the s1 with s2 and gives
	// pos s1 > s2
	// neg s1 < s2
	// 0 s1 == s2
}
