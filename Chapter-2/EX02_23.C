/* EXERCISE 2.23
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to input five integers then find largest and smallest*/

#include <stdio.h>

int main(void)
{
   // Variable declaration
   int num1, num2, num3, num4, num5;
   int largest, smallest;

   printf("Input five numbers:");
   scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

   largest = num1;
   smallest = num5;

   // comparing numbers to choose largest and smallest
   // finding largest
   if (num2 > largest)
      largest = num2;
   if (num3 > largest)
      largest = num3;
   if (num4 > largest)
      largest = num4;
   if (num5 > largest)
      largest = num5;

   // finding smallest
   if (num1 < smallest)
      smallest = num1;
   if (num2 < smallest)
      smallest = num2;
   if (num3 < smallest)
      smallest = num3;
   if (num4 < smallest)
      smallest = num4;

   printf("Largest is %d\n", largest);
   printf("Smallest is %d", smallest);
}
