
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int* userVals = NULL; // No array yet
   int numVals;
   int i;
  
   //Dynamically allocated array.
//pointerVariableName = (dataType*)malloc(numElements * sizeof(dataType))
  
   printf("Enter number of integer values: ");
   scanf("%d", &numVals);
   
   userVals = (int*)malloc(numVals * sizeof(int));
   
   printf("Enter %d integer values...\n", numVals);
   for (i = 0; i < numVals; ++i) {
      printf("Value: ");
      scanf("%d", &(userVals[i]));
   }
   
   printf("You entered: ");
   for (i = 0; i < numVals; ++i) {
      printf("%d ", userVals[i]);
   }
   printf("\n");
   
   free(userVals);
   
   return 0;
}
