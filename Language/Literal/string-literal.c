#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>


int main(void)
{
    /*The string in C language is a char array which end of NULL (or \0).

    The empty string occupying 1 byte in memory, contains a NULL character, 
    that is to say a character string of length 1 requires a minimum memory of 2 bytes.
    */

    char s[] = "Hello, World!";
    char* s2 = "Hello , C!";



    setlocale(LC_CTYPE, "en_US.UTF-8");


    wchar_t* ws = L"中国人";
    printf("%ls\n", ws);
    //中国人


    char buf[255] = {};
    size_t len = wcstombs(buf, ws, 255);


    for (int i = 0; i < len; i++)
    {
        printf("0x%02X", (unsigned char)buf[i]);
    }
    //0xE4 0xB8 0xAD 0xE5 0x9B 0xBD 0xE4 0xBA



    //wchar_t string ends with a 4 byte NULL

    wchar_t ws2[] = L"中国人";
    printf("len %d, size %d\n", wcslen(ws2), sizeof(ws2));
    //len 3, size 16


    unsigned char* b = (unsigned char*)ws2;
    int len2 = sizeof(ws2);


    for (int i = 0; i < len2; i++)
    {
        printf("%02X", b[i]);
    }
    //2D 4E 00 00 FD 56 00 00 BA 4E 00 00 00 00 00 00
    

    
    /*
    The compiler will connect the adjacent string automatically, 
    so we can better handle string in the macro or code.

    #define WORLD "world!"
    char* s = "Hello" " " WORLD "\n";
    */



    char* s3 = "Hello"
        "World!";


    //The space on the left of "\" will be regard as a part of string
    char* s4 = "Hello \ 
    World!";


    return 0;
}
