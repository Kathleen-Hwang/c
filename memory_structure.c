#include <stdio.h>

/*
output)
code segment ====================
p_func          4017a0
data segment ====================
g_init_data     404010
s_init_data     404014
p_str           4051aa
bss segment ====================
g_uninit_data   408a20
s_uninit_data   408040
heap segment ====================
p_num1          5b7ec0
p_num2          5b7ee0
p_num3          5b7f00
stack segment ====================
num1            22fe24
num2            22fe20
num3            22fe1c
*/

int g_init_data = 1;
static int s_init_data = 2;
int g_uninit_data;
static int s_uninit_data;

void func() {
	;	
}

int main() {
	void (*p_func)() = func;
	
	printf("code segment ====================\n");
	printf("p_func\t\t%x\n", p_func);
	printf("data segment ====================\n");
	printf("g_init_data\t%x\n", &g_init_data);
	printf("s_init_data\t%x\n", &s_init_data);
	char *p_str = "test";
	printf("p_str\t\t%x\n", p_str);
	printf("bss segment ====================\n");
	printf("g_uninit_data\t%x\n", &g_uninit_data);
	printf("s_uninit_data\t%x\n", &s_uninit_data);
	printf("heap segment ====================\n");
	int *p_num1 = (int *) malloc(sizeof(int));
	int *p_num2 = (int *) malloc(sizeof(int));
	int *p_num3 = (int *) malloc(sizeof(int));
	printf("p_num1\t\t%x\n", p_num1);
	printf("p_num2\t\t%x\n", p_num2);
	printf("p_num3\t\t%x\n", p_num3);
	printf("stack segment ====================\n");
	int num1, num2;
	int num3;
	printf("num1\t\t%x\n", &num1);
	printf("num2\t\t%x\n", &num2);
	printf("num3\t\t%x\n", &num3);	
}
