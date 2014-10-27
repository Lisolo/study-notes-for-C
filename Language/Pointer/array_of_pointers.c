#include <stdio.h>


int main(int argc, char const *argv[])
{
    int* x[3] = {};


    x[0] = (int[]){ 1 };
    x[1] = (int[]){ 2, 22 };
    x[2] = (int[]){ 3, 33, 33 };


    int* x1 = *(x + 1);
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", x1[i]);
        printf("%d\n", *(*(x + 1) + i));
    }


    return 0;
}
/*
2
2
22
22
*/