/* EXERCISE 3.25
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Tabular Output */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int number = 1;

   /* Program Process */

   // Print this line at the top of the table
   printf("N\t10*N\t100*N\t1000*N\n\n");

   // while number less than or equal to 10
   while (number <= 10)
   {
      printf("%d\t%d\t%d\t%d\n", number, number * 10, number * 100, number * 1000);

      // increment number
      number++;
   }

   return 0;
}
