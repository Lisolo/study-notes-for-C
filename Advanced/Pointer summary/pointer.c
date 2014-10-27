#include <stdio.h>


int main(int argc, char *argv[])
{
	int x = 10;
	int* p = &x;
	int** p2 = &p;


	printf("p = %p, *p = %d\n", p, *p);
	printf("p2 = %p, *p2 = %x\n", p2, *p2);
	printf("x = %d, %d\n", *p, **p2);


	return 0;
}
/*
p = 0x7ffffd7a732c, *p = 10
p2 = 0x7ffffd7a7330, *p2 = fd7a732c
x = 10, 10
*/