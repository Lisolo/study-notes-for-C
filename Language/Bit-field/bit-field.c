#include <stdio.h>
#include <stdlib.h>

struct
{
	unsigned int year : 22;
	unsigned int month : 4;
	unsigned int day : 5;
} d = { 2014, 7, 1 };


int main(int argc, char *argv[])
{
	//printf("size: %d\n", sizeof(d));
	printf("year = %u, month = %u, day = %u\n", d.year, d.month, d.day);

    
    struct
    {
    	bool a: 1;
    	bool b: 1;
    	bool c: 1;
    } flags = { .b = true };


    printf("%s\n", flags.b ? "b.T" : "b.F");
    printf("%s\n", flags.c ? "c.T" : "c.F");


	return EXIT_SUCCESS;
}
/*
size: 4
year = 2010, month = 4, day = 30
*/