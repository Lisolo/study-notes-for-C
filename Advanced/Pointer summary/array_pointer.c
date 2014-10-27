#include <stdio.h>


int main(int argc, char *argv[])
{
	int x[] = { 1, 2, 3, 4 };
	int* p = x;


	for (int i = 0; i < 4; i++)
	{
		printf("%d, %d, %d\n", x[i], *(x + i), *p++);
	}



	int x2[] = { 1, 2, 3, 4 };


	int* p2 = x2;
	int (*p3)[] = &x2;


	for (int i = 0; i < 4; i++)
	{
		printf("%d, %d\n", *p++, (*p3)[i]);
	}


	return 0;
}
/*
1, 1, 1
2, 2, 2
3, 3, 3
4, 4, 4
1, 1
2, 2
3, 3
4, 4
*/