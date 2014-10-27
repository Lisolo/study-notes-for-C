#include <stdio.h>


#define V1


#if defined(V1) || defined(V2)
    printf("Old\n");
#else
    printf("New\n");
#endif


#undef V1