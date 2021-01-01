/* EXERCISE 3.24
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Finding largest Number */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   // Variables to be used
   // Input ten numbers to determine the largest
      // put any number to largest
      // if the number is greater than largest
         // then put this number to largest and move on

   /* Variable declaration and initialization */
   int number, counter = 10, largest = 0;

   /* Program Process */
   // while counter greater than or equal to 1
   while (counter >= 1)
   {
      printf("Enter numbers of units: ");
      scanf("%d", &number);
      // if number is greater than largest
      if (number > largest)
      {
         largest = number;
      }

      // decrement counter
      counter--;
   }
   // print a new line
   printf("\n\n");

   // Print the largest number among these numbers
   printf("The largest number of units is %d", largest);

   return 0;
}
