#include <stdio.h>


/*
In addition to using the subscript initialization, 
but also can use initialize device directly.
*/
int main(int argc, char *argv[])
{
    int x[] = { 1, 2, 3 };
    int y[5] = { 1, 2 };
    int a[3] = {};


    int z[][2] = 
    {
        { 1, 1 },
        { 2, 1 },
        { 3, 1 },
    };
    /*
    Initialization rules:
        If the array has a static life cycle, then the initialization must be a constant expression.
        If you provide initializers, 
        you can not provide the array length which is definited by the last element.
        If length and initializer are both provided, then the elements which are not provided the initial value will initialized to 0 or NULL.


    
    /*
    we can initialize the specific element in initializer.
    */
    int x2[] = { 1, 2, [6] = 10, 11 };
    int len = sizeof(x2) / sizeof(int);


    for (int i = 0; i < len; i++)
    {
        printf("x2[%d] = %d\n", i, x2[i]);
    }


    return 0;
}
/*
x2[0] = 1
x2[1] = 2
x2[2] = 0
x2[3] = 0
x2[4] = 0
x2[5] = 0
x2[6] = 10
x2[7] = 11
*/
