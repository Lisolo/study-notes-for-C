#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
Pay attention to the following example, 
circulation will call the get_len function many times.
*/

size_t get_len(const char* s)
{
    printf("%s\n", __func__);


    return strlen(s);
}


int main(int argc, char* argv[])
{
    char *s = "abcde";
    for (int i = 0; i < get_len(s); i++)
    {
    printf("%c\n", s[i]);
    }


    printf("\n");


    return EXIT_SUCCESS;
}
/*
get_len
a
get_len
b
get_len
c
get_len
d
get_len
e
get_len
*/
