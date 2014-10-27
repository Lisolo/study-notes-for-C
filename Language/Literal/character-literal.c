#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    /*
    The default type of character is int,
    but you can use front L to indicate wchar_t.
    */


    char c = 0x61;
    char c2 = 'a';
    char c3 = '\x61';
    printf("%c, %c, %c\n", c, c2, c3);
    //a, a, a



    
    setlocale(LC_CTYPE, "en_US.UTF-8");            //Configure the geographical information
    

    wchar_t wc = L'中';                             //Front L indicate wchar_t type
    char buf[100] = {};


    int len = wctomb(buf, wc);                     //Convert wide character to multibyte character
    printf("%d\n", len);
    //3


    for (int i = 0; i < len; i++)
    {
        printf("0x%02X", (unsigned char)buf[i]);   //Output is sixteen hexadecimal form
    }
    //0xE4 0xB8 0xAD


    return 0;
}
