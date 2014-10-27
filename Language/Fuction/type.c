#include <stdio.h>
#include <stdlib.h>


/*
Pay attention to the difference between the definition of function type and function pointer type.
Fuction name is a pointer point to current the function.
*/
typedef void(func_t)();           //function type
typedef void(*func_ptr_t)();      //function pointer type


void test()
{
    printf("%s\n", __func__);
}


int main(int argc, char *argv[])
{
    func_t* func = test;          //Declare a pointer
    func_ptr_t func2 = test;      //pointer type

    void (*func3)();              //Declare a pointer variable of function that contains the fuction's prototype
    func3 = test;

    func();
    func2();
    func3();


    return EXIT_SUCCESS;
}
/*
test
test
test
*/