#include <stdio.h>


/*
char:      8-bit signed integer
short:     16-bit signed integer
int:       32-bit signed integer
long:      32-bit integer(long int) in 32-bit system, 64-bit integer in 64-bit system
long long: 64-bit signed integer(long long int)
bool:      _Bool type, 8-bit integer
*/


int main(void)
{
   /*
   The character variable is taken as an integer default, 
   but compiler can decide to interpret it as char or int.
   */
   char c = 'a';
   printf("%c, size(char)=%d, size('a')=%d;\n", c, sizeof(c), sizeof('a'));
   //a, size(char)=1, size('a')=4;



   printf("int size=%d;\n", sizeof(1));
   //int size=4;


   printf("unsigned int sized=%d;\n", sizeof(1U));
   //unsigned int sized=4;


   printf("long size=%d\n", sizeof(1L));
   //long size=8


   printf("unsigned long size=%d;\n", sizeof(1UL));
   //unsigned long size=8;


   printf("long lonf size=%d;\n", sizeof(1LL));
   //long lonf size=8;


   printf("unsigned long long size=%d;\n", sizeof(1ULL));
   //unsigned long long size=8;

   
   return 0;
}
