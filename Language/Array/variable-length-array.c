#include <stdio.h>
#include <stdlib.h>


/*
If the array has an automatic life cycle, 
and no static modifier, 
you can use the unconstant expression to define the array.
*/
void test(int n)
{
    int x[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = i;
    }


    struct data { int x[n]; } d;
    printf("%d\n", sizeof(d));
}


int main(int argc, char *argv[])
{
    int x[] = { 1, 2, 3, 4 };
    printf("%d\n", sizeof(x));


    test(2);
    return EXIT_SUCCESS;
}
/*
16
8
*/
