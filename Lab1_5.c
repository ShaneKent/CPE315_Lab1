#include <stdio.h>
#include "Lab1_5.h"

void Part5(){
   printf("\n\nPart 5: Signed Addition and Overflow\n");
   printf("========================\n");
   signed_adder(0x20, 0x35);
   signed_adder(0x80, 0x7F);
   signed_adder(0x80, 0xFF);
   signed_adder(0xFF, 0x01);
   printf("========================\n");
}

void signed_adder(signed short int a, signed short int b){
   signed short int c = a + b;
   int x = 0;

   if (c >= 256){
      x = 1;
   }

   printf("0x%02hx + 0x%02hx Overflow: %x\n", a, b, x);
}
