#include <stdio.h>
#include <string.h>

typedef struct Pizza_struct {
   char pizzaName[75];
   int caloriesInSlice;
} Pizza;

int main(void) {
   Pizza availablePizzas[2];

   scanf("%s", availablePizzas[0].pizzaName);
   scanf("%d", &availablePizzas[0].caloriesInSlice);

   scanf("%s", availablePizzas[1].pizzaName);
   scanf("%d", &availablePizzas[1].caloriesInSlice);

   /* Your code goes here */
   
   availablePizzas[0].caloriesInSlice = availablePizzas[1].caloriesInSlice;
   
   

   printf("A %s slice contains %d calories.\n", availablePizzas[0].pizzaName, availablePizzas[0].caloriesInSlice);
   printf("A %s slice contains %d calories.\n", availablePizzas[1].pizzaName, availablePizzas[1].caloriesInSlice);

   return 0;
}
