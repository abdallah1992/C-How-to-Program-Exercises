/* EXERCISE 3.22
   This program is written by Abdullah Abdel menem
   at 24 / 12 / 2020 */

/* Decrement operator (--) */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
   int num, num1;

   /* Program Process */

   printf("Enter a number: ");
   scanf("%d", &num);

   num1 = num;

   // showing the difference between predecrementing and postdecrementing
   printf("The number %d after postdecrementing  is %d\n", num, num1--);
   num1 = num;
   printf("The number %d after predecrementing  is %d\n",num, --num1);

   return 0;
}
