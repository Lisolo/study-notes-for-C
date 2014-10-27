#include <stdio.h>
#include <stdlib.h>


void test(const char** x, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("test: %d = %s\n", i, *(x + i));
	}
}


int main(int argc, char *argv[])
{
	int x[] = { 1, 2, 3, 4 };
	int* ps[] = { x, x + 1, x + 2, x + 3 };


	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", *(ps[i]));
	}


    char* a = "aaa";
    char* b = "bbb";
    char* ss[] = { a, b };


    for (int i = 0; i < 2; i++)
    {
    	printf("%d = %s\n", i, ss[i]);	
   	}


   	test(ss, 2);


   	return EXIT_SUCCESS;
}