/* EXERCISE 2.26
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to read two numbers to determine if the first
   is a multiple of the second */

#include <stdio.h>

int main(void)
{
   int num1, num2;    // Variable declaration

   printf("Please Enter two numbers\n");
   printf("First Number: ");
   scanf("%d", &num1);
   printf("Second Number: ");
   scanf("%d", &num2);

   // Decision of multiple number
   // if first divided by second is equal to zero then it is multiple
   if ((num1 % num2) == 0)
      printf("%d is a multiple of %d", num1, num2);
   if ((num1 % num2) != 0)
      printf("%d is not a multiple of %d", num1, num2);
}
