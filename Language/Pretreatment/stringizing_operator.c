#include <stdio.h>
#include <stdlib.h>


#define test(name) ({  \
    printf("%s\n", #name); })


int main(int argc, char *argv[])
{
    test(main);
    test("\main");
    return EXIT_SUCCESS;
}
/*
main
"\main"
*/