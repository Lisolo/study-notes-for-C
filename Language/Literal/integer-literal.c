#include <stdio.h>


int main(void) 
{
    int x = 010;                         //Octal numbers(begin with 0)
    int y = 0x0A;                        //Hexadecimal numbers(begin with 0x/0X)
    printf("x = %d, y = %d\n", x, y);
    //x = 8, y = 10


    /*
    Through suffix to distinguish the different type.

    0x200    -> int
    200U     -> unsigned int


    0L       -> long
    0xf0f0UL -> unsigned long


    0777LL   -> long long
    0xFFULL  -> unsigned long long
    */


    return 0;
}
