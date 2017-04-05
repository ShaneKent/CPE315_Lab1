#include <stdio.h>
#include <math.h>
#include "Lab1_3.h"


void Part3()
{
   printf("\n\nPart 3: Unsigned Addition of Small Fields\n");
   printf("========================\n");
   adder(0x20, 0x35);
   adder(0x80, 0x7F);
   adder(0x80, 0xFF);
   adder(0xFF, 0x01);
   printf("========================\n");
}

void adder(unsigned int a, unsigned int b)
{
   unsigned int c = a + b;
   if (c >= 128)
   {
      c-=128;
   }

   printf("0x%X + 0x%X = 0x%X\n", a, b, c);
}
