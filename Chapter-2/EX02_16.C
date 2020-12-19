/* EXERCISE 2.16
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to ask user to enter two numbers then make arithmetic operations for it*/

#include <stdio.h>

int main(void)
{
   int num1, num2;    // Variable declaration

   printf("Please Enter two numbers for calculations\n");
   printf("First Number: ");
   scanf("%d", &num1);
   printf("Second Number: ");
   scanf("%d", &num2);

   printf("The Sum is %d\n", num1 + num2);
   printf("The Product is %d\n", num1 * num2);
   printf("The Difference is %d\n", num1 - num2);
   printf("The Quotient is %d\n", num1 / num2);
   printf("The Modulus is %d", num1 % num2);
}
