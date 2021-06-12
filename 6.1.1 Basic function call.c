#include <stdio.h>

double GetMinutesAsHours(double origMinutes) {

   double hours;
   
   hours = origMinutes / 60;

}

int main(void) {
   double minutes;

   scanf("%lf", &minutes);

   // Will be run with 210.0, 3600.0, and 0.0.
   printf("%f\n", GetMinutesAsHours(minutes));

   return 0;
}
