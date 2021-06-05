#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 8; // Number of elements in array
   int userVals[NUM_ELEMENTS]; // User numbers
   int i;                  // Loop index
   
   printf("Enter %d integer values...\n", NUM_ELEMENTS);
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("Value: ");
      scanf("%d", &(userVals[i]));
   }
   
   printf("You entered: ");
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("%d ", userVals[i]);
   }
   printf("\n");
   
   return 0;
}
