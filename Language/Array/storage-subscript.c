#include <stdio.h>


/*
x[i] is equivalent to *(x + i), 
the array's name is a pointer that point to the first element defaultly.
*/
int main(int argc, char *argv[])
{
    int x[] = { 1, 2, 3, 4 };

    x[1] = 10;
    printf("%d\n", *(x + 1));


    *(x + 2) = 20;
    printf("%d\n", x[2]);

    
    return 0;
}
/*
10
20
*/


/*
C won't do the range check for array subscript, 
so you need to pay attention to check whether overspill when coding.

The array's name is a constant pointer that point to the first element defaultly, 
and &x[i] return int* type pointer which point to the target elements.
*/