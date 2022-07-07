
// This program will calculate the value according to user choice.
// Developer: Lilian Ward
// CMIS102
// Date: April 28, 2020.

#include <stdio.h>
#include <math.h>

void printHelp () {
   printf ("");
   printf ("a: a(x) = x*x\n");
   printf ("b: b(x) = x*x*x\n");
   printf ("c: c(x) = x^2 + 2*x + 7\n");
   printf ("d: shrink(x)= x/2\n");
   printf ("q: quit\n");
}

void a(float x) {
    float v = x*x;
    printf ("a(%.2f) = %.2f^2 = %.2f\n", x, x, v);
} // end function a
void b(float x) {
    float v = x*x*x;
     printf ("a(%.2f) = %.2f^3 = %.2f\n", x, x, v);
} // end function b
void c(float x) {
   float v = x*x + 2*x + 7;
   printf ("c(%.2f) = %.2f^2 + 2*%.2f + 7 = %.2f\n",
   x, x, x, v);
} // end function c
void shrink (float x){
  float v=x/2;
  printf("shrink(%.2f) = %.2f/2 = %.2f\n", x,x,v);
}// end function shrink
int menu () {
   char selection;
   float x;
   printHelp ();
   printf("Enter your choice: ");
   scanf ("%s", &selection);
   if (selection == 'q') return 1;
   printf("Enter a value: ");
   scanf ("%f", &x);
   if (selection == 'a') a(x);
   if (selection == 'b') b(x);
   if (selection == 'c') c(x);
   if (selection == 'd') shrink(x);
   return 0;
} // end function menu
int main() {
   while (menu() == 0);
   printf ("... bye ...\n");
   return 0;
} // end main
  
