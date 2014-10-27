#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    /*
    string is the char array that end of '\0'.
    */
    char s[10] = "abc";
    char x[] = "abc";


    printf("s, size=%d, len=%d\n", sizeof(s), strlen(s));
    printf("x, size=%d, len=%d\n", sizeof(x), strlen(x));
    
    
    return 0;
}
/*
s, size=10, len=3
x, size=4, len=3
*/