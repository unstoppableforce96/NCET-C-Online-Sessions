// task is to grade the student based on marks
// grading criteria
// m >= 90 --> O
// 80 <= m < 90 --> A
// 70 <= m < 80 --> B
// 60 <= m < 70 --> C
// 50 <= m < 60 --> D
// 35 <= m < 50 --> E
// m < 35 --> F

#include <stdio.h>
int main() {
	int m;
	scanf("%d", &m);
	if (m >= 90) {
		printf("O");
	}
	else if  (m >= 80 && m < 90){
		printf("A");
	}
	else if (m >= 70 && m < 80) {
		printf("B");
	}
	else if (m >= 60 && m < 70) {
		printf("C");
	}
	else if (m >= 50 && m < 60) {
		printf("D");
	}
	else if (m >= 35 && m < 50) {
		printf("E");
	}
	else {
		printf("F");
	}
	printf("\n");
	int k;
	scanf("%d", &k);
	if (k >= 90) {
		printf("O");
	}
	else if  (k >= 80 && k < 90){
		printf("A");
	}
	else if (k >= 70 && k < 80) {
		printf("B");
	}
	else if (k >= 60 && k < 70) {
		printf("C");
	}
	else if (k >= 50 && k < 60) {
		printf("D");
	}
	else if (k >= 35 && k < 50) {
		printf("E");
	}
	else {
		printf("F");
	}
	
	int l;
	scanf("%d", &l);
	
}



















