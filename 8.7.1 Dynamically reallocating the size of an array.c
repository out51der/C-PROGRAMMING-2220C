#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int* userVals = NULL; // No array yet
   int numVals;
   int i;
   char userInput;
   int userValsSum;
   double userValsAvg;

  
  
  //Construct 8.7.1: The realloc function.
//pointerVariable = (type*)realloc(pointerVariable, numElements * sizeof(type))
  
   userInput = 'c';
   
   while (userInput == 'c') {
      
      printf("Enter number of integer values: ");
      scanf(" %d", &numVals);
      
      if (userVals == NULL) {
         userVals = (int*)malloc(numVals * sizeof(int));
      }
      else {
         userVals = (int*)realloc(userVals, numVals * sizeof(int));
      }
      
      printf("Enter %d integer values...\n", numVals);
      for (i = 0; i < numVals; ++i) {
         printf("Value: ");
         scanf("%d", &(userVals[i]));
      }
      
      // Calculate average
      userValsSum = 0;
      for (i = 0; i < numVals; ++i) {
         userValsSum = userValsSum + userVals[i];
      }
      userValsAvg = (double)userValsSum / (double)numVals;
      
      printf("Average = %lf\n", userValsAvg);
      
      printf("\nEnter 'c' to compute another average (any other key to quit): ");
      scanf(" %c", &userInput);
   }
   
   free(userVals);
   
   return 0;
}
