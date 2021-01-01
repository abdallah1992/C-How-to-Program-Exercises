/* EXERCISE 3.28
   This program is written by Abdullah Abdel menem
   at 1 / 1 / 2021 */

/* Analysis of examination results */

#include <stdio.h>

int main()
{
   /* initializing variables in declarations */
   int passes = 0, failures = 0, student = 1, result;

   /* process 10 students; counter-controlled loop */
   while ( student <= 10 ) {
      printf( "Enter result ( 1=pass,2=fail ): " );
      scanf( "%d", &result );

      if ( result == 1 )        /* if/else nested in while */
      {
         passes = passes + 1;
         student = student + 1;
      }
      else if (result == 2)
      {
         failures = failures + 1;
         student = student + 1;
      }
      else
      {
         printf("Invalid Input\n");
         printf("Enter a valid result\n");
      }
   }

   printf( "Passed %d\n", passes );
   printf( "Failed %d\n", failures );

   if ( passes > 8 )
      printf( "Raise tuition\n" );

   return 0;   /* successful termination */
}
