#include <stdio.h>

int main(void) {
   const int EMPANADA_COST = 3;
   const int TACO_COST     = 4;
   
   int userMoney;
   int numTacos;
   int numEmpanadas;
   int mealCost;
   int maxEmpanadas;
   int maxTacos;
   int numOptions;
   int numDiners;

   mealCost = 0;
   numOptions = 0;
   
   printf("Enter money for meal: ");
   scanf("%d", &userMoney);
   
   printf("How many people are eating: ");
   scanf("%d", &numDiners);
   
   maxEmpanadas = userMoney / EMPANADA_COST;
   maxTacos = userMoney / TACO_COST;
   
   numOptions = 0;
   for (numTacos = 0; numTacos <= maxTacos; ++numTacos) {
      for (numEmpanadas = 0; numEmpanadas <= maxEmpanadas; ++numEmpanadas) {
         
         // Total items purchased must be equally 
         // divisible by number of diners
         if ( ((numTacos + numEmpanadas) % numDiners) != 0) {
            continue;
         }
         
         mealCost = (numEmpanadas * EMPANADA_COST) + (numTacos * TACO_COST);
         
         if (mealCost == userMoney) {
            printf("$%d buys %d empanadas and %d tacos without change.\n",
                   mealCost, numEmpanadas, numTacos);
            numOptions = numOptions + 1;
         }
      }
   }
   
   if (numOptions == 0) {
      printf("You cannot buy a meal without having change left over.\n");
   }
   
   return 0;
}
