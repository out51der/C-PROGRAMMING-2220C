#include <stdio.h>

// Output GCD of user-input numA and numB

int main(void) {
   int numA;  // User input
   int numB;  // User input
   
   printf("Enter first positive integer: ");
   scanf("%d", &numA);
   
   printf("Enter second positive integer: ");
   scanf("%d", &numB);
   
   while (numA != numB) { // Euclid's algorithm
      if (numB > numA) {
         numB = numB - numA;
      }
      else {
         numA = numA - numB;
      }
   }
   
   printf("GCD is: %d\n", numA);
   
   return 0;
}
