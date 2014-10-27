#include <stdio.h>
#include <stdlib.h>


/*
All objects in the C, 
include the pointer itself is transfered by the copy value, 
we can achieve the output parameter through the transfer pointer's pointer.
*/
void test(int** x)
{
    int* p = malloc(sizeof(int));
    *p = 123;
    *x = p;
}


int main(int argc, char *argv[])
{
    /*
    The function in C use cdecl calling convention defaultly, 
    and push parameters into the stack from right to left, 
    and the caller is responsible for pushing parameters into the stack and cleaning.
    */
    int a()
    {
        printf("a\n");
        return 1;
    }

    char* s()
    {
        printf("s\n");
        return "abc";
    }
    

    printf("call: %d, %s\n", a(), s());

    int* p;
    test(&p);
    printf("%d\n", *p);
    free(p);


    return EXIT_SUCCESS;
}
/*
s
a
call: 1, abc
123
*/