/* EXERCISE 3.17
   This program is written by Abdullah Abdel menem
   at 23 / 12 / 2020 */

/* This Program to calculate gallons of gasoline per mile for car */

#include <stdio.h>

/* main which program begins execution */
int main(void)
{
   /* Variable declaration and initialization */
      float gallons, mileGallon;
      float overAll = 0.0, overAllAverage;
      int miles, counter = 0;
   /* Program Process */
      // Input gallons used per tankful
      printf("Enter the gallons used (-1 to end): ");
      scanf("%f", &gallons);

      // while the user has not entered the sentinel
      while (gallons != -1)
      {
         // Input the miles driven
         printf("Enter the miles driven: ");
         scanf("%d", &miles);
         // calculate the miles per gallons
         mileGallon = (float) miles / gallons;
         /* Program Termination */
         // print the miles per gallons
         printf("The miles per gallon for this tank was %f\n", mileGallon);

         // print a new line
         printf("\n");

         // increment the counter
         counter++;

         // Add the value to overall value
         overAll += mileGallon;

         // Input gallons used per tankful
         printf("Enter the gallons used (-1 to end): ");
         scanf("%f", &gallons);
      }

      // calculate the overall Average
      overAllAverage = overAll / counter;

      // print a new line
         printf("\n");

      // display the overall average
      printf("The overall average miles/gallon was %f", overAllAverage);

      return 0;
}
