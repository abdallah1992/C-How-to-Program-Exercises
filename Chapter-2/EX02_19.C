/* EXERCISE 02.19
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to input three different integers then
   make some calculations */

#include <stdio.h>

int main(void)
{
   // Variables Initialization
   int num1, num2, num3, largest, smallest;

   printf("Input three different integers: ");
   scanf("%d%d%d", &num1, &num2, &num3);

   largest = num1;
   smallest = num1;

   // Compare to show largest and smallest
   if (num2 < smallest)
      smallest = num2;
   if (num3 < smallest)
      smallest = num3;
   if (num2 > largest)
      largest = num2;
   if (num3 > largest)
      largest = num3;

   printf("Sum is %d\n", num1 + num2 + num3);            // sum of numbers
   printf("Average is %d\n", (num1 + num2 + num3) / 3);  // Average of numbers
   printf("Product is %d\n", num1 * num2 * num3);        // Product of numbers
   printf("Smallest is %d\n", smallest);
   printf("Largest is %d", largest);
}
