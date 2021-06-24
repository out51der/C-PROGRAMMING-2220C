#include <stdio.h>

// Define void UpdateTimeWindow(...)

void UpdateTimeWindow(int* timeStart,int* timeEnd,int offsetAmount){

/* Your solution goes here  */
*timeStart = *timeStart + offsetAmount;
*timeEnd = *timeEnd + offsetAmount;
}


int main(void) {
   int timeStart;
   int timeEnd;
   int offsetAmount;

   scanf("%d", &timeStart);
   scanf("%d", &timeEnd);
   scanf("%d", &offsetAmount);
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   UpdateTimeWindow(&timeStart, &timeEnd, offsetAmount);
   printf("timeStart = %d, timeEnd = %d\n", timeStart, timeEnd);

   return 0;
}
