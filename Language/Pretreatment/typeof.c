#include <stdio.h>
#include <stdlib.h>


#define test(x) ({      \
	typeof(x) _x = (x); \
	_x += 1;            \
	_x;                 \
})


int main(int argc, char *argv[])
{
	float f = 0.5F;
    float f2 = test(f);
    printf("%f\n", f2);

	return EXIT_SUCCESS;
}