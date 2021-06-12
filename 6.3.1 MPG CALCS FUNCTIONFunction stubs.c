#include <stdio.h> 
// Program converts a trip's kilometers and liters into miles, gallons, and mpg

double ConvKilometersToMiles(double numKm) {
   double milesPerKm = 0.621371;
   return numKm * milesPerKm;
}
 
double ConvLitersToGallons(double numLiters) {
   double gallonsPerLiter = 0.264172;
   return numLiters * gallonsPerLiter;
}
 
double CalcMpg(double distMiles, double gasGallons) {
   return distMiles/gasGallons;
}
 
int main(void) {
   double distKm;
   double distMiles;
   double gasLiters;
   double gasGal;
   double userMpg;
   
   printf("Enter kilometers driven: \n");
   scanf("%lf", &distKm);
   printf("Enter liters of gas consumed: \n");
   scanf("%lf", &gasLiters);
   
   distMiles = ConvKilometersToMiles(distKm);
   gasGal = ConvLitersToGallons(gasLiters);
   userMpg = CalcMpg(distMiles, gasGal);
   
   printf("Miles driven: %lf\n", distMiles);
   printf("Gallons of gas: %lf\n", gasGal);
   printf("Mileage: %lf mpg\n", userMpg);
   
   return 0;
}
