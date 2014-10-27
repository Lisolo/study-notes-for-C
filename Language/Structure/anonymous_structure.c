#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    struct
    {
        int length;
        char chars[100];
    } s;


    int x;
} data_t;



int main(int argc, char *argv[])
{
    data_t d = { .s.length = 100, .s.chars = "abcd", .x = 1234 };
    printf("%d\n%s\n%d\n", d.s.length, d.s.chars, d.x);


    struct { int a; char b[100]; } d2 = { .a = 100, .b = "abcd" };
    printf("%d\n%s\n", d2.a, d2.b);


    return EXIT_SUCCESS;
}
/*
100
abcd
1234
100
abcd
*/