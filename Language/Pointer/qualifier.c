#include <stdio.h>


int main(int argc, char const *argv[])
{
    int x[] = { 1, 2, 3 };


    int* const p1 = x;
    *(p1 + 1) = 22;
    printf("%d\n", x[1]);


    int const *p2 = x;
    p2++;
    printf("%d\n", *p2);


    return 0;
}
/*
22
22
*/