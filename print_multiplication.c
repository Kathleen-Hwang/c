#include <stdio.h>

void print_multiplication_for() {
	int i, j;
	const int MAX = 10;
	
	for (i = 2; i < MAX; i++) {
		for (j = 1; j < MAX; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}	
}

void print_multiplication_while() {
	int i = 2;
	const int MAX = 10;
	
	while (i < MAX) {
		int j = 1;
		
		while (j < MAX) {
			printf("%d * %d = %d\n", i, j, i*j);
			
			j++;
		}
		
		i++;
	}
}

void print_multiplication_dowhile() {
	int i = 2;
	const int MAX = 10;
	
	do {	
		int j = 1;
		
		do {
			printf("%d * %d = %d\n", i, j, i*j);
		} while (++j < MAX);	
		
	} while (++i < MAX);
}

int main(int argc, char *argv[]) {

	//print_multiplication_for();	
	//print_multiplication_while();	
	print_multiplication_dowhile();	
		
	return 0;
}
