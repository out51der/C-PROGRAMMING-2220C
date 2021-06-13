
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



#include <stdio.h>

typedef struct MonetaryChange_struct {
   int dollars;
    int quarters;
    int dimes;
    int nickels;
} MonetaryChange;

MonetaryChange ComputeChange(int cents) {
   MonetaryChange change;
   int nickel = 5;    // Each nickel consists of 5 cents.
   int dime = 10;     // Each dime consists of 10 cents.   
   int quarter = 25;     // Each quarter consists of 25 cents.
   int dollar = 100;    // Each dollar consists of 100 cents.

   change.dollars=0;
   change.quarters=0;
   change.dimes=0;
   change.nickels=0;


   do{  
        if (cents >= 100){
            change.dollars = cents / dollar;  
            cents = cents % change.dollars;
        }
        else if (cents >= 25){
            change.quarters = cents / quarter;  
            cents = cents % quarter;
        }
        else if (cents >= 10){
            change.dimes = cents /dime;  
            cents = cents % dime;
        }
        else if (cents >= 5){
            change.nickels = cents /nickel;  
            cents = cents % nickel;
        }
    }while (cents != 0);


   return change;
}

int main(void) {
   int userCents = 0;
   MonetaryChange change;

   printf("Enter cents: ");
   scanf("%d", &userCents);

   change = ComputeChange(userCents);

   // printf("Quarters: %d\n", change.quarters);
   printf("Your change is : %d dollar, %d quarters, %d dime, %d nickels\n", change.dollars, change.quarters, change.dimes, change.nickels);

   return 0;
}
