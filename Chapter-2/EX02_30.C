/* EXERCISE 2.30
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to read five-digit number then separate digits */

#include <stdio.h>

int main(void)
{
   int num;    // Variable declaration

   printf("Input a five-digit number: ");
   scanf("%d", &num);

   // using division and modulus to separate digits
   printf("%d   ", num / 10000);
   num = num % 10000;
   printf("%d   ", num / 1000);
   num = num % 1000;
   printf("%d   ", num / 100);
   num = num % 100;
   printf("%d   ", num / 10);
   printf("%d", num % 10);
}
