
#include <stdio.h>
#include <math.h>

double CalcCircularBaseArea(double radius) {
   return M_PI * radius * radius;
}

double CalcCylinderVolume(double baseRadius, double height) {
   return CalcCircularBaseArea(baseRadius) * height;
}

double CalcCylinderSurfaceArea(double baseRadius, double height) {
   return (2 * M_PI * baseRadius * height) + (2 * CalcCircularBaseArea(baseRadius));
}

int main(void) {
   double radius;  // User defined feet
   double height;  // User defined height

   // Prompt user for radius
   printf("Enter base radius: ");
   scanf("%lf", &radius);

   // Prompt user for height
   printf("Enter height: ");
   scanf("%lf", &height);

   // Output the cylinder volume result
   printf("Cylinder volume: ");
   printf("%.1lf\n", CalcCylinderVolume(radius, height));


   // Output the cylinder surface area result
   printf("Cylinder surface area: ");
   printf("%.3lf\n", CalcCylinderSurfaceArea(radius, height));

   return 0;
}
