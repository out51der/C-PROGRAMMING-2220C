
#include <stdio.h>

int main(void) {
   double vehicleMpg;
   double* valPointer = NULL;

   valPointer = &vehicleMpg;
   
   *valPointer = 29.6; // Assigns the number to the variable
                       // POINTED TO by valPointer.
  
  // vehicleMpg = 40.0;   // Uncomment this later

   printf("Vehicle MPG = %lf\n", vehicleMpg);
   printf("Vehicle MPG = %lf\n", *valPointer);
   return 0;
}
