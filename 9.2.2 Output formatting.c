#include <stdio.h>

int main(void) {
   double outsideTemperature;

   scanf("%lf", &outsideTemperature);

   /* Your solution goes here  */
   if (outsideTemperature > 0){
    printf("+%.6lf\n", outsideTemperature);
   }
   else {
   
   printf("%.6lf\n", outsideTemperature);
   }

   return 0;
}
