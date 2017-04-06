#include <stdio.h>

void Part2(){
   unsigned char bytestring[] = {
      0x41, 0x33, 0x54, 0x80, 0xFF, 0x99, 0x01, 0x78, 0x55, 0x20, 0xFE, 0xEE, 0x00, 0x00, 0x00, 0x00
   };
   int l_bytestring, i;
   
   unsigned short int *psi = (unsigned short int *)bytestring;
   unsigned int *pi = (unsigned int *)bytestring;
   unsigned long int *pli = (unsigned long int *)bytestring;

   l_bytestring = 16;

   printf("\nPart 2: Byte Ordering\n");
   printf("========================\n");
   printf("Byte Values of entire array (show as hexadecimal values, e.g., C7):\n\n");
  
   for (i = 0; i < l_bytestring; i++)
      printf("%02x ", bytestring[i]);
   
   printf("\n\nShort Int versions of the first four values of an array in hexadecimal:\n\n");
   
   for (i = 0; i < 4; i++)
      printf("%04x ", psi[i]);
   
   printf("\n\nInt versions of the first two values of an array in hexadecimal:\n\n");
   
   for (i = 0; i < 2; i++)
      printf("%08x ", pi[i]);

   printf("\n\nLong Int version of the first value of an array in hex:\n\n");
   printf("%016lx\n\n", pli[0]);

   printf("2e: 14 33 45 08 ff 99 10 87 55 02 ef ee 00 00 00 00\n\n");
   printf("2f: 1433 4508 ff99 1087\n\n");
   printf("2g: 14334508 ff991087\n\n");
   printf("2h: 14334508ff991087\n");
   printf("========================");
}
