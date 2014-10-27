#include <stdio.h>
#include <stdlib.h>


void inc(int* x)
{
	*x += 1;
}


void test()
{
	printf("test");
}


typedef void(func_t)();
typedef void(*func_ptr_t)();


int main(void)
{
	void (*f)(int*) = inc;


	int i = 100;
	f(&i);
	printf("%d\n", i);

	
	func_t* f = test;
	func_ptr_t p = test;


	f();
	p();


	return EXIT_SUCCESS;
}
//101