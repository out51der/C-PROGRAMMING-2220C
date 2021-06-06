#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int hourlyTemp[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(hourlyTemp[i]));
   }
      for (i = 0; i < NUM_VALS-1; ++i) {
         printf("%d, ", hourlyTemp[i]);
      }
   
      for (i = NUM_VALS - 1; i < NUM_VALS; ++i) {
         printf("%d", hourlyTemp[i]);
      }
      
   printf("\n");

   return 0;
}
