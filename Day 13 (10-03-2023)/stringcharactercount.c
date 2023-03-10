#include <stdio.h>
int main() {
//	int n;
//	scanf("%d", &n);
	char str[1000];
	scanf("%[^\n]s", str);
	// traversing through the string
	int u, l, d, s, spc;
	u = l = d = s = spc = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') u++;
		else if (str[i] >= 'a' && str[i] <= 'z') l++;
		else if (str[i] == ' ') s++;
		else if (str[i] >= '0' && str[i] <= '9') d++;
		else spc++;
	}
	printf("%d %d %d %d %d", u, l, d, s, spc);
}