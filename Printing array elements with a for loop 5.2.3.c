#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(courseGrades[i]));
   }

    for (i = 0; i < NUM_VALS; ++i) {
      printf("%d ", courseGrades[i]);
   }
   
   printf("\n");
   
    for (i = NUM_VALS - 1; i >= 0; --i) {
      printf("%d ", courseGrades[i]);
   }
printf("\n");

   return 0;
}
