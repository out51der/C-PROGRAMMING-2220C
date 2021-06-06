#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int testGrades[NUM_VALS];
   int i;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(testGrades[i]));
   }

   sumExtra = 0;
      for (i = 0; i < NUM_VALS; ++i){
         if (testGrades[i] > 100){ 
            sumExtra = sumExtra + (testGrades[i] % 100);
         }
      }

   printf("sumExtra: %d\n", sumExtra);
   return 0;
}
