#include <stdio.h>

const double CM_PER_IN = 2.54;
const int    IN_PER_FT = 12;

/* Converts a height in feet/inches to centimeters */
double HeightFtInToCm(int heightFt, int heightIn) {
   int totIn;
   double cmVal;
   
   totIn = (heightFt * IN_PER_FT) + heightIn; // Total inches
   cmVal = totIn * CM_PER_IN;                 // Conv inch to cm
   return cmVal;
}

int main(void) {
   int userFt;  // User defined feet
   int userIn;  // User defined inches
   
   // Prompt user for feet/inches
   printf("Enter feet and inches separated by a space: ");
   scanf("%d %d", &userFt, &userIn);
   
   // Output converted feet/inches to cm result
   printf("Centimeters: %lf\n",
          HeightFtInToCm(userFt,userIn));
   
   return 0;
}
