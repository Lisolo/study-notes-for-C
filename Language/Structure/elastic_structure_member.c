#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct string
{
    int length;
    char chars[];
} string;


int main(int argc, char *argv[])
{
    int len = sizeof(string) + 10;
    char buf[len];


    string *s = (string*)buf;
    s->length = 9;
    strcpy(s->chars, "123456789");


    printf("%d\n%s\n", s->length, s->chars);

    

    int len2 = sizeof(string) + 10;
    char buf2[len2];
    

    string *s2 = (string*)buf2;
    s2->length = 10;
    strcpy(s2->chars, "123456789");


    string s3 = *s2;
    printf("%d\n%s\n", s3.length, s3.chars);


    return EXIT_SUCCESS;
}
/*
9
123456789
10

*/