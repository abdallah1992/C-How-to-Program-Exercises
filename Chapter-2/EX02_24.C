/* EXERCISE 2.24
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to read integer number and show if it is odd or even */

#include <stdio.h>

int main(void)
{
   // Variable declaration
   int num;

   printf("Input a number: ");
   scanf("%d", &num);

   //if the number divided by 2 equal to zero, then the number is even else it is odd
   if ((num % 2) == 0)
   printf("%d is even", num);

   if ((num % 2) != 0)
   printf("%d is odd", num);
}
