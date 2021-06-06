#include <stdio.h>

int main(void) {
   const int SCORES_SIZE = 4;
   int lowerScores[SCORES_SIZE];
   int i;

   for (i = 0; i < SCORES_SIZE; ++i) {
      scanf("%d", &(lowerScores[i]));
   }
   
   for (i = 0; i < SCORES_SIZE; ++i) {
      lowerScores[i] =  lowerScores[i]-1;
      if ( lowerScores[i]<=0) {
         lowerScores[i]=0;
      }
   }
   for (i = 0; i < SCORES_SIZE; ++i) {
      printf("%d ", lowerScores[i]);
   }
   printf("\n");

   return 0;
}
