
#include <stdio.h>

int main(void) {
   double miles;      // User defined distance
   double hoursFly;   // Time to fly distance
   double hoursDrive; // Time to drive distance
   
   // Prompt user for distance
   printf("Enter a distance in miles: ");
   scanf("%lf", &miles);
   
   // Calculate the correspond time to fly/drive distance
   hoursFly = miles / 500.0;
   hoursDrive = miles / 60.0;
   
   // Output resulting values
   printf("%.2lf miles would take:\n", miles);
   printf("%.2lf hours to fly\n", hoursFly);
   printf("%.2lf hours to drive\n\n", hoursDrive);
   
   return 0;
}
