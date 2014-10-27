#include <stdio.h>


/*
Default implicit conversion level:
long double > doulbe > float > long long > long > int > char > _Bool

The level of float type is higher than any integer type.
*/

int main(void)
{
    char a = 'a';
    char c = 'c';


    printf("%d\n", sizeof(c - a));
    //4
    printf("%d\n", sizeof(1.5F - 1));
    //4
    


    long a2 = -1L;
    unsigned int b2 = 100;
    printf("%ld\n", a2 > b2 ? a2 : b2);
    //100


    printf("%lu\n", (unsigned long)a2);
    //18446744073709551615
    

    return 0;
}
/*
Other implicit conversion also includes:
The right operand is always converted to the left operand type when assignment or initialization.

When function is called, the arguments are always converted to the type of the parameter.

Converted return results of expression to the return type of function.

Any type of 0 and the pointer of NULL are considered as a false of _Bool type, otherwise are true.
*/ 

/*
When converted wide type to narrow type, the compiler will attempt to discard the high or rounding.
*/