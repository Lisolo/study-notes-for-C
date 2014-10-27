#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


/*
void* can represent address of any object, but doesn't contain type of the object.
*/
void test(void* p, size_t len)
{
    unsigned char* cp = p;


    for (int i = 0; i < len; i++)
    {
	    printf("%02x\n", *(cp + i));
    }


    printf("\n");
}


int main(int argc, char *argv[])
{
    int x = 0x00112233;
    test(&x, sizeof(x));


    return EXIT_SUCCESS;
}
/*
33
22
11
00
*/