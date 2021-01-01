/* EXERCISE 3.19
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Salesman weekly salary */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   float gross, salary;

   /* Program Process */
   // input the Gross sales
   printf("Enter sales in dollars (-1 to end): ");
   scanf("%f", &gross);

   // loop until sentinel value detected
   while (gross != -1)

   {
      // Calculation of Salary = $200 + 9 % of gross
      salary = 200.00 + (9 * gross) / 100;

      /* Program Termination */
      // Display Salesman Salary
      printf("Salary is: %.2f\n", salary);

      // print new line
      printf("\n\n");

      // input the Gross sales
      printf("Enter sales in dollars (-1 to end): ");
      scanf("%f", &gross);
   }

   return 0;
}
