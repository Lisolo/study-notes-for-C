#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <setjmp.h>


void test(jmp_buf *env)
{
    printf("1....\n");
    longjmp(*env, 10);
}


int main(int argc, char *argv[])
{
    jmp_buf env;
    int ret = setjmp(env);       //Setjmp save the information about the current position (stack frame, registers) to the jmp_buf structure, then returns 0

    if (ret == 0)                //When the code is executed to the longjmp(), it need to provide a status code.Then the code thread will return to setjmp(), and returns a status code provide by longjump().
    {
        test(&env);
    }
    else
    {
        printf("2....(%d)\n", ret);
    }
    

    return EXIT_SUCCESS;
}
/*
1....
2....(10)
*/