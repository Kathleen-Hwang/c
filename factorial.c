#include <stdio.h>

int factorial_iteration(int num) {
	int result = 1;

	while (num > 1) {
		result *= num;
		num--;
	}
	
	return result;
}
int factorial_recursion(const int num) {
	if (1 >= num) {
		return 1;
	} else {
		return num * factorial_recursion(num - 1);
	}
}

int main() {
	int num;
	printf("Input integer : ");
	scanf("%d", &num);
	
	printf("factorial result ===================\n");
	printf("- recursion : %d\n", factorial_recursion(num));
	printf("- iteration : %d\n", factorial_iteration(num));
}
