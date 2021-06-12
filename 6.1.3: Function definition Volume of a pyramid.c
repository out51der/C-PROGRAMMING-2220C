#include <stdio.h>

double PyramidVolume (double baseLength, double baseWidth, double pyramidHeight){
 
   double baseArea;
   double vol;
   
   baseArea = baseLength*baseWidth;
   vol = (baseArea*pyramidHeight)/3;
   return vol;
   
}

int main(void) {
   double userLength;
   double userWidth;
   double userHeight;

   scanf("%lf", &userLength);
   scanf("%lf", &userWidth);
   scanf("%lf", &userHeight);

   printf("Volume: %f\n", PyramidVolume(userLength, userWidth, userHeight) );

   return 0;
}
