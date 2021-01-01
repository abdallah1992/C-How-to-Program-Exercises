/* EXERCISE 3.27
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Finding Two largest Numbers */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int number, counter = 10, large = 0, largest = 0, temp;

   /* Program Process */
   // while counter greater than or equal to 1
   while (counter >= 1)
   {
      printf("Enter numbers of units: ");
      scanf("%d", &number);

      // if selection for large and largest number
      if (number > largest)
      {
         // use temp variable to swap between numbers
         temp = largest;
         largest = number;
         large = temp;
      }
      else if (number > large)
      {
         large = number;
      }

      // decrement counter
      counter--;
   }
   // print a new line
   printf("\n\n");

   // Print the large and largest number among these numbers
   printf("The largest two numbers of units is %d and %d", large, largest);

   return 0;
}
