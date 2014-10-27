#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    struct { int x; short y; } a = { 1, 2 }, a2 = {};
    printf("a.x = %d, a.y = %d\n", a.x, a.y);


    struct data { int x; short y; };


    struct data b = { .y = 3};
    printf("b.x = %d, b.y = %d\n", b.x, b.y);


    struct data* c = &(struct data){ 1, 2 };
    printf("c.x = %d, c.y = %d\n", c->x, c->y);


    void* p = &(struct data2 { int x; short y; }){ 11, 22 };


    struct data* d = (struct data*)p;
    printf("d.x = %d, d.y = %d\n", d->x, d->y);


    return EXIT_SUCCESS;
}
/*
a.x = 1, a.y = 2
b.x = 0, b.y = 3
c.x = 1, c.y = 2
d.x = 11, d.y = 22
*/