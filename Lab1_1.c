#include <stdio.h>
#include <stddef.h>

main ()
{
   size_t a = sizeof(char);
   size_t b = sizeof(short);
   size_t c = sizeof(int);
   size_t d = sizeof(long);

   printf("%d", a);
   printf("\n");
   printf("%d", b);
   printf("\n");
   printf("%d", c);
   printf("\n");
   printf("%d", d);
   printf("\n");
}
