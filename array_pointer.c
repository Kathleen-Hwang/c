#include <stdio.h>

/*
output)
000000000022FE40 000000000022FE44
000000000022FE48 000000000022FE4C

000000000022FE40
000000000022FE40
000000000022FE40

000000000022FE44
000000000022FE48
000000000022FE50
*/

int main() {
	int arr[2][2] = {1,2,3,4};
	
	printf("%p %p\n", &arr[0][0], &arr[0][1]);
	printf("%p %p\n", &arr[1][0], &arr[1][1]);
	
	printf("\n");
	
	printf("%p\n", arr[0]);
	printf("%p\n", arr);
	printf("%p\n", &arr);
		
	printf("\n");
	
	printf("%p\n", arr[0] + 1);	// int *
	printf("%p\n", arr + 1);	// int (*)[2]
	printf("%p\n", &arr + 1);	// int (*)[2][2]
	
	return 0;
}
