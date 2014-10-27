#include <stdio.h>


//GCC supports switch range expansion.
int main(int argc, char *argv[])
{
    int x = 1;
    switch (x)
    {
        case 0 ... 9: printf("0..9\n"); break;
        case 10 ... 99: printf("10..99\n"); break;
        default: printf("default\n"); break;
    }


    char c = 'C';
    switch (c)
    {
        case 'a' ... 'z': printf("a..z\n"); break;
        case 'A' ... 'Z': printf("A..Z\n"); break;
        case '0' ... '9': printf("0..9\n"); break;
        default: printf("default\n"); break;
    }
    

    return 0;
}
/*
0..9
A..Z
*/