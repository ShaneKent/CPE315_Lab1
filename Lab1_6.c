#include <stdio.h>
#include "Lab1_6.h"

void Part6(){
   
   unsigned char al_a2[]     = { 0x01, 0x00, 0x00, 0x00, 0x44 };
   unsigned char al_a1[]     = { 0x00, 0x00, 0xFF, 0xFF, 0x30 };
   unsigned char al_result[] = { 0x00, 0x00, 0x00, 0x00, 0x00 };
   
   unsigned char bl_a2[]     = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
   unsigned char bl_a1[]     = { 0x01, 0x00, 0x00, 0x00, 0x00 };
   unsigned char bl_result[] = { 0x00, 0x00, 0x00, 0x00, 0x00 };
   
   unsigned char *a2;
   unsigned char *a1;
   unsigned char *result;

   int size = 5;

   printf("\nPart 6: Performing Extended Field Arithmetic\n");
   printf("========================\n");
   printf("6a)\n");
   printf("   0x44  0x00  0x00  0x00  0x01\n");
   printf("+  0x30  0xFF  0xFF  0x00  0x00\n\n");
   
   a2     = al_a2;
   a1     = al_a1;
   result = al_result;

   arbitrary_byte_add(result, a1, a2, size, 0);
   
   printf("6b)\n");
   printf("   0xFF  0xFF  0xFF  0xFF  0xFF\n");
   printf("+  0x00  0x00  0x00  0x00  0x01\n\n");
   
   a2     = bl_a2;
   a1     = bl_a1;
   result = bl_result;

   arbitrary_byte_add(result, a1, a2, size, 0);
   
   printf("========================\n");
}

unsigned int arbitrary_byte_add(unsigned char * result, unsigned char * a1, unsigned char * a2, int size, unsigned int carry_in){
  
   int i;
   int last_carry = carry_in;

   for (i = 0; i < size; i++){
      result[i] = a2[i] + a1[i] + last_carry;
       
      if (result[i] <= a2[i] && result[i] <= a1[i] && result[i] <= last_carry)
         last_carry = 1;
      else
         last_carry = 0; 
      
   }

   printf("=  ");

   for (i = size-1; i >= 0; i--)
      printf("0x%02x  ", result[i]);


   printf("\n\nCarry Out = %x\n\n", last_carry);

   return 0;

}
