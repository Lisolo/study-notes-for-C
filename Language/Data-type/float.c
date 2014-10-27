#include <stdio.h>
#include <complex.h>


/*
float:       32-bit and 4-byte float, accuracy is 6
double:      64-bit and 8-byte float, accuracy is 15
long double: 80-bit and 10-byte float, accuracy is 19
*/


int main(void)
{   
    //The default type of float is double
    printf("float %f size=%d\n", 1.F, sizeof(1.F));               //Add the suffix F to indicate float
    //float 1.000000 size=4


    printf("double %f size=%d\n", .123, sizeof(.123));
    //double 0.123000 size=8


    printf("long double %Lf size=%d\n", 1.234L, sizeof(1.234L));  //L indicate long double
    //long double 1.234000 size=16
    


    /*
    Complex number: added _Complex directly in float, double, long double.
    Used the same float type to indicate real part and imaginary part respectively.
    */
    printf("float complex size=%d\n", sizeof((float complex)1.0));
    //float complex size=8


    printf("double complex size=%d\n", sizeof((double complex)1.0));
    //double complex size=16


    printf("long double complex size=%d\n", sizeof((long double complex)1.0));
    //long double complex size=32


    return 0;
}
