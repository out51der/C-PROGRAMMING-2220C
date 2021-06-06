#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int oldScores[SCORES_SIZE];
   int newScores[SCORES_SIZE];
   int i;

   for (i = 0; i < SCORES_SIZE; ++i) {
      scanf("%d", &(oldScores[i]));
   }

   for (i = 0; i < 4; ++i) {
      newScores[3] = oldScores[i];
      
         for (i = 0; i < 3; ++i) {
            newScores[i] = oldScores[i+1];
         }
   }
   
   

   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", newScores[i]);
   }
   printf("\n");

   return 0;
}
