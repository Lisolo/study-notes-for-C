#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void test(int x)
{
	assert(x > 0);
	printf("%d\n", x);
}


int main(int argc, char* argv[])
{
	test(-1);
	return EXIT_SUCCESS;
}
/*
test: main.c:16: test: Assertion `x > 0' failed.
Aborted
*/