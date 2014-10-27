#include <stdio.h>


int main(void)
{
    //The pointer can be explicitly converted to any other type of pointer.
    int x = 123, *p = &x;
    char* c = (char*)x;
    

    //Any pointer can be implicitly converted to a void pointer, and vice versa.


    //Any pointer can be implicitly converted to a clearer pointer type.
    int x2 = 123, *p2 = &x2;
    const int* p3 = p2;
    

    //The pointer can be explicitly converted to an integer, and vice versa.
    int x4 = 123, *p4 = &x4;
    int px = (int)p4;

    
    printf("%p, %x, %d\n", p4, px, *(int*)px);
    //0xbfc1389c, bfc1389c, 123


    return 0;
}