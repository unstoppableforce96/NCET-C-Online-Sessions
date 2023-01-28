// find out the difference between even digit sum
// and odd digit sum
#include <stdio.h>
#include <math.h>
int main() {
	int n, r, eds = 0, ods = 0;
	scanf("%d", &n);
	while (n > 0) { 
		r = n % 10; 
		if (r % 2 == 0) {
			eds += r;
		}
		else {
			ods += r;
		}
		n = n / 10; 
	}
	printf("%d", abs(eds - ods));
}