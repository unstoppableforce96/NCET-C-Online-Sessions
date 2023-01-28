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
void set_grade(int m) {
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
}


int main() {
	int stu1 = 95;
	set_grade(stu1);
	
	int stu2 = 65;
	set_grade(stu2);
	
	int stu3 = 85;
	set_grade(stu3);
	
	int stu4 = 75;
	set_grade(stu4);
}
	



