#include <stdio.h>
#include <stdlib.h>


#define test(x, y) ({  \
    int _z = x + y;    \
    _z;  })


int main(int argc, char *argv[])
{
    printf("%d\n", test(1, 2));
    return EXIT_SUCCESS;
}
//3