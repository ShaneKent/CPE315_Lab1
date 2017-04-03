#include <stdio.h>
#include <stddef.h>

main ()
{
   size_t a = sizeof(char);
   size_t b = sizeof(short);
   size_t c = sizeof(int);
   size_t d = sizeof(long);

   printf("Size of byte = %d\n", a);
   printf("Size of short int = %d\n", b);
   printf("Size of int = %d\n", c);
   printf("Size of long int = %d\n", d);
}
