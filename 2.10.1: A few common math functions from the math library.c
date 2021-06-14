/*Function	Behavior	Example
sqrt(x)	Square root of x	sqrt(9.0) evaluates to 3.0.
pow(x, y)	Power: 	pow(6.0, 2.0) evaluates to 36.0.
fabs(x)	Absolute value of x	fabs(-99.5) evaluates to 99.5.
 */

  #include <stdio.h>
#include <math.h>

int main(void) {
   double initMass;   // Initial mass of a substance
   double growthRate; // Annual growth rate
   double yearsGrow;  // Years of growth
   double finalMass;  // Final mass after those years
   
   printf("Enter initial mass: ");
   scanf("%lf", &initMass);
   
   printf("Enter growth rate (Ex: 0.05 is 5%/year): ");
   scanf("%lf", &growthRate);
   
   printf("Enter years of growth: ");
   scanf("%lf", &yearsGrow);
   
   finalMass = initMass * pow(1.0 + growthRate, yearsGrow);
   // Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow
   
   printf("Final mass after %lf years is: %lf\n",
          yearsGrow, finalMass);
   
   return 0;
}
