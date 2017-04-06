#include <stdio.h>
#include <math.h>
#include "Lab1_3.h"


void Part3()
{
   printf("\n\nPart 3: Unsigned Addition of Small Fields\n");
   printf("========================\n");
   adder3(0x20, 0x35);
   adder3(0x80, 0x7F);
   adder3(0x80, 0xFF);
   adder3(0xFF, 0x01);
   printf("========================\n");
}

void adder3(unsigned int a, unsigned int b)
{
   unsigned int c = a + b;

   if (c >= 256)
   {
      c -= 256;
   }

   printf("0x%02X + 0x%02X = 0x%02x\n", a, b, c);
}
