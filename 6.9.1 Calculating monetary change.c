
#include <stdio.h>

// FIXME: Add parameters for dimes, nickels, and pennies. 
void ComputeChange(int totCents, int* numQuarters, int* numDimes, int* numNickels, int* numPennies ) {
   
   printf("FIXME: Finish writing ComputeChange\n");
   
   *numQuarters = totCents / 25;
   *numDimes = totCents / 10;
   *numNickels = totCents / 5;
   *numPennies = totCents / 1;
}

int main(void) {
   int userCents;
   int numQuarters;
   int numDimes;
   int numNickels;
   int numPennies;
   // FIXME add variables for dimes, nickels, pennies

   
   printf("Enter total cents: \n");
   scanf("%d", &userCents);
   
   printf("FIXME: Finish writing main()\n");
   
   ComputeChange(userCents, &numQuarters, &numDimes, &numNickels, &numPennies);
   
   printf("Quarters: %d\n", numQuarters);
   printf("Dimes: %d\n", numDimes);
   printf("Nickels: %d\n", numNickels);
   printf("Pennies: %d\n", numPennies);
   
   return 0;
}
