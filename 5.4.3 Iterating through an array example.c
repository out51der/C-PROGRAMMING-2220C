#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 8;  // Number of elements
   int userVals[NUM_ELEMENTS];  // Array of user numbers
   int i;                       // Loop index
   int maxVal;                  // Computed max
   
   // Prompt user to populate array
   printf("Enter %d integer values...\n", NUM_ELEMENTS);
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("Value: ");
      scanf("%d", &(userVals[i]));
   }
   
   // Determine largest (max) number
   maxVal = userVals[0];        // Largest so far
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] > maxVal) {
         maxVal = userVals[i];
      }
   }
   printf("Max: %d\n", maxVal);
   
   return 0;
}
