#include <stdio.h>

void PrintDate(int currDay, int currMonth, int currYear) {

   // Parameter error checking
   if ((currDay < 1) || (currDay > 31)) {
      printf("Invalid day (%d). Using 1.\n", currDay);
      currDay = 1;
   }

   if ((currMonth < 1) || (currMonth > 12)) {
      printf("Invalid month (%d). Using 1.\n", currMonth);
      currMonth = 1;
   }

   // Begin function's normal behavior
   printf("%d/%d/%d", currMonth, currDay, currYear);
}


int main(void) {

   PrintDate(30, 7, 2012);
   printf("\n\n");

   PrintDate(40, 7, 2012);
   printf("\n\n");

   PrintDate(30, 13, 2012);
   printf("\n\n");

   return 0;
}
