#include <stdio.h>

void call() {
	int a = 0;
	static int b = 0;
	
	printf("a : %d\t", a++);
	printf("b : %d\n", b++);
}

int main() {
	
	call();	// a : 0,	b : 0
	call();	// a : 0,	b : 1
	call();	// a : 0,	b : 2
	
	return 0;
}
