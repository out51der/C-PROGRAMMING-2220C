#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 8; // Number of elements
   int userVals[NUM_ELEMENTS]; // User numbers
   int i;                      // Loop index
   int tempVal;                // Temp variable for swapping
   
   // Prompt user to input values
   printf("Enter %d integer values...\n", NUM_ELEMENTS);
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("Value: ");
      scanf("%d", &(userVals[i]));
   }
   
   // Reverse array's elements
   for (i = 0; i < (NUM_ELEMENTS / 2); ++i) {
      tempVal = userVals[i];                        // Temp for swap
      userVals[i] = userVals[NUM_ELEMENTS - 1 - i]; // First part of swap
      userVals[NUM_ELEMENTS - 1 - i] = tempVal;     // Second complete
   }
   
   // Print numbers
   printf("\nNew values: ");
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("%d ", userVals[i]);
   }
   
   return 0;
}
