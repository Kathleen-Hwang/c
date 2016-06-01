#include <stdio.h>

#define ROW 2
#define COLUMN 3

// enum PrintType {kValue, kAddress}
typedef enum PrintType {kValue, kAddress} PrintType;

void print(PrintType type) {
	int arr[ROW][COLUMN] = {{1, 2, 3}, {4, 5, 6}};
	
	int i, j;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COLUMN; j++) {
			if (type == kValue) {
				printf("%d\t", arr[i][j]);
			} else if (type == kAddress) {
				printf("%p\t", &arr[i][j]);
			}
		}
		printf("\n");
	}	
}

int main(int argc, char *argv[]) {
	print(kValue);
	print(kAddress);
	
	return 0;
}
