#include <stdio.h>

/* Output the Fibonacci sequence step-by-step.
   Fibonacci sequence starts as:
   0 1 1 2 3 5 8 13 21 ... in which the first
   two numbers are 0 and 1 and each additional
   number is the sum of the previous two numbers
*/

void ComputeFibonacci(int fibNum1, int fibNum2, int runCnt) {
   
   printf("%d + %d = %d\n", fibNum1, fibNum2, fibNum1 + fibNum2);
   
   if (runCnt <= 1) { // Base case: Ran for user specified
                      // number of steps, do nothing
   }
   else {            // Recursive case: compute next value
      ComputeFibonacci(fibNum2, fibNum1 + fibNum2, runCnt - 1);
   }
}

int main(void) {
   int runFor;     // User specified number of values computed

   // Output program description
   printf("This program outputs the\n");
   printf("Fibonacci sequence step-by-step,\n");
   printf("starting after the first 0 and 1.\n\n");

   // Prompt user for number of values to compute
   printf("How many steps would you like? ");
   scanf("%d", &runFor);
   
   // Output first two Fibonacci values, call recursive function
   printf("0\n1\n");
   ComputeFibonacci(0, 1, runFor);
   
   return 0;
}
