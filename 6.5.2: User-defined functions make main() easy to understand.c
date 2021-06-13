#include <stdio.h>
#include <stdlib.h>

// Function prompts user to enter positive non-zero number
int PromptForPositiveNumber(void) {
   int userNum;

   userNum = 0;
   
   while (userNum <= 0) {
      printf("Enter a positive number (>0): \n");
      scanf("%d", &userNum);
      
      if (userNum <= 0) {
         printf("Invalid number.\n");
      }
   }
   
   return userNum;
}


// Function returns greatest common divisor of two inputs
int FindGCD(int aVal, int bVal) {
   int numA;
   int numB;

   numA = aVal;
   numB = bVal;
   
   while (numA != numB) { // Euclid's algorithm
      if (numB > numA) {
         numB = numB - numA;
      }
      else {
         numA = numA - numB;
      }
   }
   
   return numA;
}

// Function returns least common multiple of two inputs
int FindLCM(int aVal, int bVal) {
   int lcmVal;
   
   lcmVal = abs(aVal * bVal) / FindGCD(aVal, bVal);
   
   return lcmVal;
}

int main(void) {
   int usrNumA;
   int usrNumB;
   int lcmResult;
   
   printf("Enter value for first input\n");
   usrNumA = PromptForPositiveNumber();
   
   printf("\nEnter value for second input\n");
   usrNumB = PromptForPositiveNumber();
   
   lcmResult = FindLCM(usrNumA, usrNumB);
   
   printf("\nLeast common multiple of %d and %d is %d\n",
         usrNumA, usrNumB, lcmResult);
   
   return 0;
}
