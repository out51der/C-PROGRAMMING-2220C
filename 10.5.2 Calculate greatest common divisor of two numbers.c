#include <stdio.h>

/* Determine the greatest common divisor
   of two numbers, e.g. GCD(8, 12) = 4
*/
int GCDCalculator(int inNum1, int inNum2) {
   int gcdVal;     // Holds GCD results
   
   if(inNum1 == inNum2) {    // Base case: Numbers are equal
      gcdVal = inNum1;       // return value
   }
   else {                    // Recursive case: subtract smaller from larger
      if (inNum1 > inNum2) { // call function with new values
         gcdVal = GCDCalculator(inNum1 - inNum2, inNum2);
      }
      else {
         gcdVal = GCDCalculator(inNum1, inNum2 - inNum1);
      }
   }
   
   return gcdVal;
}

int main(void) {
   int gcdInput1;     // First input to GCD calc
   int gcdInput2;     // Second input to GCD calc
   int gcdOutput;     // Result of GCD
   
   // Print program function
   printf("This program outputs the greatest \n");
   printf("common divisor of two numbers.\n");
   
   // Prompt user for input
   printf("Enter first number: ");
   scanf("%d", &gcdInput1);
   
   printf("Enter second number: ");
   scanf("%d", &gcdInput2);
   
   // Check user values are > 1, call recursive GCD function
   if ((gcdInput1 < 1) || (gcdInput2 < 1)) {
      printf("Note: Neither value can be below 1.\n");
   }
   else {
      gcdOutput = GCDCalculator(gcdInput1, gcdInput2);
      printf("Greatest common divisor = %d\n", gcdOutput);
   }
   
   return 0;
}

/*
This program outputs the greatest 
common divisor of two numbers.
Enter first number: 12
Enter second number: 8
Greatest common divisor = 4

...

This program outputs the greatest 
common divisor of two numbers.
Enter first number: 456
Enter second number: 784
Greatest common divisor = 8

...

This program outputs the greatest 
common divisor of two numbers.
Enter first number: 0
Enter second number: 10
Note: Neither value can be below 1.
*/
