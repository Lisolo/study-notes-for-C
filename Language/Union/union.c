#include <stdio.h>
#include <string.h>

typedef struct
{
    int type;
    union
    {
        int ivalue;
        long long lvalue;
    } value;
} data_t;


union value_t
{
    int ivalue;
    long long lvalue;
};


int main(int argc, char *argv[])
{
    data_t d = { 0x8899, .value.lvalue = 0x1234LL };
    data_t d2;
    memcpy(&d2, &d, sizeof(d));


    printf("type:%d, value:%lld\n", d2.type, d2.value.lvalue);


    union value_t v1 = { 10 };
    printf("%d\n", v1.ivalue);

    union value_t v2 = { .lvalue = 20LL };
    printf("%lld\n", v2.lvalue);

    
    union { int x; struct {char a, b, c, d;} bytes; } n = { 0x12345678 };
    printf("%#x => %x, %x, %x, %x\n", n.x, n.bytes.a, n.bytes.b, n.bytes.c, n.bytes.d);

    
    return 0;
}
/*
type:34969, value:4660
10
20
0x12345678 => 78, 56, 34, 12
*/
