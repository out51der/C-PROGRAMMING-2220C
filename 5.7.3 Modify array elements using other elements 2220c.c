#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int bonusScores[SCORES_SIZE];
   int i;

   for (i = 0; i < SCORES_SIZE; ++i) {
      scanf("%d", &(bonusScores[i]));
   }

   for (i = 0; i < SCORES_SIZE -1; ++i) {
      bonusScores[i] = bonusScores[i] + bonusScores[i+1];
   }
   

   
   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", bonusScores[i]);
   }
   printf("\n");

   return 0;
}
