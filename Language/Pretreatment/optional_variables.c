#include <stdlib.h>


#define println(format, ...) ({  \
	printf("format \n", __VA_ARGS__); })


int main(int argc, char const *argv[])
{
	println("%s, %d", "string", 1234);
	return EXIT_SUCCESS;
}
//format