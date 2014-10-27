#include <stdlib.h>


char s[] = "abc";
char* sp = s;


int x = 5;
int* xp = &x;


void test() {}
typedef void(*test_t)();


int main(int argc, char *argv[])
{
    static int* sx = &x;
    static test_t t = test;


    return EXIT_SUCCESS;
}
