#include <stdio.h>

int main(void) {
   const int NUM_POINTS = 4;
   int dataPoints[NUM_POINTS];
   int controlVal;
   int i;

   scanf("%d", &controlVal);

   for (i = 0; i < NUM_POINTS; ++i) {
      scanf("%d ", &(dataPoints[i]));
   }

   for (i = 0; i < NUM_POINTS; ++i) {
      if ( dataPoints[i] < controlVal) {
         dataPoints[i] = dataPoints[i]*2;
      }
   }
   for (i = 0; i < NUM_POINTS; ++i) {
      printf("%d ", dataPoints[i]);
   }
   printf("\n");

   return 0;
}
