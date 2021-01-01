/* EXERCISE 3.26
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Tabular Output */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int number = 3;

   /* Program Process */

   // Print this line at the top of the table
   printf("A\tA+2\tA+4\tA+6\n\n");

   // while number less than or equal to 10
   while (number <= 15)
   {
      printf("%d\t%d\t%d\t%d\n", number, number + 2, number + 4, number + 6);

      // increment number by 3
      number += 3;
   }

   return 0;
}
