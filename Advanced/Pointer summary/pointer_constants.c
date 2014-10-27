#include <stdio.h>


int main(int argc, char *argv[])
{
	int x[] = { 1, 2, 3, 4 };
    int* const p = x;            //const modified pointer variable p, pointer p is a constant variable. 


    for (int i = 0; i < 4; i++)
    {
	    int v = *(p + i);
	    *(p + i) = ++v;


	    printf("%d\n", v);


	    //p++;                  // Compile Error!
    }


	return 0;
}
/*
2
3
4
5
*/


/*
The pointer p always points to the first element of the array x,
Because pointers p are constant, so it cann't execute the operation as p++ or ++p,
otherwise it will throw a compile error.