#include <stdio.h>

double CalcBaseArea(double baseLength, double baseWidth) {
   return baseLength * baseWidth;
}

double CalcPyramidVolume(double baseLength, double baseWidth, double pyramidHeight){

   double volume;
   volume = ((baseLength*baseWidth)*pyramidHeight)*1/3;
 return volume;
 
}

int main(void) {
   double userLength;
   double userWidth;
   double userHeight;

   scanf("%lf", &userLength);
   scanf("%lf", &userWidth);
   scanf("%lf", &userHeight);

   printf("Volume: %lf\n", CalcPyramidVolume(userLength, userWidth, userHeight));

   return 0;
}
