#include <stdio.h>
#include <stdlib.h>


//Function can only be defined once, but can be declared and called repeatedly.
//GCC supports nested function expansion.
typedef void(*func_t)();


func_t test()
{
    void func1()
    {
        printf("%s\n", __func__);
    };


    return func1;
}


/*
The inner function can read and write the parameters and variables of the outer function, 
but variable of outer fuction must be defined before the inline function.
*/
#define pp() ({ \
    printf("%s: x = %d(%p), y = %d(%p), s = %s(%p);\n", __func__, x, &x, y, &y, s, s);  \
})


void test2(int x, char *s)
{
    int y = 88;
    pp();

    void func2()
    {
        y++;
        x++;
        pp();
    }

    func2();

    x++;
    func2();
    pp();
}


int main(int argc, char *argv[])
{
    test()();
    test2(1234, "abc");
    return EXIT_SUCCESS;
}
/*
func1
test2: x = 1234(0x7fff26b91698), y = 88(0x7fff26b9169c), s = abc(0x4007b1);
func2: x = 1235(0x7fff26b91698), y = 89(0x7fff26b9169c), s = abc(0x4007b1);
func2: x = 1237(0x7fff26b91698), y = 90(0x7fff26b9169c), s = abc(0x4007b1);
test2: x = 1237(0x7fff26b91698), y = 90(0x7fff26b9169c), s = abc(0x4007b1);
*/