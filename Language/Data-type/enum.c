#include <stdio.h>


int main(void)
{
    enum color {black, red = 5, green, yellow};
    

    enum color b = black;
    printf("black = %d\n", b);
    //black = 0


    enum color r = red;
    printf("red = %d\n", r);
    //red = 5


    enum color g = green;
    printf("green = %d\n", g);
    //green = 6


    enum color y = yellow;
    printf("yellow = %d\n", y);
    //yellow = 7



    //Enum members can have the same value
    enum color2 {black2 = 1, red2, green2 = 1, yellow2};


    enum color2 b2 = black2;
    printf("black = %d\n", b2);
    //black = 1


    enum color2 r2 = red2;
    printf("red = %d\n", r2);
    //red = 2


    enum color2 g2 = green2;
    printf("green = %d\n", g2);
    //green = 1


    enum color2 y2 = yellow2;
    printf("yellow = %d\n", y2);
    //yellow = 2

    

    //Often omitted enumerator small labels to substitude for Macros defining constants
    enum {BLACK = 1, RED, GREEN = 1, YELLOW};


    printf("black = %d\n", BLACK);
    //black = 1


    printf("red = %d\n", RED);
    //red = 2


    printf("green = %d\n", GREEN);
    //green = 1


    printf("yellow = %d\n", YELLOW);
    //yellow = 2

    
    return 0;
}
