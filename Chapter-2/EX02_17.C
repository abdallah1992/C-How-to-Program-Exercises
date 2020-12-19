/* EXERCISE 02.17
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to print numbers from 1 to 4 by three methods */

#include <stdio.h>

int main(void)
{
   // First method: one printf with no conversion specifier
   printf("1 2 3 4\n");

   // Second method: one printf with four conversion specifiers
   printf("%d %d %d %d\n", 1, 2, 3, 4);

   // Third method: Four printf statements
   printf("1 ");
   printf("2 ");
   printf("3 ");
   printf("4");
}
