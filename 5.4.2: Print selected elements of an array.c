#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 8; // Number of elements
   int userVals[NUM_ELEMENTS]; // User numbers
   int i;                      // Loop index
   int sumVal;                 // For computing sum
   int maxVal;
   // Prompt user to populate array
   printf("Enter %d integer values...\n", NUM_ELEMENTS);
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("Value: \n");
      scanf("%d", &(userVals[i]));
   }
   
   maxVal = userVals[0];        // Largest so far
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] > 21) {
         
      printf("Num bigger than 21: %d\n",userVals[i]);;
      }
   }
   
   
   return 0;
}
