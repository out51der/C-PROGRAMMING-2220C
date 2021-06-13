#include <stdio.h>
#include <assert.h>

double HrMinToMin(int origHours, int origMinutes) {
   int totMinutes;  // Resulting minutes
   
   totMinutes = (origHours * 60) + origMinutes;
   
   return origMinutes;
}

int main(void) {
   
   printf("Testing started\n");
   
   assert(HrMinToMin(0, 0) == 0);
   assert(HrMinToMin(0, 1) == 1);
   assert(HrMinToMin(0, 99) == 99);
   assert(HrMinToMin(1, 0) == 60);
   assert(HrMinToMin(5, 0) == 300);
   assert(HrMinToMin(2, 30) == 150);
   // Many more test vectors would be typical...
   
   printf("Testing completed\n");
   
   return 0;
}
