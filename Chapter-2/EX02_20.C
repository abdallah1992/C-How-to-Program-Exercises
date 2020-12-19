/* EXERCISE 02.20
   This program is written by Abdullah Abdel menem
   at 7 / 12 / 2020 */

/* This Program to read the radius of a circle and make some calculations */

#include <stdio.h>

int main(void)
{
   // Variables Initialization
   float radius;

   printf("Input the radius of the circle: ");
   scanf("%f", &radius);

   printf("Diameter is %f\n", 2 * radius);                 // Diameter of circle
   printf("Circumference is %f\n", 2 * radius * 3.14159);  // Circumference of circle
   printf("Area is %f\n", 3.14159 * radius * radius);      // Area of circle
}
