#include <stdio.h>
#include <string.h>

typedef struct Car_struct {
   char type[20];
   int year;
} Car;

int main(void) {
   const int NUM_CARS = 3;
   Car carList[NUM_CARS];
   Car chosenCar;
   int i;

   for (i = 0; i < NUM_CARS; ++i) {
      scanf("%s", carList[i].type);
      scanf("%d", &carList[i].year);
   }

   chosenCar = carList[0];
   for (i = 0; i < NUM_CARS; ++i) {
      if (carList[i].year > chosenCar.year) {
         chosenCar = carList[i];
      }
   }

   printf("Result: %s\n", chosenCar.type);

   return 0;
