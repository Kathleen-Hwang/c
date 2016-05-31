#include <stdio.h>

/*
output)
address of num1 : 22fe44
size of arr : 20
size of arr[0] : 4
address of arr : 22fe30
address of arr[0] : 22fe30
address of arr[1] : 22fe34
address of arr[2] : 22fe38
address of arr[3] : 22fe3c
address of arr[4] : 22fe40
address of num2 : 22fe2c
*/

int main() {
	int num1;
	printf("address of num1 : %x\n", &num1);
	
	const int MAX = 5;
	int arr[] = {1, 2, 3, 4, 5};
	
	printf("size of arr : %d\n", sizeof(arr));
	printf("size of arr[0] : %d\n", sizeof(arr[0]));
	
	printf("address of arr : %x\n", &arr);
	
	int i;
	for (i = 0; i < MAX; i++) {
		printf("address of arr[%d] : %x\n", i, &arr[i]);
	}
	
	int num2;
	printf("address of num2 : %x\n", &num2);
	
	return 0;
}
