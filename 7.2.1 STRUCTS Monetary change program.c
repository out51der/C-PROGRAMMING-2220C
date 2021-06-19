#include <stdio.h>

typedef struct MonetaryChange_struct {
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   // FIXME: Finish data members
} MonetaryChange;

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;

   // FIXME: Finish function
   change.quarters = 25; // FIXME
   change.dimes = 10;
   change.nickels = 5;
   change.pennies = 1;
   
   change.quarters = cents/change.quarters;
   change.dimes = cents/change.dimes;
   
   return change;
}

int main(void) {
   int userCents;
   MonetaryChange change;

   printf("Enter cents: \n");
   scanf("%d", &userCents);

   change = ComputeChange(userCents);

   printf("Quarters: %d\n", change.quarters);
   printf("Dimes: %d\n", change.dimes); 

   return 0;
}
