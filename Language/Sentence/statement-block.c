#include <stdio.h>


int main(int argc, char *argv[])
{
    /*
    Statement block represents a scope,
    the automatic variables declared within a block will be released immediately when it out of range.
    */

    int i = ({ char a = 'a'; a++; a++; });
    printf("%d\n", i);
    //98

    

    /*
    The last expression is the return value of the statement block.
    The variables which used in macros usually add underline prefix to avoid conflict with same name variable of the upper statement block.
    */

    #define test() ({  \
        char _a = 'a'; \
        _a++;          \
        _a; })


    int j = test();
    printf("%d\n", j);
    //98


    return 0;
}