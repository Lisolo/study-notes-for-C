#include <stdio.h>
#include <stdlib.h>


/*
Array is always implicitly converted to a pointer that point to the first element of the array when the array is as a function parameter, 
that is to say we can no longer use sizeof() to get the actual length of the array.
*/
void test(int x[])
{
    printf("%d\n", sizeof(x));
}


void test2(int* x)
{
    printf("%d\n", sizeof(x));
}
/*
The actual effect of test() and test2() in sizeof() is sizeof(int*).
*/


/*
The array's name point to the first element defaultly, the same as test2().
*/
void test3(int len, int x[])
{
    int i;
    for (int i = 0; i < len; i++)
    {
        printf("x[%d] = %d; ", i, x[i]);
    }


    printf("\n");
}


/*
Deliver first element of the array directly.
*/
void test4(int len, int* x)
{
    for (int i = 0; i < len; i++)
    {
        printf("x[%d] = %d; ", i, *(x + i));
    }


    printf("\n");
}


/*
Array pointer: array's name point to the first element of the array defaultly, 
&array is a pointer to get the entire array.
*/
void test5(int len, int(*x)[len])
{
    for (int i = 0; i < len; i++)
    {
        printf("x[%d] = %d; ", i, (*x)[i]);
    }


    printf("\n");
}


/*
Multidimensional array: array's name point to the first element of the array defaultly, 
that is int(*)[].
*/
void test6(int r, int c, int y[][c])
{
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            printf("y[%d][%d] = %d; ", a, b, y[a][b]);
        }
    }


    printf("\n");
}


/*
Multidimensional arrays: deliver the pointer of first element.
*/
void test7(int r, int c, int (*y)[c])
{
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            printf("y[%d][%d] = %d; ", a, b, (*y)[b]);
        }


        y++;
    }


    printf("\n");
}


/*
Multidimensional arrays
*/
void test8(int r, int c, int (*y)[][c])
{
    for (int a = 0; a < r; a++)
    {
        for (int b = 0; b < c; b++)
        {
            printf("y[%d][%d] = %d; ", a, b, (*y)[a][b]);
        }
    }


    printf("\n");
}


/*
The array whose elements is pointer, 
equivalent to test10(). 
*/
void test9(int count, char** s)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s; ", *(s++));
    }


    printf("\n");
}


void test10(int count, char* s[count])
{
    for (int i = 0; i < count; i++)
    {
        printf("%s; ", s[i]);
    }


    printf("\n");
}


/*
The pointer array that end with NULL.
*/
void test11(int** x)
{
    int* p;
    while ((p = *x) != NULL)
    {
        printf("%d; ", *p);
        x++;
    }


    printf("\n");
}


int main(int argc, char *argv[])
{
    int x[] = { 1, 2, 3 };


    int len = sizeof(x) / sizeof(int);
    printf("%d\n", sizeof(x));


    test(x);
    test2(x);
    test3(len, x);
    test4(len, x);
    test5(len, &x);


    int y[][2] =
    {
        {10, 11},
        {20, 21},
        {30, 31}
    };


    int a = sizeof(y) / (sizeof(int) * 2);
    int b = 2;
    test6(a, b, y);
    test7(a, b, y);
    test8(a, b, &y);


    char* s[] = {"aaa", "bbb", "ccc"};
    test9(sizeof(s) / sizeof(char*), s);
    test10(sizeof(s) / sizeof(char*), s);


    int* xx[] = { &(int){111}, &(int){222}, &(int){333}, NULL };
    test11(xx);


    return EXIT_SUCCESS;
}
/*
12
8
8
x[0] = 1; x[1] = 2; x[2] = 3; 
x[0] = 1; x[1] = 2; x[2] = 3; 
x[0] = 1; x[1] = 2; x[2] = 3; 
y[0][0] = 10; y[0][1] = 11; y[1][0] = 20; y[1][1] = 21; y[2][0] = 30; y[2][1] = 31;
y[0][0] = 10; y[0][1] = 11; y[1][0] = 20; y[1][1] = 21; y[2][0] = 30; y[2][1] = 31; 
y[0][0] = 10; y[0][1] = 11; y[1][0] = 20; y[1][1] = 21; y[2][0] = 30; y[2][1] = 31; 
aaa; bbb; ccc; 
aaa; bbb; ccc; 
111; 222; 333;
*/