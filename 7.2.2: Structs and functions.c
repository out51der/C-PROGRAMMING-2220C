#include <stdio.h>

typedef struct ElapsedTime_struct {
   int weeksVal;
   int daysVal;
} ElapsedTime;

ElapsedTime ConvertToWeeksAndDays(int totalDays) {
   ElapsedTime tempVal;

     tempVal.weeksVal  = totalDays / 7;
     tempVal.daysVal = totalDays % 7;
     
     return tempVal;

}

int main(void) {
   ElapsedTime elapsedDays;
   int totalDays;

   scanf("%d", &totalDays);

   elapsedDays = ConvertToWeeksAndDays(totalDays);

   printf("%d weeks and %d days\n", elapsedDays.weeksVal, elapsedDays.daysVal);

   return 0;
}
