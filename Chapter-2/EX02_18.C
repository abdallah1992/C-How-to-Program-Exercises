/* EXERCISE 02.18
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to ask user to enter two integer numbers
   then compare them */

#include <stdio.h>

int main(void)
{
   int num1, num2; // variable declarations

   printf("Enter two number to be compared\n");
   printf("First Number: ");
   scanf("%d", &num1);
   printf("Second Number: ");
   scanf("%d", &num2);

   // comparing them using if statement
   if (num1 > num2)
      printf("%d is larger", num1);
   if (num2 > num1)
      printf("%d is larger", num2);
   if (num1 == num2)
      printf("These numbers are equal");
}
