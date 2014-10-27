#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int x;
    short y[3];
    long long z;
} data_t;


int main(int argc, char *argv[])
{
    printf("x %d\n", offsetof(data_t, x));
    printf("y %d\n", offsetof(data_t, y));
    printf("y[1] %d\n", offsetof(data_t, y[1]));
    printf("z %d\n", offsetof(data_t, z));


    return EXIT_SUCCESS;
}
/*
x 0
y 4
y[1] 6
z 16
*/