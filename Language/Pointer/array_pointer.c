#include <stdio.h>


int main(int argc, char *argv[])
{
    int x[] = { 1, 2, 3 };
    int(*p)[] = &x;

 
    for (int i = 0; i < 3; i++)
    {
        printf("x[%d] = %d\n", i, (*p)[i]);
         printf("x[%d] = %d\n", i, (*p)[i]);
    }


    return 0;
}
/*
x[0] = 1
x[0] = 1
x[1] = 2
x[1] = 2
x[2] = 3
x[2] = 3
*/