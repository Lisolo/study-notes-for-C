#include <stdio.h>


int main(int argc, char *argv[])
{
	int x = 1, y = 2;


	int const* p = &x;    //const modified the contents which pointer *p points to, p is a pointer points to constant. 
	//*p = 100;           //Compile Error!


	p = &y;
	printf("%d\n", *p);


	//*p = 100;           //Compile Error!



	const int x2 = 1;
	int* p2 = &x2;


	printf("%d\n", *p2);


	*p2 = 1234;
	printf("%d\n", *p2);



	const x3 = 1;
	const int* p3 = &x3;


	printf("%d\n", *p3);


	*p3 = 1234;            //Compile Error!



	int x4 = 10;
	const int* const p4 = &x4;


	p4++;
	*p4 = 20;

	
	return 0;
}