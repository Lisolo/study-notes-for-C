#include <stdio.h>


void array1()
{
	int x[] = {1,2,3,4,5,6}
}
int main(int argc, char *argv[])
{
	int x[] = {1,2,3,4,5,6};


	int *p1 = x;
	int (*p2)[] = &x;
	return 0;
}