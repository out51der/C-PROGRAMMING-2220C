#include <stdio.h>

void SwapArrayEnds(int array[], const int size) {   
   int i;
   
   if (size > 0) {
      int temp = array[0];
      array[0] = array[size-1];
      array[size-1] = temp;
   
}

}
int main(void) {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i;
   int userNum;

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      scanf("%d", &sortArray[i]);
   }

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      printf("%d ", sortArray[i]);
   }
   printf("\n");

   return 0;
}
