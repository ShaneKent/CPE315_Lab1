#include <stdio.h>
#include <math.h>
#include "Lab1_4.h"


void Part4()
{
   printf("\n\nPart 4: Detecting a Carry condition\n");
   printf("========================\n");
   adder4(0x20, 0x35);
   adder4(0x80, 0x7F);
   adder4(0x80, 0xFF);
   adder4(0xFF, 0x01);
   printf("========================\n");
}

void adder4(unsigned int a, unsigned int b)
{
   int x = 0;

   if (a + b >= 256)
   {
      x = 1;
   }

   printf("0x%X + 0x%X Carry: %x\n", a, b, x);
}
