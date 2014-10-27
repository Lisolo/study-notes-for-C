#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


//Assign the number of the arguments.
void test(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        int value = va_arg(args, int);
        printf("%d\n", value);
    }


    va_end(args);
}


//Take NULL as the end tag.
void test2(const char* s, ...)
{
    printf("%s\n", s);


    va_list args;
    va_start(args, s);


    char* value;
    do
    {
        value = va_arg(args, char*);
        if (value) printf("%s\n", value);
    }
    while (value != NULL);


    va_end(args);
}


//Transfer va_list to other optional argument function directly.
void test3(const char* format, ...)
{
    va_list args;
    va_start(args, format);


    vprintf(format, args);


    va_end(args);
}


int main(int argc, char *argv[])
{
    test(3, 11, 22, 33);
    test2("hello", "aa", "cc", "dd", NULL);
    test3("%s, %d\n", "hello, world!", 1234);


    return EXIT_SUCCESS;
}
/*
11
22
33
hello
aa
cc
dd
hello, world!, 1234
*/