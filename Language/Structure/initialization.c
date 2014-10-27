#include <stdlib.h>

typedef struct
{
    int x;
    short y[3];
    long long z;
} data_t;


int main(int argc, char*argv[])
{
    data_t d = {};
    data_t d1 = { 1, { 11, 22, 33 }, 2LL };
    data_t d2 = { .z = 3LL, .y[2] = 2 };


    return EXIT_SUCCESS;
}
/*
d = {x = 0, y = {0, 0, 0}, z = 0}
d1 = {x = 1, y = {11, 22, 33}, z = 2}
d2 = {x = 0, y = {0, 0, 2}, z = 3}
*/