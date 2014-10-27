#include <wchar.h>


//sizeof() returns the size of the memory space occupied by the operand in bytes (byte).

int main(void)
{
    size_t size;
    int x = 1;


    size = sizeof(int);  //sizeof() returns size_t type, the operand can be type and variable.


    size = sizeof(x);
    size = sizeof x;


    size = sizeof(&x);
    size = sizeof &x;


    return 0;
}

//Don't replace size_t with int, because length of size_t is different in 32 bit or 64 bit platform.