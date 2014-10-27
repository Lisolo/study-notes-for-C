#include <stdio.h>


int main(int argc, char *argv[])
{
    /*
    The first dimension of a multidimensional array subscript can not be specified.
    */
    int x[][2] = 
    {
        { 1, 11 },
        { 2, 22 },
        { 3, 33 }
    };


    int col = 2, row = sizeof(x) / sizeof(int) / col;


    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("x[%d][%d] = %d\n", r, c, x[r][c]);
        }
    }
    
    
    
    /*
    The two-dimensional array is know as matrix, equivalent to a row * column table.
    For example, x[3][2] is equivalent to three rows of two-column table. 
    The elements of multi-dimensional array is arranged continuously, 
    which is the important features difference to an array of pointers.
    */
    int y[][2] = 
    {
        { 1, 11 },
        { 2, 22 },
        { 3, 33 }
    };


    int len = sizeof(y) / sizeof(int);
    int* p = (int*)x;


    for (int i = 0; i < len; i++)
    {
        printf("y[%d] = %d\n", i, p[i]);
    }


    
    /*
    We can initialize the specific element.
    */
    int z[][2] = 
    {
        { 1, 11 },
        { 2, 22 },
        { 3, 33 },
        [4][1] = 100,
        { 6, 66 },
        [7] = { 9, 99 }
    };


    int col2 = 2, row2 = sizeof(z) / sizeof(int) / col2;


    for (int r = 0; r < row2; r++)
    {
        for (int c = 0; c < col2; c++)
        {
            printf("z[%d][%d] = %d\n", r, c, z[r][c]);
        }
    }


    return 0;
}
/*
x[0][0] = 1
x[0][1] = 11
x[1][0] = 2
x[1][1] = 22
x[2][0] = 3
x[2][1] = 33
y[0] = 1
y[1] = 11
y[2] = 2
y[3] = 22
y[4] = 3
y[5] = 33
z[0][0] = 1
z[0][1] = 11
z[1][0] = 2
z[1][1] = 22
z[2][0] = 3
z[2][1] = 33
z[3][0] = 0
z[3][1] = 0
z[4][0] = 0
z[4][1] = 100
z[5][0] = 6
z[5][1] = 66
z[6][0] = 0
z[6][1] = 0
z[7][0] = 9
z[7][1] = 99
*/