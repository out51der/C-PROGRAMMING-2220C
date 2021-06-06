#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 8;   // Number of elements
   int userVals[NUM_ELEMENTS];   // User numbers
   int copiedVals[NUM_ELEMENTS]; // Copied/modified user numbers
   int i;                        // Loop index
   
   // Prompt user for input values
   printf("Enter %d integer values...\n", NUM_ELEMENTS);
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("Value: ");
      scanf("%d", &(userVals[i]));
   }
   
   // Copy userVals to copiedVals array
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      copiedVals[i] =  userVals[i];
   }
   
   // Convert negatives to 0
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (copiedVals[i] < 0) {
         copiedVals[i] = 0;
      }
   }
   
   // Print numbers
   printf("\nOriginal and new values: \n");
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("%d became %d\n", userVals[i], copiedVals[i]);
   }
   printf("\n");
   
   return 0;
}
