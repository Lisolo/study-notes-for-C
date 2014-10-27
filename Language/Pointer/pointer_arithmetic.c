#include <stdio.h>


int main(int argc, char *argv[])
{
    int x = 1;


    int *a, *b;
    a = &x;
    b = &x;


    printf("%d\n", a == b);



    int x2[] = { 1, 2, 3 };
    int* p = x2;


    printf("%d, %d\n", x2[1], *(p + 1));


    
    int x3[] = { 1, 2, 3 };


    int* p3 = x3;
    p3++; p3++;


    int index = p3 - x3;


    printf("x[%d] = %d\n", index, x3[index]);



    int x4[] = { 1, 2, 3 };


    int* p4 = x4;
    int* p5 = x4;
    p4++; p5++; p5++;


    printf("p4 < p5? %s\n", p4 < p5 ? "Y" : "N");



    int x5[] = { 1, 2, 3 };


    int* p6 = &x5[1];
    *p6 += 10;


    printf("%d\n", x5[1]);

    
    return 0;
}
/*
1
2, 2
x[2] = 3
p4 < p5? Y
12
*/