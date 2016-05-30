#include <stdio.h>

void print_grade1(const int num);
void print_grade2(const int num);

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Input your score...\n");
	scanf("%d", &num);
	
	//print_grade1(num);
	print_grade2(num);
	
	return 0;
}

void print_grade1(const int num) {
	if (90 <= num) {
		if (95 <= num) {
			printf("A+");
		} else {
			printf("A");
		}
	} else if (80 <= num) {
		if (85 <= num) {
			printf("B+");
		} else {
			printf("B");
		}
	} else if (70 <= num) {
		if (75 <= num) {
			printf("C+");
		} else {
			printf("C");
		}
	} else if (60 <= num) {
		if (65 <= num) {
			printf("D+");
		} else {
			printf("D");
		}
	} else {
		printf("F");
	}
}

void print_grade2(const int num) {
	if (90 <= num) {
		printf("A");
	} else if (80 <= num) {
		printf("B");
	} else if (70 <= num) {
		printf("C");
	} else if (60 <= num) {
		printf("D");
	} else {
		printf("F");
	}
	
	int mod = num % 10;
	if (100 <= num | (60 <= num && mod >= 5)) {
		printf("+");
	}
}
