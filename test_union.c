#include <stdio.h>
#include <string.h>	// for strcpy

union Student {
	int num;
	char name[20];
} std1;

typedef union Box {
	int price;
	char label[30];
} BOX;

int main() {
	union Student std2;
	
	printf("std2 size : %d\n", sizeof(std2));
	
	std2.num = 100;
	printf("std2.num : %d\n", std2.num);
	
	strcpy(std2.name, "kathleen");
	printf("std2.name : %s\n", std2.name);
	
	return 0;
}
