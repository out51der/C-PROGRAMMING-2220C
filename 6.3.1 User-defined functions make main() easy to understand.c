#include <stdio.h>

double StepsToMiles(int numSteps) {
   const double FEET_PER_STEP = 2.5;               // Typical adult
   const int    FEET_PER_MILE = 5280;

   return numSteps * FEET_PER_STEP * (1.0 / FEET_PER_MILE);
}

double StepsToCalories(int numSteps) {
   const double STEPS_PER_MINUTE = 70.0;           // Typical adult
   const double CALORIES_PER_MINUTE_WALKING = 3.5; // Typical adult
   double minutesTotal;
   double caloriesTotal;

   minutesTotal = numSteps / STEPS_PER_MINUTE;
   caloriesTotal = minutesTotal * CALORIES_PER_MINUTE_WALKING;

   return caloriesTotal;
}

int main(void) {
   int stepsWalked;

   printf("Enter number of steps walked: ");
   scanf("%d", &stepsWalked);

   printf("Miles walked: %lf\n", StepsToMiles(stepsWalked));
   printf("Calories: %lf\n", StepsToCalories(stepsWalked));

   return 0;
}
