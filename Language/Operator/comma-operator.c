#include <stdio.h>


int main(int argc, char *argv[])
{
    /*
    The comma is a binary operator, 
    the operand is processed sequentially from left to right, 
    and returns the value and type of the right operand.
    */
    
    int i = 1;
    long long x = (i++, (long long)i);
    printf("%lld\n", x);
    //2


    return 0;
}
