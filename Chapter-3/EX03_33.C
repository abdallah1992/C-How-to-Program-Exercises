/* EXERCISE 3.28
   This program is written by Abdullah Abdel menem
   at 1 / 1 / 2021 */

/* Typing square using asterisks */

#include <stdio.h>

int main()
{
   /* Variables declarations */
   int side, row, column, valid = 0;

   // Ask user for the side of the square from 1 o 20
   printf("Enter the side of the square (from 1 to 20): ");
   scanf("%d", &side);

   // loop until valid side
   while(valid == 0)
    {
      if (side <= 20)
      {
         if (side >= 1)
         {
            valid = 1;
         }
         else
         {
            printf("Enter a valid side\n");
            printf("Enter the side of the square (from 1 to 20): ");
            scanf("%d", &side);
         }
      }
      else
      {
         printf("Enter a valid side\n");
         printf("Enter the side of the square (from 1 to 20): ");
         scanf("%d", &side);
      }
    }

   // All sides of square are equal
   row = side;
   column = side;

   // loop until typing the square
   while (row >= 1)
   {
      // print rows
      while (column >= 1)
      {
         printf("*");
         --column;
      }

      printf("\n");
      --row;
      column = side;
   }

   return 0;   /* successful termination */
}
