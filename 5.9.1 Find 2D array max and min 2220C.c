#include <stdio.h>

int main(void) {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0; // Assign with first element in milesTracker before loop
   int minMiles = 0; // Assign with first element in milesTracker before loop

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         scanf("%d", &(milesTracker[i][j]));
      }
   }
   
   maxMiles = milesTracker[0][0];
   minMiles = milesTracker[0][0];
   
   for (i = 0; i < NUM_ROWS; i++) {
    
      for (j=0; j< NUM_COLS; j++) {
       
       if (milesTracker[i][j] > maxMiles) {
          maxMiles = milesTracker[i][j];
       }   
         if (milesTracker[i][j] < minMiles) {
         minMiles = milesTracker[i][j];
         }
      
      }
   }
   
   
    printf("Min miles: %d\n", minMiles);
    printf("Max miles: %d\n", maxMiles);

    return 0;
}
