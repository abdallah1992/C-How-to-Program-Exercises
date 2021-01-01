/* EXERCISE 3.18
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Customer credit Account and charges */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int accountNumber;
   float beginningBalance, newBalance;
   float itemCharges, customerCredits, creditLimit;

   /* Program Process */
   // input the Account Number
   printf("Enter account number (-1 to end): ");
   scanf("%d", &accountNumber);

   // loop until sentinel value detected
   while (accountNumber != -1)

   {
      // input begging balance
      printf("Enter beginning balance: ");
      scanf("%f", &beginningBalance);

      // input total charges
      printf("Enter total charges: ");
      scanf("%f", &itemCharges);

      // input total credits
      printf("Enter total credits: ");
      scanf("%f", &customerCredits);

      // input credit limit
      printf("Enter credit limit: ");
      scanf("%f", &creditLimit);

      // new balance = beginning balance + charges - credits
      newBalance = beginningBalance + itemCharges - customerCredits;

      /* Program Termination */
      // if credit limit exceeded, display exceeded
      if (newBalance > creditLimit)
      {
         // Display Customer Information
         printf("Account:      %d\n", accountNumber);
         printf("Credit Limit: %.2f\n", creditLimit);
         printf("Balance:      %.2f\n", newBalance);
         printf("Credit limit Exceeded");
      }

      // print new line
      printf("\n\n");

      // input the Account Number
      printf("Enter account number (-1 to end): ");
      scanf("%d", &accountNumber);
   }
   return 0;
}
