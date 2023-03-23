#include <stdio.h>
struct rectangle {
	int len;
	int wid;
	int area;
	int peri;
};
r
int main() {
	struct rectangle r1, r2;
	printf("Enter the len and wid of r1: ");
	scanf("%d%d", &r1.len, &r1.wid);
	printf("Enter the len and wid of r2: ");
	scanf("%d%d", &r2.len, &r2.wid);
	// area and peri of r1
	r1.area = r1.len * r1.wid;
	r1.peri = 2 * (r1.len + r1.wid);
	// area and peri of r2
	r2.area = r2.len * r2.wid;
	r2.peri = 2 * (r2.len + r2.wid);
	printf("Len\tWid\tArea\tPeri\n");
	printf("%d\t%d\t%d\t%d\n", r1.len, r1.wid, r1.area, r1.peri);
	printf("%d\t%d\t%d\t%d\n", r2.len, r2.wid, r2.area, r2.peri);
}