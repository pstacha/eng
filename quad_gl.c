/* quad_gl.c
description: The program solves the quadratic equation.
date: Mar. 20, 2021
author: Peter Stacha
*/
#include <stdio.h>
#include <math.h>
int main() {
   long double a, b, c, delta, x1, x2, x1r, x1i, x2r, x2i, y;
   printf("This program solves the quadratic equation: \n\n");
   //printf("___________________________________\n\n");
   printf("f(x) = a*x^2 + b*x + c\n\n"); 
   //printf("___________________________________\n\n");
   printf("Please enter the coefficients a, b, c:\n");
   printf("a = "), scanf("%Lg", &a);
   printf("b = "), scanf("%Lg", &b);
   printf("c = "), scanf("%Lg", &c);
   /*
   printf("\nYou have entered:\n");
   printf("a = %.4g\nb = %.4Lg\nc = %.4Lg\n", a, b, c);
   */ 
   delta = b*b - 4*a*c;
   if (delta < 0) {
      x1r = -b/(2*a);
      x1i =  sqrt(-delta)/(2*a);
      x2r = -b/(2*a);
      x2i =  -sqrt(-delta)/(2*a);
   
      printf("\nThe solutions are:\n");
      printf("           x1 = %.3Lg%+.4Lgi\n", x1r, x1i);
      printf("           x2 = %.3Lg%+.4Lgi\n", x2r, x2i);
   } else {
      printf("\nThe solutions are:\n");
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      printf("           x1 = %.3Lg\n", x1);
      printf("           x2 = %.3Lg\n", x2);
      /*
      printf("\nFor verification:\n");
      printf("Inserting x1 results in:\n");
      y = a*x1*x1 + b*x1 + c;
      printf("y = %.3Lg\n", y);
      printf("Inserting x2 results in:\n");
      y = a*x2*x2 + b*x2 + c;
      printf("y = %.3Lg\n", y);
      */
   }
   return(0);
}
