#include <stdio.h>
#include <string.h>

typedef struct Pizza_struct {
   char pizzaName[75];
   int caloriesPerSlice;
} Pizza;

int main(void) {
   Pizza pizzasInStore[2];

   strcpy(pizzasInStore[0].pizzaName, "Barbecue");
   strcpy(pizzasInStore[1].pizzaName, "Ham and Cheese");
/* Your code goes here 
 To assign the first value from input to Barbecue's data member caloriesPerSlice use pizzasInStore[0] 
 to get the struct at element 0, which corresponds 
 to Barbecue. Then, use the dot operator to access the data member 
 caloriesPerSlice. Ham and Cheese's caloriesPerSlice is similarly 
 assigned with the next value from input by getting the struct at element 1, 
 and then using the dot operator to access the data member caloriesPerSlice. 
 Ex: scanf("%d", &pizzasInStore[0].caloriesPerSlice)
*/


   pizzasInStore[0].caloriesPerSlice = 0;
   pizzasInStore[1].caloriesPerSlice = 0;
   
   printf("Enter Calories per Slice of Pizza: \n");
	scanf("%d", &pizzasInStore[0].caloriesPerSlice);
	
	printf("Enter Calories per Slice of Pizza: \n");
	scanf("%d", &pizzasInStore[1].caloriesPerSlice);
	
	
   printf("A %s slice contains %d calories.\n", pizzasInStore[0].pizzaName, pizzasInStore[0].caloriesPerSlice);
   printf("A %s slice contains %d calories.\n", pizzasInStore[1].pizzaName, pizzasInStore[1].caloriesPerSlice);

   return 0;
}
