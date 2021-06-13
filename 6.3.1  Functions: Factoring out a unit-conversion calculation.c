#include <stdio.h>

double MphAndMinutesToMiles(double milesPerHour, double minutesTraveled){
   
   double hoursTraveled;
   double milesTraveled;
   
   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;
   
   }

int main(void) {
   double milesPerHour;
   double minutesTraveled;

   scanf("%lf", &milesPerHour);
   scanf("%lf", &minutesTraveled);

   printf("Miles: %lf\n", MphAndMinutesToMiles(milesPerHour, minutesTraveled));

   return 0;
}
