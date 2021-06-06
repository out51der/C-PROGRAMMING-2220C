#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int origList[NUM_VALS];
   int offsetAmount[NUM_VALS];
   int i;

   scanf("%d", &origList[0]);
   scanf("%d", &origList[1]);
   scanf("%d", &origList[2]);
   scanf("%d", &origList[3]);

   scanf("%d", &offsetAmount[0]);
   scanf("%d", &offsetAmount[1]);
   scanf("%d", &offsetAmount[2]);
   scanf("%d", &offsetAmount[3]);

  for (i=0; i < NUM_VALS; ++i) {
     printf("%d,", origList[i]*offsetAmount[i]);
  }
   printf("\n");

   return 0;
}
