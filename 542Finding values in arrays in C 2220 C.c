#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int userValues[NUM_VALS];
   int i;
   int matchValue;
   int numMatches = -99; // Assign numMatches with 0 before your for loop

   scanf("%d", &matchValue);

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(userValues[i]));
   }

numMatches = 0;
      for ( i = 0; i < NUM_VALS; ++i) {
         if (matchValue == userValues[i]){
            numMatches = numMatches +1;
         }
      }
   printf("matchValue: %d, numMatches: %d\n", matchValue, numMatches);

   return 0;
}
