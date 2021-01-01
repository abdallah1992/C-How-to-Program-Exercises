/* EXERCISE 3.20
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Annual interest for a loan */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int days;
   float interestCharge, interestRate, principle;

   /* Program Process */
   // The inputs (Loan Principle)
   printf("Enter Loan Principle (-1 to end): ");
   scanf("%f", &principle);

   // loop until sentinel value detected
   while (principle != -1)

   {
      // The inputs (Rate, Days)
      printf("Enter Interest rate: ");
      scanf("%f", &interestRate);
      printf("Enter term of the Loan in days: ");
      scanf("%d", &days);

      // Calculation of Interest = Principle * Rate * Days / 365
      interestCharge = principle * interestRate * days / 365;

      /* Program Termination */
      // Display Interest charge
      printf("Interest charge is: $%.2f\n", interestCharge);

      // print new line
      printf("\n\n");

   // The inputs (Loan Principle)
      printf("Enter Loan Principle (-1 to end): ");
      scanf("%f", &principle);
   }

   return 0;
}
