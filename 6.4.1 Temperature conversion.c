#include <stdio.h>


// FINISH  Define CelsiusToFahrenheit function here
double CelsiusToFahrenheit(double tempC){
 double tempF=0;
 
 tempF =(9/5)*tempC+32.00;

}


int main(void) {
   double tempF;
   double tempC;

   printf("Enter temperature in Celsius:\n");
   scanf("%lf", &tempC);

   

   printf("Fahrenheit: %lf\n", CelsiusToFahrenheit(tempC));

   return 0;
}
